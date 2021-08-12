// am_casino_peds.ysc @ L90663
void func_755(int* iParam0)
{
  if (func_15(iParam0->f_217[func_770() /*71*/]))
  {
    if (ENTITY::HAS_ANIM_EVENT_FIRED(iParam0->f_217[func_770() /*71*/], MISC::GET_HASH_KEY("Pick_Up_Deck")))
    {
      if (!ENTITY::IS_ENTITY_ATTACHED_TO_ANY_PED(iParam0->f_9214))
      {
        ENTITY::FREEZE_ENTITY_POSITION(iParam0->f_9214, false);
        ENTITY::ATTACH_ENTITY_TO_ENTITY(iParam0->f_9214, iParam0->f_217[func_770() /*71*/], PED::GET_PED_BONE_INDEX(iParam0->f_217[func_770() /*71*/], 60309), 0f, 0f, 0f, 0f, 0f, 0f, false, false, false, true, 2, true);
      }
    }
    else if (ENTITY::HAS_ANIM_EVENT_FIRED(iParam0->f_217[func_770() /*71*/], MISC::GET_HASH_KEY("Put_Down_Deck")))
    {
      if (ENTITY::IS_ENTITY_ATTACHED_TO_ANY_PED(iParam0->f_9214))
      {
        ENTITY::DETACH_ENTITY(iParam0->f_9214, true, true);
        ENTITY::FREEZE_ENTITY_POSITION(iParam0->f_9214, true);
        ENTITY::SET_ENTITY_COORDS_NO_OFFSET(iParam0->f_9214, func_760(Global_2519510), false, false, true);
        ENTITY::SET_ENTITY_ROTATION(iParam0->f_9214, func_756(Global_2519510), 2, true);
      }
    }
  }
}

Vector3 func_756(int iParam0)
{
  struct<3> Var0;
  
  Var0 = { PED::GET_ANIM_INITIAL_OFFSET_ROTATION(func_759(), "deck_pick_up_deck", func_758(iParam0), 0f, 0f, func_757(iParam0), 0.01f, 2) };
  return Var0;
}