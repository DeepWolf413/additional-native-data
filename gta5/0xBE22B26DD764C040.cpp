// am_casino_peds.ysc @ L90738
char* func_759()
{
  return "anim_casino_b@amb@casino@games@threecardpoker@dealer";
}

Vector3 func_760(int iParam0)
{
  struct<3> Var0;
  
  Var0 = { PED::GET_ANIM_INITIAL_OFFSET_POSITION(func_759(), "deck_pick_up_deck", func_758(iParam0), 0f, 0f, func_757(iParam0), 0.01f, 2) };
  return Var0;
}