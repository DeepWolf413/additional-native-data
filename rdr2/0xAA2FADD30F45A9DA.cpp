// cornwall1.ysc @ L62767
void func_1486()
{
  int iVar0;

  iVar0 = 0;
  while (iVar0 < 2)
  {
    if (!ENTITY::IS_ENTITY_DEAD(Local_801[iVar0 /*8*/]))
    {
      if (!ENTITY::IS_ENTITY_VISIBLE(Local_801[iVar0 /*8*/]))
      {
        ENTITY::SET_ENTITY_VISIBLE(Local_801[iVar0 /*8*/], true);
      }
      if (ENTITY::GET_ENTITY_COLLISION_DISABLED(Local_801[iVar0 /*8*/]))
      {
        ENTITY::SET_ENTITY_COLLISION(Local_801[iVar0 /*8*/], true, false);
      }
      if (ENTITY::_IS_ENTITY_FROZEN(Local_801[iVar0 /*8*/]))
      {
        ENTITY::FREEZE_ENTITY_POSITION(Local_801[iVar0 /*8*/], false);
      }
    }
    iVar0++;
  }
}