// 001f48e0 hashmap_random_keys

/* std[6c98fd8553dbae28]::sys::random::linux::hashmap_random_keys */

undefined1  [16] __rustcall std[6c98fd8553dbae28]::sys::random::linux::hashmap_random_keys(void)

{
  undefined1 auVar1 [16];
  undefined8 local_18;
  undefined8 uStack_10;
  
  local_18 = 0;
  uStack_10 = 0;
  getrandom(&local_18,0x10,1);
  auVar1._8_8_ = uStack_10;
  auVar1._0_8_ = local_18;
  return auVar1;
}


