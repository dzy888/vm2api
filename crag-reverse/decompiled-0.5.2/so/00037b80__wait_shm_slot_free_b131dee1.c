// 00037b80 wait_shm_slot_free

/* agy_bridge[64a9e9deac6c45ce]::wait_shm_slot_free */

ulonglong __rustcall agy_bridge[64a9e9deac6c45ce]::wait_shm_slot_free(longlong *param_1)

{
  int iVar1;
  longlong lVar2;
  undefined *puVar3;
  undefined *puVar4;
  longlong lVar5;
  longlong lVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  ulonglong uVar9;
  
  (*(code *)PTR_now_000c3c00)();
  uVar7 = 5;
  lVar5 = (*(code *)PTR_add_000c3c08)(0,5,&PTR_s_adapter_lib_rs_000bfae8);
  puVar4 = PTR_sleep_000c3c28;
  puVar3 = PTR_now_000c3c00;
  lVar2 = *param_1;
  iVar1 = *(int *)(lVar2 + 0x5c);
  uVar9 = CONCAT71((int7)((ulonglong)param_1 >> 8),1);
  uVar8 = uVar7;
  do {
    if (iVar1 == 0) {
LAB_00037bf2:
      return uVar9 & 0xffffffff;
    }
    lVar6 = (*(code *)puVar3)();
    if (lVar6 == lVar5) {
      if ((uint)uVar7 <= (uint)uVar8) {
LAB_00037bf0:
        uVar9 = 0;
        goto LAB_00037bf2;
      }
    }
    else if (lVar5 <= lVar6) goto LAB_00037bf0;
    (*(code *)puVar4)();
    iVar1 = *(int *)(lVar2 + 0x5c);
  } while( true );
}


