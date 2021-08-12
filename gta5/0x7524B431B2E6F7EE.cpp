// fm_race_creator.ysc @ L480805
void func_8224(var uParam0)
{
  struct<13> Var0;
  
  if (func_6838() || func_6837())
  {
    func_8226(uParam0);
  }
  if (func_507())
  {
    if (uParam0->f_16 != func_39())
    {
      if (func_48(uParam0->f_16, 0, 1))
      {
        Var0 = { func_178(uParam0->f_16) };
        if (func_302(Var0))
        {
          NETWORK::NETWORK_REMOVE_TRANSITION_INVITE(&Var0);
          if (func_8225(&Var0, ""))
          {
            func_6901();
          }
        }
      }
    }
  }
}