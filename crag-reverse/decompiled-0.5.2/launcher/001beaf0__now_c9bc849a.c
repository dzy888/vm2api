// 001beaf0 now

/* <chrono[1cd233408897ab2f]::offset::utc::Utc>::now */

int * __rustcall
<chrono[1cd233408897ab2f]::offset::utc::Utc>::now
          (int *param_1,undefined8 param_2,undefined4 param_3,undefined8 param_4,undefined8 param_5,
          undefined8 param_6)

{
  code *pcVar1;
  uint uVar2;
  int iVar3;
  int *piVar4;
  longlong lVar5;
  int local_58;
  longlong local_50;
  int local_48;
  undefined1 local_30 [16];
  
  (*(code *)PTR_now_0021a630)();
  (*(code *)PTR_duration_since_0021a418)(0,0);
  if (local_58 == 1) {
    (*(code *)PTR_unwrap_failed_00219ec0)
              (&DAT_00216df0,local_30,&PTR_s__vendor_chrono_0_4_45_src_offset_00216e10,param_6,
               param_3);
  }
  else {
    lVar5 = local_50 % 0x15180;
    if (0xfffffffeffffffff < ((lVar5 >> 0x3f) + local_50 / 0x15180) - 0x7ff506c5U) {
      uVar2 = (uint)(lVar5 >> 0x3f);
      iVar3 = (*(code *)PTR_from_num_days_from_ce_opt_00219d88)
                        (0xffffffff00000000,(int)(local_50 / 0x15180) + uVar2 + 0xaf93b);
      if (iVar3 != 0) {
        *param_1 = iVar3;
        param_1[1] = (uVar2 & 0x15180) + (int)lVar5;
        param_1[2] = local_48;
        return param_1;
      }
    }
  }
  (*(code *)PTR_unwrap_failed_00219e58)();
  pcVar1 = (code *)swi(3);
  piVar4 = (int *)(*pcVar1)();
  return piVar4;
}


