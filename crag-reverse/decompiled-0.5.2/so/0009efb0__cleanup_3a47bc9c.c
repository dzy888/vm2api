// 0009efb0 cleanup

/* std[6c98fd8553dbae28]::rt::cleanup */

void __rustcall std[6c98fd8553dbae28]::rt::cleanup(void)

{
  undefined1 *local_18;
  undefined1 local_9;
  
  if (cleanup::CLEANUP == 0) {
    return;
  }
  local_9 = 1;
  local_18 = &local_9;
  (*(code *)PTR_call_000c3ef0)
            (&DAT_000c12c8,&local_18,&PTR_s__rustc_48a229ceaefd4985c50990b14_000c1c58);
  return;
}


