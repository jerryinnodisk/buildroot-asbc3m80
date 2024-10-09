# ENABLE DOSBOX ON IMX8MP WITH BUILDROOT

## 1.Build image
```sh
make freescale_imx8mp_dosbox_defconfig
make 
```
## 2.Open Xwayland window
```sh
weston --xwayland
```

## 3.Pull and run debian in docker with X window proprity
```sh
docker run -it -e DISPLAY=$DISPLAY -v /tmp/.X11-unix:/tmp/.X11-unix debian
```

## 3.Run Dosbox under debian
```sh
apt update
apt install dosbox
dosbox
```