// 0070e250 promotable_odd_drop

/* WARNING: Switch with 1 destination removed at 0x0070e299 */
/* WARNING: Switch with 1 destination removed at 0x0070e2b2 */
/* bytes[e9829e187354639b]::bytes::promotable_odd_drop */

void __rustcall
bytes[e9829e187354639b]::bytes::promotable_odd_drop
          (ulonglong param_1,longlong param_2,longlong param_3,undefined8 param_4)

{
  longlong *plVar1;
  code *pcVar2;
  undefined1 local_11;
  
  if ((param_1 & 1) == 0) {
    LOCK();
    plVar1 = (longlong *)(param_1 + 0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 != 0) {
      return;
    }
    if (*(longlong *)(param_1 + 8) < 0) {
LAB_0070e2e5:
      (*(code *)PTR_unwrap_failed_00799028)
                (&DAT_00795858,&local_11,
                 &PTR_anon_a0bdfe76b4b74febc0fe96214a8c0b42_2_llvm_14698491423915303612_00795968);
                    /* WARNING: Does not return */
      pcVar2 = (code *)invalidInstructionException();
      (*pcVar2)();
    }
    (*(code *)PTR___rust_dealloc_00798fc8)(param_4,1);
  }
  else if ((longlong)((param_2 - param_1) + param_3) < 0) {
    (*(code *)PTR_unwrap_failed_00799028)
              (&DAT_00795858,&local_11,
               &PTR_anon_a0bdfe76b4b74febc0fe96214a8c0b42_2_llvm_14698491423915303612_00795900);
    goto LAB_0070e2e5;
  }
  (*(code *)PTR_free_0079adc8)();
  return;
}


