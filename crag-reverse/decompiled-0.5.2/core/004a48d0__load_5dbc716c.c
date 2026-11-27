// 004a48d0 load

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* <craggemini_core[66f3c71560d70857]::Config>::load */

undefined8 * __rustcall
<craggemini_core[66f3c71560d70857]::Config>::load
          (undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  code *pcVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  char *pcVar4;
  undefined8 uVar5;
  undefined4 uVar6;
  undefined4 extraout_XMM0_Da;
  undefined1 auVar7 [16];
  longlong local_330;
  undefined8 local_328;
  ulonglong local_320;
  char *local_318;
  undefined8 local_310;
  ulonglong local_308;
  undefined8 local_300;
  undefined8 uStack_2f8;
  char **local_2f0;
  undefined *local_2e8;
  undefined8 local_2e0;
  char *local_2d8;
  undefined8 local_2d0;
  
  craggemini_core[66f3c71560d70857]::private_file(&local_2e0,param_2,param_3,0);
  if ((int)local_2e0 == 1) {
    param_1[1] = local_2d8;
    *param_1 = 2;
  }
  else {
    local_330 = 0;
    local_328 = 1;
    local_320 = 0;
    local_2d0 = CONCAT44(local_2d0._4_4_,local_2e0._4_4_);
    local_2e0 = 0x40001;
    local_2d8 = (char *)0x40001;
    auVar7 = std[6c98fd8553dbae28]::io::default_read_to_end::
             <core[c0acaeba6ab4c2e0]::io::util::Take<std[6c98fd8553dbae28]::fs::File>>
                       (&local_2e0,&local_330,0);
    if ((auVar7._0_8_ & 1) == 0) {
      (*(code *)PTR_close_00799030)();
      if (local_320 < 0x40001) {
        local_310 = local_328;
        local_308 = local_320;
        local_300 = 0;
        uStack_2f8 = 0;
        uVar6 = serde_json[dc3825464c436029]::de::from_trait::
                <serde_json[dc3825464c436029]::read::SliceRead,craggemini_core[66f3c71560d70857]::Config>
                          (&local_2e0,&local_310);
        if ((int)local_2e0 == 2) {
          local_318 = local_2d8;
          local_2f0 = &local_318;
          local_2e8 = PTR_fmt_00799518;
          (*(code *)PTR_format_inner_00799048)(uVar6,&local_2f0);
          uVar5 = (*(code *)PTR_<alloc[12e961f32105355]::string::String>_00799238)();
          uVar6 = core[c0acaeba6ab4c2e0]::ptr::drop_glue::
                  <serde_json[dc3825464c436029]::error::Error>(&local_318,&local_310);
          param_1[1] = uVar5;
          *param_1 = 2;
        }
        else {
          uVar6 = (*(code *)PTR_memcpy_00799008)(uVar6,0x2d0);
        }
      }
      else {
        (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00798ff8)();
        pcVar4 = (char *)(*(code *)PTR___rust_alloc_00799000)();
        uVar5 = s_exceeds_256_KiB_001965c9._8_8_;
        if (pcVar4 == (char *)0x0) {
          (*(code *)PTR_handle_error_00798ff0)();
                    /* WARNING: Does not return */
          pcVar1 = (code *)invalidInstructionException();
          (*pcVar1)();
        }
        *(ulonglong *)(pcVar4 + 0xd) =
             CONCAT53(s_exceeds_256_KiB_001965c9._3_5_,s_exceeds_256_KiB_001965c9._0_3_);
        *(undefined8 *)(pcVar4 + 0x15) = uVar5;
        uVar3 = ram0x001965c8;
        uVar2 = s_configuration_001965bc._8_4_;
        uVar6 = s_configuration_001965bc._4_4_;
        *(undefined4 *)pcVar4 = s_configuration_001965bc._0_4_;
        *(undefined4 *)(pcVar4 + 4) = uVar6;
        *(undefined4 *)(pcVar4 + 8) = uVar2;
        *(undefined4 *)(pcVar4 + 0xc) = uVar3;
        local_2e0 = 0x1d;
        local_2d0 = 0x1d;
        local_2d8 = pcVar4;
        uVar5 = (*(code *)PTR_<alloc[12e961f32105355]::string::String>_00799238)();
        param_1[1] = uVar5;
        *param_1 = 2;
        uVar6 = extraout_XMM0_Da;
      }
    }
    else {
      param_1[1] = auVar7._8_8_;
      *param_1 = 2;
      uVar6 = (*(code *)PTR_close_00799030)();
    }
    if (local_330 != 0) {
      (*(code *)PTR___rust_dealloc_00798fc8)(uVar6,1);
    }
  }
  return param_1;
}


