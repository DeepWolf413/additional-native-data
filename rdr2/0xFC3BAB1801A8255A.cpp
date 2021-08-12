// cv_amb_butcher_bleed_deer.ysc @ L686
void func_14(var uParam0)
{
  int iVar0;

  iVar0 = 0;
  while (iVar0 < uParam0->f_106)
  {
    if (ENTITY::IS_ENTITY_DEAD(uParam0->f_107[iVar0 /*113*/].f_5))
    {
    }
    else
    {
      if (!MISC::IS_STRING_NULL_OR_EMPTY(&(uParam0->f_107[iVar0 /*113*/].f_32.f_23)))
      {
        PED::_REMOVE_PED_EMOTIONAL_PRESET(uParam0->f_107[iVar0 /*113*/].f_5, &(uParam0->f_107[iVar0 /*113*/].f_32.f_23));
      }
      if (!MISC::IS_STRING_NULL_OR_EMPTY(&(uParam0->f_107[iVar0 /*113*/].f_32.f_28)))
      {
        PED::_0xDE7B2B4144906CDF(MISC::GET_HASH_KEY(&(uParam0->f_107[iVar0 /*113*/].f_32.f_28)), uParam0->f_107[iVar0 /*113*/].f_5);
      }
    }
    iVar0++;
  }
}