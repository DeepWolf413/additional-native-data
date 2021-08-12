// beat_bear_trap.ysc @ L6446
void func_193()
{
  if (bLocal_824)
  {
    return;
  }
  if ((PED::_0xBA208A8D6399A3AC(iLocal_841[0], 10) || PED::_0xBA208A8D6399A3AC(iLocal_841[0], 9)) || PED::_0xBA208A8D6399A3AC(iLocal_841[0], 11))
  {
    PED::_0x5A1A929C8B729B4A(iLocal_841[0]);
    ENTITY::_0x18FF3110CF47115D(iLocal_841[0], 7, 1);
    bLocal_824 = true;
  }
}