// 00765fb0 read_to_end

/* <std[6c98fd8553dbae28]::fs::File as std[6c98fd8553dbae28]::io::Read>::read_to_end */

undefined8 __rustcall
<std[6c98fd8553dbae28]::fs::File_as_std[6c98fd8553dbae28]::io::Read>::read_to_end
          (undefined8 param_1,ulonglong *param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  undefined8 uVar4;
  ulonglong uVar5;
  undefined1 auVar6 [16];
  int local_50 [2];
  ulonglong local_48;
  undefined8 local_38;
  
  local_38 = param_1;
  auVar6 = std[6c98fd8553dbae28]::fs::buffer_capacity_required();
  uVar5 = 0;
  if ((auVar6._0_8_ & 1) != 0) {
    uVar5 = auVar6._8_8_;
  }
  uVar1 = *param_2;
  uVar2 = param_2[2];
  if (uVar1 - uVar2 < uVar5) {
    if (CARRY8(uVar5,uVar2)) {
      return 1;
    }
    uVar3 = uVar1 * 2;
    if (uVar1 * 2 < uVar5 + uVar2) {
      uVar3 = uVar5 + uVar2;
    }
    uVar5 = 8;
    if (8 < uVar3) {
      uVar5 = uVar3;
    }
    <alloc[12e961f32105355]::raw_vec::RawVecInner>::finish_grow(local_50,uVar1,param_2[1],uVar5,1,1)
    ;
    if (local_50[0] == 1) {
      return 1;
    }
    param_2[1] = local_48;
    *param_2 = uVar5;
  }
  uVar4 = std[6c98fd8553dbae28]::io::default_read_to_end::<&std[6c98fd8553dbae28]::fs::File>
                    (&local_38,param_2,auVar6._0_8_,auVar6._8_8_);
  return uVar4;
}


