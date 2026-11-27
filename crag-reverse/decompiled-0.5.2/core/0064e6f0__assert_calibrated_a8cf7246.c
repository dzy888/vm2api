// 0064e6f0 assert_calibrated

/* <craggemini_core[66f3c71560d70857]::binding::BoundAccount>::assert_calibrated */

void __rustcall
<craggemini_core[66f3c71560d70857]::binding::BoundAccount>::assert_calibrated
          (undefined8 *param_1,longlong param_2,char param_3,longlong param_4,longlong param_5,
          longlong param_6,longlong param_7)

{
  longlong lVar1;
  longlong lVar2;
  undefined *puVar3;
  char cVar4;
  int iVar5;
  longlong lVar6;
  longlong lVar7;
  
  if (*(char *)(param_2 + 0x273) == '\0') {
    *param_1 = 0xffffffffffffffff;
    param_1[1] = &DAT_00184370;
    param_1[2] = 0x10;
    param_1[3] = 0xffffffffffffffff;
    param_1[4] = "bound account is disabled";
    param_1[5] = 0x19;
    param_1[6] = 0;
    *(undefined4 *)(param_1 + 7) = 0x6020199;
    return;
  }
  if ((param_4 != 0) &&
     ((param_5 != *(longlong *)(param_2 + 0x148) ||
      (iVar5 = (*(code *)PTR_bcmp_00799020)
                         (param_4,param_5,param_5,*(undefined8 *)(param_2 + 0x140)), iVar5 != 0))))
  {
    *param_1 = 0xffffffffffffffff;
    param_1[1] = "proxy_id_mismatch";
    param_1[2] = 0x11;
    param_1[3] = 0xffffffffffffffff;
    param_1[4] = "requested proxy_id does not match account\'s strict binding";
    param_1[5] = 0x3a;
    goto LAB_0064ea1e;
  }
  puVar3 = PTR_<u8>_00799268;
  if (param_6 != 0) {
    if (param_7 == *(longlong *)(param_2 + 0x2a0)) {
      if (param_7 != 0) {
        lVar6 = 0;
        do {
          lVar1 = lVar6 + 1;
          (*(code *)puVar3)(*(undefined1 *)(param_6 + lVar6));
          lVar6 = lVar1;
        } while (param_7 != lVar1);
      }
      cVar4 = (*(code *)PTR_<u8>_00799268)();
      if (cVar4 != '\0') goto LAB_0064e851;
    }
    *param_1 = 0xffffffffffffffff;
    param_1[1] = "proxy_calibration_mismatch";
    param_1[2] = 0x1a;
    param_1[3] = 0xffffffffffffffff;
    param_1[4] = "proxy_sha256 drift detected; re-calibration required";
    param_1[5] = 0x34;
    goto LAB_0064ea1e;
  }
LAB_0064e851:
  puVar3 = PTR_<u8>_00799268;
  lVar6 = *(longlong *)(param_2 + 0x310);
  if (lVar6 == 0) {
LAB_0064e91c:
    puVar3 = PTR_<u8>_00799268;
    if (param_3 == '\0') {
LAB_0064e9e0:
      *param_1 = 0xfffffffffffffffe;
      return;
    }
    if ((*(char *)(param_2 + 0xd0) != '\0') &&
       (lVar6 = *(longlong *)(param_2 + 0x68), lVar6 == *(longlong *)(param_2 + 0x2a0))) {
      if (lVar6 != 0) {
        lVar1 = *(longlong *)(param_2 + 0x60);
        lVar7 = 0;
        do {
          lVar2 = lVar7 + 1;
          (*(code *)puVar3)(*(undefined1 *)(lVar1 + lVar7));
          lVar7 = lVar2;
        } while (lVar6 != lVar2);
      }
      cVar4 = (*(code *)PTR_<u8>_00799268)();
      if (cVar4 != '\0') goto LAB_0064e9e0;
    }
    *param_1 = 0xffffffffffffffff;
    param_1[1] = "proxy_not_calibrated";
    param_1[2] = 0x14;
    param_1[3] = 0xffffffffffffffff;
    param_1[4] = "account proxy has not passed strict calibration";
    param_1[5] = 0x2f;
  }
  else {
    lVar1 = *(longlong *)(lVar6 + 0x68);
    if (lVar1 == *(longlong *)(param_2 + 0x2a0)) {
      if (lVar1 != 0) {
        lVar6 = *(longlong *)(lVar6 + 0x60);
        lVar7 = 0;
        do {
          lVar2 = lVar7 + 1;
          (*(code *)puVar3)(*(undefined1 *)(lVar6 + lVar7));
          lVar7 = lVar2;
        } while (lVar1 != lVar2);
      }
      cVar4 = (*(code *)PTR_<u8>_00799268)();
      if (cVar4 != '\0') goto LAB_0064e91c;
    }
    *param_1 = 0xffffffffffffffff;
    param_1[1] = "proxy_calibration_mismatch";
    param_1[2] = 0x1a;
    param_1[3] = 0xffffffffffffffff;
    param_1[4] = "local proxy bridge digest drifted from bound proxy";
    param_1[5] = 0x32;
  }
LAB_0064ea1e:
  param_1[6] = 0;
  *(undefined4 *)(param_1 + 7) = 0x6020199;
  return;
}


