// beat_locked_safe.ysc @ L3844
void func_114(float fParam0, bool bParam1)
{
  if (!func_34(67108864))
  {
    func_115(0);
    if (!bParam1)
    {
      PED::_0x4F27603E44A8E4C0(Global_35, 7, 1);
      FIRE::ADD_EXPLOSION(ENTITY::GET_ENTITY_COORDS(Local_349[6 /*12*/].f_8, true, false), 29, fParam0, false, false, 1f);
      iLocal_734[0] = joaat("MOODDEAD");
      iLocal_734[1] = joaat("MOODDEAD");
      func_131(&uLocal_768, 0);
      func_131(&uLocal_774, 0);
    }
    func_35(67108864);
  }
}