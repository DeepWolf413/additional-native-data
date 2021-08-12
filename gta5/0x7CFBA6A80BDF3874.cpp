// fm_content_island_heist.ysc @ L224801
void func_4893(int iParam0)
{
  if (!func_4897(iParam0))
  {
    return;
  }
  if (!NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_12697.f_946[Local_792.f_4052.f_1[iParam0 /*7*/].f_2 /*5*/]))
  {
    return;
  }
  if (!func_4896(iParam0) && !func_4895(iParam0, iLocal_12607))
  {
    if (func_808(Local_12697.f_946[Local_792.f_4052.f_1[iParam0 /*7*/].f_2 /*5*/]))
    {
      ENTITY::SET_ENTITY_LIGHTS(NETWORK::NET_TO_ENT(Local_12697.f_946[Local_792.f_4052.f_1[iParam0 /*7*/].f_2 /*5*/]), true);
      func_4894(iParam0);
    }
  }
}