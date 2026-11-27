// 0070dab0 shared_drop

/* WARNING: Switch with 1 destination removed at 0x0070daf4 */
/* bytes[e9829e187354639b]::bytes::shared_drop */

void __rustcall
bytes[e9829e187354639b]::bytes::shared_drop
          (longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  longlong *plVar1;
  code *pcVar2;
  undefined1 local_11;
  
  LOCK();
  plVar1 = (longlong *)(param_1 + 0x10);
  *plVar1 = *plVar1 + -1;
  UNLOCK();
  if (*plVar1 != 0) {
    return;
  }
  if (*(longlong *)(param_1 + 8) < 0) {
    (*(code *)PTR_unwrap_failed_00799028)
              (&DAT_00795858,&local_11,
               &PTR_anon_a0bdfe76b4b74febc0fe96214a8c0b42_2_llvm_14698491423915303612_00795968);
                    /* WARNING: Does not return */
    pcVar2 = (code *)invalidInstructionException();
    (*pcVar2)();
  }
  (*(code *)PTR___rust_dealloc_00798fc8)(param_4,1);
  (*(code *)PTR_free_0079adc8)();
  return;
}


