// 00036e20 emit_outbound_v3

/* agy_bridge[64a9e9deac6c45ce]::emit_outbound_v3 */

undefined8 __rustcall
agy_bridge[64a9e9deac6c45ce]::emit_outbound_v3
          (undefined8 param_1,longlong *param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  
  if (param_2[2] != 0) {
                    /* WARNING: Could not recover jumptable at 0x00036eb9. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (*(code *)((longlong)&DAT_000094c0 +
                      (longlong)(int)(&DAT_000094c0)[*(int *)param_2[1] + 1]))
                      ((code *)((longlong)&DAT_000094c0 +
                               (longlong)(int)(&DAT_000094c0)[*(int *)param_2[1] + 1]));
    return uVar1;
  }
  if (*param_2 != 0) {
    (*(code *)PTR___rust_dealloc_000c3aa0)(param_4,8);
  }
  return 0;
}


