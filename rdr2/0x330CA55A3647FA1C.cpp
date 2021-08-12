// hunting1.ysc @ L36486
bool func_783(var uParam0)
{
  int iVar0;

  if (ENTITY::DOES_ENTITY_EXIST(Local_30.f_158))
  {
    TASK::CLEAR_PED_TASKS(Local_30.f_158, true, false);
    TASK::TASK_STAND_STILL(Local_30.f_158, -1);
  }
  if (ENTITY::DOES_ENTITY_EXIST(func_181()))
  {
    iVar0 = func_181();
    PED::DELETE_PED(&iVar0);
  }
  func_18(1);
  Local_30.f_254[22] = VOLUME::_CREATE_VOLUME_SPHERE(1531.966f, 1605.379f, 146.6007f, 0f, 0f, 0f, 15f, 15f, 15f);
  func_1378(Local_30.f_254[22], 1);
  Local_30.f_254[23] = VOLUME::_CREATE_VOLUME_SPHERE(1531.966f, 1657.038f, 140.0962f, 0f, 0f, 0f, 15f, 15f, 15f);
  func_1378(Local_30.f_254[23], 1);
  Local_30.f_254[17] = VOLUME::_CREATE_VOLUME_SPHERE(1567.233f, 1555.337f, 145.0264f, 0f, 0f, 0f, 9f, 9f, 9f);
  Local_30.f_254[18] = VOLUME::_CREATE_VOLUME_BOX(1537.525f, 1673.509f, 140.3182f, 0f, 0f, 36.5f, 95.25f, 8.75f, 19.25f);
  func_1379(uParam0);
  func_99(uParam0, 33554432);
  func_1380(uParam0, "PL_Player_Choice_Loop");
  if (!VOLUME::_DOES_VOLUME_EXIST(Local_30.f_254[27]))
  {
    Local_30.f_254[27] = VOLUME::_0x0EB78C2B156635B1(joaat("VOLCYLINDER"), 1565.69f, 1559.457f, 145.3808f, 0f, 0f, 0f, 1f, 1f, 2f);
  }
  PLAYER::_0x330CA55A3647FA1C(PLAYER::PLAYER_ID(), 1);
  return uParam0->f_607 == uParam0->f_607;
}