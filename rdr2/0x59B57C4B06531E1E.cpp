// act_fishing06.ysc @ L20897
void func_544(vector3 vParam0)
{
  int iVar0;
  int iVar1;
  int iVar2;
  int iVar3;

  iVar0 = ITEMSET::CREATE_ITEMSET(true);
  iVar1 = ENTITY::_0x59B57C4B06531E1E(vParam0, 500f, iVar0, 1);
  if (iVar1 > 0)
  {
    iVar2 = (iVar1 - 1);
    while (iVar2 >= 0)
    {
      iVar3 = MISC::_GET_ENTITY_FROM_ITEM(ITEMSET::GET_INDEXED_ITEM_IN_ITEMSET(iVar2, iVar0));
      if (ENTITY::DOES_ENTITY_EXIST(iVar3))
      {
        if ((ENTITY::GET_ENTITY_MODEL(iVar3) == joaat("A_C_ALLIGATOR_01") || ENTITY::GET_ENTITY_MODEL(iVar3) == joaat("A_C_ALLIGATOR_02")) || ENTITY::GET_ENTITY_MODEL(iVar3) == joaat("A_C_ALLIGATOR_03"))
        {
          if (!ENTITY::IS_ENTITY_A_MISSION_ENTITY(iVar3))
          {
            ENTITY::SET_ENTITY_AS_MISSION_ENTITY(iVar3, true, true);
            ENTITY::DELETE_ENTITY(&iVar3);
          }
        }
      }
      iVar2 = (iVar2 + -1);
    }
  }
  ITEMSET::DESTROY_ITEMSET(iVar0);
}