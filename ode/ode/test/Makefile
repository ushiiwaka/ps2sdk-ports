EE_BINS = \
	test_ode.elf \
	test_buggy.elf \
	test_chain1.elf \
	test_chain2.elf \
	test_collision.elf \
	test_crash.elf \
	test_friction.elf \
	test_hinge.elf \
	test_joints.elf \
	test_slider.elf \
	test_space.elf \
	test_space_stress.elf \
	test_boxstack.elf \
	test_moving_trimesh.elf \
	test_trimesh.elf \
	test_step.elf \
	test_I.elf 


EE_OBJS = 
EE_INCS = -I../include
EE_LIBS = -lode -lopcode -lice -ldrawstuff -lm -ldreamgl -lpad
EE_LDFLAGS = -L$(PS2DEV)/dreamgl/lib 

all: $(EE_BINS)

install:

clean:
	rm -f $(EE_BINS) $(EE_OBJS)

include $(PS2SDK)/Defs.make
include ../../../Makefile.eeglobal
