// fmmc_launcher.ysc @ L497278
void func_7752(var uParam0)
{
  if (func_5130())
  {
    if (!func_147(40))
    {
      if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_1018))
      {
        if (uParam0->f_1019 != 0)
        {
          if (PED::IS_PEDHEADSHOT_VALID(uParam0->f_1019))
          {
            if (PED::IS_PEDHEADSHOT_READY(uParam0->f_1019))
            {
              func_4908(40);
              if (func_11165() == 35)
              {
                func_7829(uParam0, Global_4456448, func_5127(&Global_2449595, 0), 0);
              }
            }
          }
        }
        else
        {
          uParam0->f_1019 = PED::REGISTER_PEDHEADSHOT(uParam0->f_1018);
        }
      }
    }
  }
}