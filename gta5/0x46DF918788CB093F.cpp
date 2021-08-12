// celebrations.ysc @ L74508
void func_365()
{
  if (!Local_266.f_37.f_12)
  {
    if (ENTITY::DOES_ENTITY_EXIST(Local_266.f_37))
    {
      if (!ENTITY::IS_ENTITY_DEAD(Local_266.f_37, false))
      {
        if (ENTITY::HAS_ANIM_EVENT_FIRED(Local_266.f_37, MISC::GET_HASH_KEY("forehead_blood")))
        {
          PED::APPLY_PED_DAMAGE_PACK(Local_266.f_37, "SCR_TrevorTreeBang", 1f, 1f);
          Local_266.f_37.f_12 = 1;
        }
      }
    }
  }
}