// 0070f3c0 shared_v_drop

/* WARNING: Switch with 1 destination removed at 0x0070f3f7 */
/* bytes[e9829e187354639b]::bytes_mut::shared_v_drop */

void __rustcall
bytes[e9829e187354639b]::bytes_mut::shared_v_drop
          (longlong *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  longlong *plVar1;
  
  LOCK();
  plVar1 = param_1 + 4;
  *plVar1 = *plVar1 + -1;
  UNLOCK();
  if (*plVar1 != 0) {
    return;
  }
  if (*param_1 != 0) {
    (*(code *)PTR___rust_dealloc_00798fc8)(param_4,1);
  }
  (*(code *)PTR_free_0079adc8)(param_4,8);
  return;
}


