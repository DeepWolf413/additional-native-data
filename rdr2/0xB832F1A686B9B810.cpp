// abigail2_1.ysc @ L37493
void func_883(char[4] cParam0)
{
  func_1420(cParam0);
  POPULATION::_0xF45E46DEECF7DF6E(4096, 0, 0, -1, -1);
  WEAPON::_0xB832F1A686B9B810(PLAYER::PLAYER_PED_ID(), true, 1);
  if (!func_381(iLocal_27, 4) && func_1421(879, 1))
  {
    func_876(879);
    func_405(&iLocal_27, 4);
  }
  if (func_33(cParam0) > iLocal_19 && !ENTITY::DOES_ENTITY_EXIST(iLocal_123))
  {
    iLocal_123 = func_1422(1, 1, 1, -2590.003f, 467.8074f, 145.0187f, 77.7576f);
    if (ENTITY::DOES_ENTITY_EXIST(iLocal_123))
    {
      TASK::TASK_STAND_STILL(iLocal_123, -1);
    }
  }
  if (func_1423(Global_35, iLocal_170, 1, 0))
  {
    PAD::DISABLE_CONTROL_ACTION(2, joaat("INPUT_CONTEXT_X"), false);
  }
  iLocal_25 = 0;
}