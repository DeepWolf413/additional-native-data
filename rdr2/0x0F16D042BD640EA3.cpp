// abigail2_1.ysc @ L23857
void func_379(char[4] cParam0)
{
  int iVar0;

  iVar0 = func_773(cParam0, "ABE");
  if (ENTITY::DOES_ENTITY_EXIST(iVar0))
  {
    Local_38[0 /*8*/] = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iVar0);
    ENTITY::SET_ENTITY_AS_MISSION_ENTITY(Local_38[0 /*8*/], true, true);
    func_774(cParam0, 0);
  }
  iVar0 = func_773(cParam0, "Horse_01");
  if (ENTITY::DOES_ENTITY_EXIST(iVar0))
  {
    Local_38[0 /*8*/].f_7 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iVar0);
    ENTITY::SET_ENTITY_AS_MISSION_ENTITY(Local_38[0 /*8*/].f_7, true, true);
    func_775(0);
  }
}