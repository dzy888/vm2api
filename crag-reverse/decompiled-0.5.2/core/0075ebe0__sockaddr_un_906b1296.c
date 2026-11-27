// 0075ebe0 sockaddr_un

/* std[6c98fd8553dbae28]::os::unix::net::addr::sockaddr_un */

undefined4 * __rustcall
std[6c98fd8553dbae28]::os::unix::net::addr::sockaddr_un
          (undefined4 *param_1,char *param_2,ulonglong param_3)

{
  undefined **ppuVar1;
  longlong lVar2;
  ulonglong uVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 extraout_XMM0_Da;
  
  uVar5 = 0;
  if (param_3 < 0x10) {
    if (param_3 == 0) {
      (*(code *)PTR_memcpy_00799008)(0,0);
      iVar4 = 2;
    }
    else {
      uVar3 = 0;
      ppuVar1 = &PTR_s_paths_must_not_contain_interior_n_00796ff8;
      do {
        if (param_2[uVar3] == '\0') goto LAB_0075ec6b;
        uVar3 = uVar3 + 1;
      } while (param_3 != uVar3);
LAB_0075ec5e:
      if (0x6b < param_3) {
        ppuVar1 = &PTR_s_path_must_be_shorter_than_SUN_LE_00797010;
        goto LAB_0075ec6b;
      }
      (*(code *)PTR_memcpy_00799008)(uVar5,param_3);
      iVar4 = (int)param_3 + (3 - (uint)(*param_2 == '\0'));
    }
    *(undefined8 *)((longlong)param_1 + 0x62) = 0;
    *(undefined8 *)((longlong)param_1 + 0x6a) = 0;
    *(undefined8 *)((longlong)param_1 + 0x56) = 0;
    *(undefined8 *)((longlong)param_1 + 0x5e) = 0;
    *(undefined8 *)((longlong)param_1 + 0x46) = 0;
    *(undefined8 *)((longlong)param_1 + 0x4e) = 0;
    *(undefined8 *)((longlong)param_1 + 0x36) = 0;
    *(undefined8 *)((longlong)param_1 + 0x3e) = 0;
    *(undefined8 *)((longlong)param_1 + 0x26) = 0;
    *(undefined8 *)((longlong)param_1 + 0x2e) = 0;
    *(undefined8 *)((longlong)param_1 + 0x16) = 0;
    *(undefined8 *)((longlong)param_1 + 0x1e) = 0;
    *(undefined8 *)((longlong)param_1 + 6) = 0;
    *(undefined8 *)((longlong)param_1 + 0xe) = 0;
    *(undefined2 *)(param_1 + 1) = 1;
    param_1[0x1d] = iVar4;
    uVar5 = 0;
  }
  else {
    lVar2 = (*(code *)PTR_memchr_aligned_00799490)(0,param_3);
    uVar5 = extraout_XMM0_Da;
    if (lVar2 != 1) goto LAB_0075ec5e;
    ppuVar1 = &PTR_s_paths_must_not_contain_interior_n_00796ff8;
LAB_0075ec6b:
    *(undefined ***)(param_1 + 2) = ppuVar1;
    uVar5 = 1;
  }
  *param_1 = uVar5;
  return param_1;
}


