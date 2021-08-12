// lester1.ysc @ L122781
void func_836(var uParam0, struct<3> Param1, int iParam4, int iParam5, char[4] cParam6, char* sParam7, float fParam8)
{
  *uParam0 = 0;
  uParam0->f_1 = 0;
  uParam0->f_4 = { Param1 };
  uParam0->f_3 = iParam4;
  uParam0->f_2 = 1;
  ENTITY::PLAY_SYNCHRONIZED_MAP_ENTITY_ANIM(Param1, 1f, iParam4, iParam5, sParam7, cParam6, fParam8, -8f, 0, 1000f);
}