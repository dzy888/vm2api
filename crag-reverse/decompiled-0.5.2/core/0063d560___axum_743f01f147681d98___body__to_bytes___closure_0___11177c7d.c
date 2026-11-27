// 0063d560 <axum[743f01f147681d98]::body::to_bytes::{closure#0}>

/* WARNING: Switch with 1 destination removed at 0x0063d5ac */
/* core[c0acaeba6ab4c2e0]::ptr::drop_glue::<axum[743f01f147681d98]::body::to_bytes::{closure#0}> */

void __rustcall
core[c0acaeba6ab4c2e0]::ptr::drop_glue::<axum[743f01f147681d98]::body::to_bytes::_closure_0_>
          (longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  
  if (*(char *)(param_1 + 0xb0) == '\0') {
    puVar1 = *(undefined8 **)(param_1 + 8);
    if ((code *)*puVar1 != (code *)0x0) {
      (*(code *)*puVar1)();
    }
    if (puVar1[1] != 0) {
      (*(code *)PTR_free_0079adc8)(param_4,puVar1[2]);
      return;
    }
  }
  else if (*(char *)(param_1 + 0xb0) == '\x03') {
    <http_body_util[89f9933de382700b]::combinators::collect::Collect<http_body_util[89f9933de382700b]::limited::Limited<axum_core[61c49771464cda0a]::body::Body>>>
              (param_1 + 0x18);
    return;
  }
  return;
}


