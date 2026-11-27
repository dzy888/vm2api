// 0009f9e0 try_set_output_capture

/* std[6c98fd8553dbae28]::io::stdio::try_set_output_capture */

undefined8 __rustcall std[6c98fd8553dbae28]::io::stdio::try_set_output_capture(longlong *param_1)

{
  undefined8 *puVar1;
  
  if ((param_1 != (longlong *)0x0) || (OUTPUT_CAPTURE_USED != '\0')) {
    OUTPUT_CAPTURE_USED = '\x01';
    puVar1 = (undefined8 *)__tls_get_addr();
    if (*(char *)(puVar1 + 1) != '\0') {
      if (*(char *)(puVar1 + 1) != '\x01') {
        if (param_1 == (longlong *)0x0) {
          return 1;
        }
        LOCK();
        *param_1 = *param_1 + -1;
        UNLOCK();
        if (*param_1 == 0) {
          (*(code *)PTR_drop_slow_000c4120)();
          return 1;
        }
        return 1;
      }
      (*(code *)PTR_register_000c4398)();
      *(undefined1 *)(puVar1 + 1) = 0;
    }
    *puVar1 = param_1;
  }
  return 0;
}


