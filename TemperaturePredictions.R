dt = read.table("/dev/stdin", sep="\t", header=TRUE, skip=1);
dt$complete = (substr(dt$tmax, 1, 1) != "M") & (substr(dt$tmin, 1, 1) != "M")
dth = subset(dt, dt$complete == TRUE)

dth$tmin = as.numeric(as.character(dth$tmin))
dth$tmax = as.numeric(as.character(dth$tmax))

regmin = lm(tmin ~ yyyy + month + tmax, data = dth)
regmax = lm(tmax ~ yyyy + month + tmin, data = dth)

dtx_miss = subset(dt,substr(dt$tmax,1,1) == "M")
dtx_miss$tmin = as.numeric(as.character(dtx_miss$tmin))

dtn_miss = subset(dt,substr(dt$tmin,1,1)=="M")
dtn_miss$tmax = as.numeric(as.character(dtn_miss$tmax))

dtx_miss$pred = predict(regmax, dtx_miss) 
dtn_miss$pred = predict(regmin, dtn_miss) 

all = dtn_miss[c("tmin","pred")]
all2 = dtx_miss[c("tmax","pred")]

names(all)[1] = "name"
names(all2)[1] = "name"

all = rbind(all,all2)
all$pos = as.numeric(substr(all$name,9,11))

all = all[order(all$pos),]
res = all$pred

write.table(res, row.names=FALSE, col.names=FALSE)
