// crayfish_search.ysc @ L70
void func_1(var uParam0, var uParam1)
{
  func_8(uParam1);
  if (ENTITY::DOES_ENTITY_EXIST(uParam1->f_7))
  {
    PLAYER::_0x9DAE1380CC5C6451(PLAYER::PLAYER_ID(), uParam1->f_7);
    PLAYER::_0xDC5E09D012D759C4(uParam1->f_7, uParam1->f_7, 0);
  }
  if (ENTITY::_0x1FF441D7954F8709(uParam1->f_8))
  {
    ENTITY::_0xD2B9C78537ED5759(uParam1->f_8);
  }
  SCRIPTS::_0xE7282390542F570D(*uParam0);
  SCRIPTS::TERMINATE_THIS_THREAD();
}