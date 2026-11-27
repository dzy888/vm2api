// 004c37c0 update_policy

/* WARNING: Type propagation algorithm not settling */
/* <craggemini_core[66f3c71560d70857]::pool::PoolManager>::update_policy */

undefined8 * __rustcall
<craggemini_core[66f3c71560d70857]::pool::PoolManager>::update_policy
          (undefined8 *param_1,longlong param_2,longlong *param_3)

{
  int *piVar1;
  int iVar2;
  byte bVar3;
  byte bVar4;
  longlong lVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  code *pcVar8;
  ulonglong *puVar9;
  longlong lVar10;
  char cVar11;
  bool bVar12;
  int *local_40;
  byte local_38;
  
  lVar5 = *param_3;
  if ((lVar5 == 1) && (param_3[1] - 0x101U < 0xffffffffffffff00)) {
    *param_1 = 0xffffffffffffffff;
    param_1[1] = "invalid_policy";
    param_1[2] = 0xe;
    param_1[3] = 0xffffffffffffffff;
    param_1[4] = "max_accounts must be within 1..=256";
    param_1[5] = 0x23;
  }
  else {
    bVar3 = *(byte *)(param_3 + 2);
    uVar6 = param_3[3];
    if ((bVar3 & 0x93a80 < uVar6) == 0) {
      bVar4 = *(byte *)(param_3 + 4);
      uVar7 = param_3[5];
      if ((bVar4 & 0x14 < uVar7) == 0) {
        lVar10 = param_3[6];
        if (((char)lVar10 == '\0') || (param_3[7] - 100U < 0x9275d)) {
          piVar1 = (int *)(param_2 + 0x1a0);
          LOCK();
          bVar12 = *(int *)(param_2 + 0x1a0) == 0;
          if (bVar12) {
            *(int *)(param_2 + 0x1a0) = 1;
          }
          UNLOCK();
          if (!bVar12) {
            (*(code *)PTR_lock_contended_00798fe0)();
          }
          if ((*(ulonglong *)PTR_GLOBAL_PANIC_COUNT_00798fd8 & 0x7fffffffffffffff) == 0) {
            local_38 = 0;
            cVar11 = *(char *)(param_2 + 0x1a4);
            puVar9 = (ulonglong *)PTR_GLOBAL_PANIC_COUNT_00798fd8;
          }
          else {
            local_38 = (*(code *)PTR_is_zero_slow_path_00798fe8)();
            local_38 = local_38 ^ 1;
            cVar11 = *(char *)(param_2 + 0x1a4);
            puVar9 = (ulonglong *)PTR_GLOBAL_PANIC_COUNT_00798fd8;
          }
          PTR_GLOBAL_PANIC_COUNT_00798fd8 = (undefined *)puVar9;
          if (cVar11 != '\0') {
            local_40 = piVar1;
            (*(code *)PTR_unwrap_failed_00799028)
                      (&anon_572fb51faa0db1e51baf8d00d92dd3e9_187_llvm_7677212527096675952,&local_40
                       ,&
                        PTR_anon_572fb51faa0db1e51baf8d00d92dd3e9_2_llvm_7677212527096675952_0078bc10
                      );
                    /* WARNING: Does not return */
            pcVar8 = (code *)invalidInstructionException();
            (*pcVar8)();
          }
          if (*(char *)((longlong)param_3 + 0x42) != -1) {
            *(char *)(param_2 + 0x1c8) = *(char *)((longlong)param_3 + 0x42);
          }
          if ((char)lVar5 == '\0') {
            cVar11 = (char)param_3[8];
          }
          else {
            *(longlong *)(param_2 + 0x1a8) = param_3[1];
            cVar11 = (char)param_3[8];
          }
          if (cVar11 != '\x02') {
            *(char *)(param_2 + 0x1c9) = cVar11;
          }
          if (bVar3 == 0) {
            cVar11 = *(char *)((longlong)param_3 + 0x41);
          }
          else {
            *(ulonglong *)(param_2 + 0x1b0) = uVar6;
            cVar11 = *(char *)((longlong)param_3 + 0x41);
          }
          if (cVar11 != '\x02') {
            *(char *)(param_2 + 0x1ca) = cVar11;
          }
          if (bVar4 != 0) {
            *(ulonglong *)(param_2 + 0x1b8) = uVar7;
          }
          if ((char)lVar10 != '\0') {
            *(longlong *)(param_2 + 0x1c0) = param_3[7];
          }
          if (((local_38 == 0) && ((*puVar9 & 0x7fffffffffffffff) != 0)) &&
             (cVar11 = (*(code *)PTR_is_zero_slow_path_00798fe8)(), cVar11 == '\0')) {
            *(undefined1 *)(param_2 + 0x1a4) = 1;
          }
          LOCK();
          iVar2 = *piVar1;
          *piVar1 = 0;
          UNLOCK();
          if (iVar2 == 2) {
            (*(code *)PTR_wake_00799010)();
          }
          policy_view(param_1 + 1,param_2);
          *param_1 = 0xfffffffffffffffe;
          return param_1;
        }
        *param_1 = 0xffffffffffffffff;
        param_1[1] = "invalid_policy";
        param_1[2] = 0xe;
        param_1[3] = 0xffffffffffffffff;
        param_1[4] = "circuit_open_ms must be within 100..=600000";
        param_1[5] = 0x2b;
      }
      else {
        *param_1 = 0xffffffffffffffff;
        param_1[1] = "invalid_policy";
        param_1[2] = 0xe;
        param_1[3] = 0xffffffffffffffff;
        param_1[4] = "circuit_failure_threshold must be within 0..=20";
        param_1[5] = 0x2f;
      }
    }
    else {
      *param_1 = 0xffffffffffffffff;
      param_1[1] = "invalid_policy";
      param_1[2] = 0xe;
      param_1[3] = 0xffffffffffffffff;
      param_1[4] = "sticky_ttl_secs must be within 0..=604800";
      param_1[5] = 0x29;
    }
  }
  param_1[6] = 0;
  *(undefined4 *)(param_1 + 7) = 0x6020190;
  return param_1;
}


