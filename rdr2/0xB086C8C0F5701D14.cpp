// shop_post_office.ysc @ L2312
void func_17(var uParam0)
{
  int iVar0;

  func_3(uParam0->f_2, &iVar0);
  if (ENTITY::DOES_ENTITY_EXIST(iVar0) && !PED::IS_PED_INJURED(iVar0))
  {
    if (PED::IS_PED_FLEEING(iVar0) && !PED::_0xB086C8C0F5701D14(iVar0))
    {
      TASK::TASK_COWER(iVar0, -1, 0, 0);
      PED::SET_PED_KEEP_TASK(iVar0, true);
      func_223(uParam0->f_3, 1048576);
      func_224(uParam0->f_2, 16777216);
    }
    else if (TASK::GET_IS_TASK_ACTIVE(iVar0, 7))
    {
      if (func_97(uParam0->f_3, 1048576))
      {
        func_225(uParam0->f_3, 1048576);
      }
      if (func_122(uParam0->f_2, 16777216))
      {
        func_226(uParam0->f_2, 16777216);
      }
    }
  }
  if (CAM::DOES_CAM_EXIST(uParam0->f_148.f_1754.f_28) && CAM::IS_CAM_RENDERING(uParam0->f_148.f_1754.f_28))
  {
    ENTITY::_0x80FDEB3A9E9AA578(Global_35, 0);
  }
}