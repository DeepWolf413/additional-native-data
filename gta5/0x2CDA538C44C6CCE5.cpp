// business_battles_sell.ysc @ L16040
void func_352()
{
  struct<3> Var0;
  
  if (func_358())
  {
    if (func_357() != -1)
    {
      if (func_104(&(Local_2316.f_1272)))
      {
        if (func_107(&(Local_2316.f_1272), func_356(), 0))
        {
          if (Local_2316.f_1271 > 0)
          {
            EVENT::REMOVE_SHOCKING_EVENT(Local_2316.f_1271);
          }
          func_106(&(Local_2316.f_1272));
        }
      }
      else
      {
        Var0 = { func_355() };
        Local_2316.f_1271 = EVENT::ADD_SHOCKING_EVENT_AT_POSITION(func_357(), Var0, func_354());
        func_103(&(Local_2316.f_1272), 0, 0);
      }
    }
  }
  else
  {
    func_353();
  }
}