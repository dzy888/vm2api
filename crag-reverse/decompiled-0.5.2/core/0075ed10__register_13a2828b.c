// 0075ed10 register

/* std[6c98fd8553dbae28]::sys::thread_local::destructors::linux_like::register */

void __rustcall
std[6c98fd8553dbae28]::sys::thread_local::destructors::linux_like::register
          (undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  longlong lVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong *unaff_R15;
  longlong *in_FS_OFFSET;
  undefined1 local_29;
  
  if (PTR___cxa_thread_atexit_impl_0079b0b8 != (undefined *)0x0) {
    (*(code *)PTR___cxa_thread_atexit_impl_0079b0b8)
              (param_4,&_rust_extern_with_linkage_6c98fd8553dbae28___dso_handle);
    return;
  }
  if (*(longlong *)(*in_FS_OFFSET + -0xc0) == 0) {
    unaff_R15 = (longlong *)(*in_FS_OFFSET + -0xc0);
    *unaff_R15 = -1;
    if (guard::key::enable::DTORS != 0) goto LAB_0075ed7e;
  }
  else {
    uVar3 = <std[6c98fd8553dbae28]::sys::stdio::unix::Stderr_as_std[6c98fd8553dbae28]::io::Write>::
            write_fmt(&local_29,
                      "fatal runtime error: the System allocator may not use TLS with destructors, aborting\n"
                      ,0xab);
    core[c0acaeba6ab4c2e0]::ptr::drop_glue::
    <core[c0acaeba6ab4c2e0]::result::Result<(),core[c0acaeba6ab4c2e0]::io::error::Error>>(uVar3);
    (*(code *)PTR_abort_00799748)();
  }
  <std[6c98fd8553dbae28]::sys::thread_local::key::racy::LazyKey>::lazy_init();
LAB_0075ed7e:
  (*(code *)PTR_pthread_setspecific_0079b070)();
  lVar1 = unaff_R15[3];
  if (lVar1 == unaff_R15[1]) {
    (*(code *)PTR_grow_one_0079af48)();
  }
  lVar2 = unaff_R15[2];
  *(undefined8 *)(lVar2 + lVar1 * 0x10) = param_1;
  *(undefined8 *)(lVar2 + 8 + lVar1 * 0x10) = param_2;
  unaff_R15[3] = lVar1 + 1;
  *unaff_R15 = *unaff_R15 + 1;
  return;
}


