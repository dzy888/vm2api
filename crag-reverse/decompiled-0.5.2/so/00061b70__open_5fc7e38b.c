// 00061b70 open

/* WARNING: Removing unreachable block (ram,0x00061c29) */
/* <agy_bridge[64a9e9deac6c45ce]::shm::ShmClient>::open */

undefined8 * __rustcall
<agy_bridge[64a9e9deac6c45ce]::shm::ShmClient>::open
          (undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  uint uVar1;
  uint uVar2;
  char cVar3;
  int iVar4;
  longlong *plVar5;
  ulonglong uVar6;
  undefined1 auVar7 [16];
  char local_f0;
  undefined4 local_ec;
  undefined8 local_e8;
  longlong local_b0;
  uint local_a8;
  int local_a4;
  undefined *local_90;
  
  cVar3 = (*(code *)PTR_is_absolute_000c3b50)();
  if (cVar3 == '\0') {
    local_e8 = (*(code *)PTR_<&str>_000c3b30)();
LAB_00061bfa:
    param_1[1] = local_e8;
    *param_1 = 0;
    return param_1;
  }
  (*(code *)PTR__open_000c3b58)(param_3,param_2);
  if (local_f0 != '\0') goto LAB_00061bfa;
  (*(code *)PTR_metadata_000c3b60)();
  if (((((local_a8 & 0xf000) == 0x8000) &&
       (iVar4 = (*(code *)PTR_geteuid_000c3da0)(), (local_a8 & 0xfff) == 0x180)) && (local_b0 == 1))
     && ((local_a4 == iVar4 && (&UNK_00021000 <= local_90)))) {
    auVar7 = <agy_bridge[64a9e9deac6c45ce]::shm::Mapping>::map_file(local_ec,local_90);
    plVar5 = auVar7._8_8_;
    if ((auVar7._0_8_ & 1) == 0) {
      if ((*plVar5 == 0x31304d4853594741) && ((int)plVar5[1] == 1)) {
        uVar1 = *(uint *)((longlong)plVar5 + 0x14);
        uVar2 = *(uint *)((longlong)plVar5 + 0x1c);
        if (((uVar2 - 0x10000 < 0x3ff0001 && uVar1 - 0x10000 < 0x3ff0001) &&
             (int)plVar5[2] == 0x1000) &&
           ((uVar6 = (ulonglong)*(uint *)(plVar5 + 3), (ulonglong)uVar1 + 0x1000 == uVar6 &&
            ((undefined *)(uVar2 + uVar6) == local_90)))) {
          *param_1 = plVar5;
          param_1[1] = local_90;
          param_1[2] = 0x1000;
          param_1[3] = (ulonglong)uVar1;
          param_1[4] = uVar6;
          param_1[5] = (ulonglong)uVar2;
          goto LAB_00061cb9;
        }
      }
      (*(code *)PTR_munmap_000c3ac0)();
      goto LAB_00061ca3;
    }
  }
  else {
LAB_00061ca3:
    plVar5 = (longlong *)(*(code *)PTR_<&str>_000c3b30)();
  }
  param_1[1] = plVar5;
  *param_1 = 0;
LAB_00061cb9:
  (*(code *)PTR_close_000c3ab8)();
  return param_1;
}


