// abigail2_1.ysc @ L63208
void func_1689(char[4] cParam0, int iParam1)
{
  struct<8> Var0;

  Var0 = { func_1729(&(cParam0->f_7375)) };
  if ((((func_1377(&(cParam0->f_10792), 32768) && ANIMSCENE::_DOES_ANIM_SCENE_EXIST(cParam0->f_7375.f_804)) && ANIMSCENE::_IS_ANIM_SCENE_LOADED(cParam0->f_7375.f_804, true, false)) && ANIMSCENE::_0xA9016536015DE29D(cParam0->f_7375.f_804, &Var0)) && ANIMSCENE::_0x23E33CB9F4A3F547(cParam0->f_7375.f_804, &Var0))
  {
    func_1233(cParam0, &Var0);
    func_2076(cParam0);
  }
  else
  {
    if (iParam1 == 1 && func_120(cParam0, 16384))
    {
      func_2077(&(cParam0->f_10792), Global_43805);
      func_743(&(cParam0->f_10792), 8);
    }
    func_232(&(cParam0->f_10792), iParam1);
    func_861(cParam0);
    func_99(cParam0, 2097152);
  }
}