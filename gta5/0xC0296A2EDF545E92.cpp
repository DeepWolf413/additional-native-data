// am_mp_arc_cab_manager.ysc @ L89659
void func_717(var uParam0, int iParam1, int iParam2)
{
  int iVar0;
  
  if (uParam0->f_357[iParam1] != -1 && !ENTITY::DOES_ENTITY_EXIST(uParam0->f_788[iParam1 /*3*/][iParam2]))
  {
    func_552(iParam1, uParam0->f_357[iParam1], &(uParam0->f_199[iParam1 /*3*/]), &(uParam0->f_157[iParam1]), 0);
    if (func_509(uParam0->f_357[iParam1]))
    {
      func_718(uParam0->f_357[iParam1], iParam2, &iVar0);
      if (STREAMING::IS_MODEL_VALID(iVar0))
      {
        if (func_499(iVar0))
        {
          if (!func_549(uParam0->f_199[iParam1 /*3*/]))
          {
            uParam0->f_788[iParam1 /*3*/][iParam2] = OBJECT::CREATE_OBJECT_NO_OFFSET(iVar0, uParam0->f_199[iParam1 /*3*/], false, false, true);
            ENTITY::FREEZE_ENTITY_POSITION(uParam0->f_788[iParam1 /*3*/][iParam2], true);
            ENTITY::SET_ENTITY_COORDS_NO_OFFSET(uParam0->f_788[iParam1 /*3*/][iParam2], uParam0->f_199[iParam1 /*3*/], false, false, true);
            ENTITY::SET_ENTITY_HEADING(uParam0->f_788[iParam1 /*3*/][iParam2], uParam0->f_157[iParam1]);
            ENTITY::SET_ENTITY_VISIBLE(uParam0->f_788[iParam1 /*3*/][iParam2], true, false);
            ENTITY::_SET_ENTITY_CLEANUP_BY_ENGINE(uParam0->f_788[iParam1 /*3*/][iParam2], true);
            ENTITY::SET_ENTITY_CAN_BE_DAMAGED(uParam0->f_788[iParam1 /*3*/][iParam2], false);
            ENTITY::SET_ENTITY_INVINCIBLE(uParam0->f_788[iParam1 /*3*/][iParam2], true);
            STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iVar0);
          }
        }
      }
    }
  }
}