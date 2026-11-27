// 006fbe90 <<std[6c98fd8553dbae28]::hash::random::RandomState>::new::KEYS::__rust_std_internal_init_fn>

/* <std[6c98fd8553dbae28]::sys::thread_local::native::lazy::Storage<core[c0acaeba6ab4c2e0]::cell::Cell<(u64,
   u64)>, 
   !>>::get_or_init_slow::<<std[6c98fd8553dbae28]::hash::random::RandomState>::new::KEYS::__rust_std_internal_init_fn>
    */

void __rustcall
<std[6c98fd8553dbae28]::sys::thread_local::native::lazy::Storage<core[c0acaeba6ab4c2e0]::cell::Cell<(u64,u64)>,!>>
::get_or_init_slow::
<<std[6c98fd8553dbae28]::hash::random::RandomState>::new::KEYS::__rust_std_internal_init_fn>
          (undefined8 *param_1,byte *param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  if (*(char *)(param_1 + 2) != '\0') {
    return;
  }
  if (param_2 != (byte *)0x0) {
    uVar1 = *(undefined8 *)(param_2 + 8);
    param_3 = *(undefined8 *)(param_2 + 0x10);
    param_2[0] = 0;
    param_2[1] = 0;
    param_2[2] = 0;
    param_2[3] = 0;
    param_2[4] = 0;
    param_2[5] = 0;
    param_2[6] = 0;
    param_2[7] = 0;
    if ((*param_2 & 1) != 0) goto LAB_006fbec3;
  }
  uVar1 = (*(code *)PTR_hashmap_random_keys_00799248)();
LAB_006fbec3:
  *param_1 = uVar1;
  param_1[1] = param_3;
  *(undefined1 *)(param_1 + 2) = 1;
  return;
}


