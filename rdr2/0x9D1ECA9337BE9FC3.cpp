// abigail2_1.ysc @ L79638
void func_2336(var uParam0, char* sParam1, int iParam2, int iParam3)
{
  if (!ENTITY::DOES_ENTITY_EXIST(iParam2))
  {
    return;
  }
  if (iParam3 == 1)
  {
    if (ANIMSCENE::_0x9D1ECA9337BE9FC3(uParam0->f_804, sParam1))
    {
      iParam3 = 0;
    }
  }
  ANIMSCENE::SET_ANIM_SCENE_ENTITY(uParam0->f_804, sParam1, iParam2, iParam3);
}