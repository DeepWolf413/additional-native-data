// braithwaites1_intro.ysc @ L3310
void func_147(int iParam0)
{
  CAM::_0x4D2F46D1B28D90FB(&iLocal_31, 1);
  if ((iParam0->f_958.f_1769 && !func_154(uLocal_47, 2)) && !ENTITY::IS_ENTITY_DEAD(iLocal_31[1]))
  {
    MISC::CLEAR_AREA(ENTITY::GET_ENTITY_COORDS(iLocal_46, true, false), 50f, 1);
    PLAYER::_0x3946FC742AC305CD(PLAYER::PLAYER_ID(), iLocal_31[1], "BRT1_INTRO", func_264(1, 1), 0, 0);
    func_155(&uLocal_47, 2);
  }
}