// 0070d580 panic_advance

/* bytes[e9829e187354639b]::panic_advance */

void __rustcall bytes[e9829e187354639b]::panic_advance(void)

{
  code *pcVar1;
  undefined8 in_RCX;
  undefined8 in_R8;
  undefined8 in_R9;
  
  (*(code *)PTR_panic_fmt_007991a8)
            (in_RCX,&anon_e1419182c2f95519b50f33ebe2147d9d_7_llvm_4643690396931717954,in_R8,in_R9,
             PTR_fmt_007991f0);
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


