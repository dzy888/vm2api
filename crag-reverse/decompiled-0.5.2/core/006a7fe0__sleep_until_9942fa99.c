// 006a7fe0 sleep_until

/* <hyper_util[b7929d201eb2e3f4]::rt::tokio::TokioTimer as
   hyper[c4782d5b5c5e3493]::rt::timer::Timer>::sleep_until */

void __rustcall
<hyper_util[b7929d201eb2e3f4]::rt::tokio::TokioTimer_as_hyper[c4782d5b5c5e3493]::rt::timer::Timer>::
sleep_until(void)

{
  code *pcVar1;
  undefined8 *puVar2;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  undefined8 uStack_20;
  undefined8 local_18;
  undefined8 uStack_10;
  
  (*(code *)PTR_sleep_until_00799188)(&PTR_s__vendor_hyper_util_0_1_21_src_rt_00791bc8);
  (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00798ff8)();
  puVar2 = (undefined8 *)(*(code *)PTR___rust_alloc_00799000)();
  if (puVar2 == (undefined8 *)0x0) {
    (*(code *)PTR_handle_alloc_error_007991d8)();
                    /* WARNING: Does not return */
    pcVar1 = (code *)invalidInstructionException();
    (*pcVar1)();
  }
  puVar2[0xc] = local_18;
  puVar2[0xd] = uStack_10;
  puVar2[10] = local_28;
  puVar2[0xb] = uStack_20;
  puVar2[8] = local_38;
  puVar2[9] = uStack_30;
  puVar2[6] = local_48;
  puVar2[7] = uStack_40;
  puVar2[4] = local_58;
  puVar2[5] = uStack_50;
  puVar2[2] = local_68;
  puVar2[3] = uStack_60;
  *puVar2 = local_78;
  puVar2[1] = uStack_70;
  return;
}


