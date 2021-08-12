// beat_pickpocket.ysc @ L4434
void func_126()
{
  int iVar0;
  int iVar1;

  if (!func_3(iLocal_449, 16))
  {
    if (ENTITY::HAS_ANIM_EVENT_FIRED(iLocal_184[0], -285312975))
    {
      iVar0 = func_295(1);
      iLocal_191 = BUILTIN::CEIL((IntToFloat(iVar0) * 0.05f));
      iVar1 = BUILTIN::CEIL((IntToFloat(iVar0) * 0.08f));
      if (iLocal_191 > 60000)
      {
        iLocal_191 = 60000;
        iVar1 = 65500;
      }
      func_296(iLocal_191, 0, 0, 1, 1);
      func_297(iLocal_184[0], iVar1);
      Local_493 = 1;
      Local_493.f_12[0] = iLocal_191;
      Local_493.f_1[0] = joaat("CURRENCY_CASH");
      MISC::_0xBB282CF5D2333FB8(iLocal_184[0], &Local_493);
      func_34(&iLocal_449, 16);
    }
  }
}