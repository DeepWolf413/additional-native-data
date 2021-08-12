// grays1.ysc @ L59088
void func_1358(int iParam0, float fParam1)
{
  if (!MAP::_DOES_ENTITY_HAVE_BLIP(Local_179[iParam0 /*17*/]))
  {
    if (func_888(Global_35, Local_179[iParam0 /*17*/], fParam1, 1))
    {
      Local_179[iParam0 /*17*/].f_5 = MAP::_BLIP_ADD_FOR_ENTITY(joaat("BLIP_STYLE_ENEMY"), Local_179[iParam0 /*17*/]);
      MAP::_BLIP_SET_MODIFIER(Local_179[iParam0 /*17*/].f_5, -662251075);
    }
  }
  if ((!func_888(Global_35, Local_179[iParam0 /*17*/], (fParam1 + 1f), 1) || func_396(Local_179[iParam0 /*17*/].f_1, 16)) && MAP::DOES_BLIP_EXIST(Local_179[iParam0 /*17*/].f_5))
  {
    MAP::_BLIP_REMOVE_MODIFIER(Local_179[iParam0 /*17*/].f_5, -662251075);
    MAP::REMOVE_BLIP(&(Local_179[iParam0 /*17*/].f_5));
  }
}