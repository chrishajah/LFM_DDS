onbreak {quit -f}
onerror {quit -f}

vsim -t 1ps -lib xil_defaultlib dds_001_opt

do {wave.do}

view wave
view structure
view signals

do {dds_001.udo}

run -all

quit -force
