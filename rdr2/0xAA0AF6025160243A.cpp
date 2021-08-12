// odriscolls4.ysc @ L58693
void func_1399()
{
  int iVar0;

  if (func_1869(&Global_35))
  {
    return;
  }
  if (!func_1869(&Global_35))
  {
    iVar0 = PED::_0x1F714E7A9DADFC42(Global_35);
    if (ENTITY::DOES_ENTITY_EXIST(iVar0) && !ENTITY::IS_ENTITY_DEAD(iVar0))
    {
      if (TASK::_0x0CCFE72B43C9CF96(iVar0))
      {
        if (TASK::_0x11CD066F54DA0133(iVar0))
        {
          TASK::_0x9ADDBB9242179D56(iVar0, Global_35);
          if (TASK::_0x4ECCC2815CA79AE2(iVar0))
          {
            TASK::_0xAA0AF6025160243A(iVar0, Global_35);
            ENTITY::SET_ENTITY_AS_MISSION_ENTITY(iVar0, true, true);
            OBJECT::DELETE_OBJECT(&iVar0);
          }
        }
      }
    }
  }
}