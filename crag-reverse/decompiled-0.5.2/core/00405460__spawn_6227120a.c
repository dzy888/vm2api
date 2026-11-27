// 00405460 spawn

/* <tokio[d7d91d38da47d894]::process::Command>::spawn */

void __rustcall <tokio[d7d91d38da47d894]::process::Command>::spawn(undefined8 *param_1)

{
  int local_68;
  undefined8 local_60;
  undefined1 local_44 [52];
  
  (*(code *)PTR_spawn_007993b0)();
  if (local_68 == 1) {
    param_1[1] = local_60;
    *param_1 = 0xffffffffffffffff;
    return;
  }
  (*(code *)PTR_build_child_007993b8)(local_60,local_44);
  return;
}


