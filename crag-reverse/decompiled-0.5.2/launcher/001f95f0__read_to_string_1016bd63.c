// 001f95f0 read_to_string

/* <&std[6c98fd8553dbae28]::fs::File as std[6c98fd8553dbae28]::io::Read>::read_to_string */

undefined1  [16] __rustcall
<&std[6c98fd8553dbae28]::fs::File_as_std[6c98fd8553dbae28]::io::Read>::read_to_string
          (undefined8 *param_1,longlong param_2)

{
  undefined8 uVar1;
  longlong lVar2;
  undefined **ppuVar3;
  undefined8 uVar4;
  undefined1 auVar5 [16];
  longlong local_48;
  
  auVar5 = std[6c98fd8553dbae28]::fs::buffer_capacity_required(*param_1);
  lVar2 = (*(code *)PTR_try_reserve_0021abb0)();
  if (lVar2 == -1) {
    uVar1 = *(undefined8 *)(param_2 + 0x10);
    auVar5 = std[6c98fd8553dbae28]::io::default_read_to_end::<&std[6c98fd8553dbae28]::fs::File>
                       (param_1,param_2,auVar5._0_8_,auVar5._8_8_);
    ppuVar3 = auVar5._8_8_;
    uVar4 = *(undefined8 *)(param_2 + 0x10);
    (*(code *)PTR_from_utf8_00219d78)();
    if (local_48 != 0) {
      if ((auVar5._0_8_ & 1) == 0) {
        ppuVar3 = &PTR_DAT_00217390;
      }
      auVar5._8_8_ = ppuVar3;
      auVar5._0_8_ = 1;
      uVar4 = uVar1;
    }
    *(undefined8 *)(param_2 + 0x10) = uVar4;
  }
  else {
    auVar5._8_8_ = 0x2600000003;
    auVar5._0_8_ = 1;
  }
  return auVar5;
}


