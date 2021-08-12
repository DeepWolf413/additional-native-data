// fussar2.ysc @ L75665
void func_2106(int iParam0, float fParam1)
{
  int iVar0;

  if (!func_390(iLocal_153, iParam0))
  {
    if (ANIMSCENE::_IS_ANIM_SCENE_STARTED(uLocal_563[0], false))
    {
      if (ANIMSCENE::_GET_ANIM_SCENE_TIME(uLocal_563[0]) > fParam1)
      {
        iVar0 = GRAPHICS::_0x842CCC9491FFCD9B("InterrogationHit");
        if (iVar0 != 0)
        {
          GRAPHICS::_0x9B8D5D4CB8AF58B3(iVar0);
          PAD::_0x5F217BC1190503D8("FUS2_ANGEL_PUNCH", 0.5f);
          func_419(&iLocal_153, iParam0);
        }
      }
    }
  }
}