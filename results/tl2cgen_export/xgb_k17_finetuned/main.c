
#include "header.h"


static const int32_t num_class[] = {  4, };

int32_t get_num_target(void) {
  return N_TARGET;
}
void get_num_class(int32_t* out) {
  for (int i = 0; i < N_TARGET; ++i) {
    out[i] = num_class[i];
  }
}
int32_t get_num_feature(void) {
  return 17;
}
const char* get_threshold_type(void) {
  return "float32";
}
const char* get_leaf_output_type(void) {
  return "float32";
}

void predict(union Entry* data, int pred_margin, float* result) {
  unsigned int tmp;
  if ( (data[0].missing != -1) && (data[0].fvalue < (float)0.59084939957)) {
    if ( (data[6].missing != -1) && (data[6].fvalue < (float)-0.6440063715)) {
      if ( (data[0].missing != -1) && (data[0].fvalue < (float)0.0074982675724)) {
        if ( (data[5].missing != -1) && (data[5].fvalue < (float)-0.42367523909)) {
          result[0] += 0.040566593;
        } else {
          if ( (data[5].missing != -1) && (data[5].fvalue < (float)-0.29655107856)) {
            result[0] += -0.061555017;
          } else {
            result[0] += -0.0127380835;
          }
        }
      } else {
        if ( (data[5].missing != -1) && (data[5].fvalue < (float)-0.33163931966)) {
          result[0] += 0.14611393;
        } else {
          result[0] += 0.006296924;
        }
      }
    } else {
      if ( (data[9].missing != -1) && (data[9].fvalue < (float)0.48028355837)) {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)-0.072087556124)) {
          if ( (data[5].missing != -1) && (data[5].fvalue < (float)-0.52645909786)) {
            result[0] += -0.017623069;
          } else {
            if ( (data[8].missing != -1) && (data[8].fvalue < (float)-0.18456360698)) {
              result[0] += -0.0627797;
            } else {
              if ( (data[10].missing != -1) && (data[10].fvalue < (float)0.20306541026)) {
                result[0] += -0.052918006;
              } else {
                result[0] += -0.009454117;
              }
            }
          }
        } else {
          if ( (data[5].missing != -1) && (data[5].fvalue < (float)-0.30542847514)) {
            result[0] += 0.07402754;
          } else {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)-0.89701044559)) {
              result[0] += -0.015669268;
            } else {
              if ( (data[8].missing != -1) && (data[8].fvalue < (float)-0.20588018)) {
                result[0] += -0.024802027;
              } else {
                result[0] += -0.0647785;
              }
            }
          }
        }
      } else {
        if ( (data[0].missing != -1) && (data[0].fvalue < (float)-0.80280572176)) {
          result[0] += 0.06930109;
        } else {
          result[0] += 0.0054119104;
        }
      }
    }
  } else {
    if ( (data[5].missing != -1) && (data[5].fvalue < (float)0.07551728934)) {
      if ( (data[3].missing != -1) && (data[3].fvalue < (float)-0.89701044559)) {
        result[0] += 0.014274055;
      } else {
        if ( (data[3].missing != -1) && (data[3].fvalue < (float)1.1452996731)) {
          if ( (data[14].missing != -1) && (data[14].fvalue < (float)0.61959773302)) {
            result[0] += 0.031832855;
          } else {
            if ( (data[10].missing != -1) && (data[10].fvalue < (float)-0.78995537758)) {
              if ( (data[11].missing != -1) && (data[11].fvalue < (float)-0.24242040515)) {
                result[0] += 0.15705048;
              } else {
                result[0] += 0.068684526;
              }
            } else {
              result[0] += 0.18044111;
            }
          }
        } else {
          result[0] += -0.009454117;
        }
      }
    } else {
      if ( (data[6].missing != -1) && (data[6].fvalue < (float)0.902148664)) {
        if ( (data[16].missing != -1) && (data[16].fvalue < (float)0.04201586172)) {
          if ( (data[6].missing != -1) && (data[6].fvalue < (float)-0.43058249354)) {
            result[0] += -0.009454117;
          } else {
            result[0] += -0.062862195;
          }
        } else {
          result[0] += 0.01348802;
        }
      } else {
        if ( (data[5].missing != -1) && (data[5].fvalue < (float)1.667165041)) {
          result[0] += 0.11896826;
        } else {
          result[0] += -0.009454117;
        }
      }
    }
  }
  if ( (data[0].missing != -1) && (data[0].fvalue < (float)-1.2690514326)) {
    if ( (data[8].missing != -1) && (data[8].fvalue < (float)-0.21625265479)) {
      result[1] += 0.19747303;
    } else {
      if ( (data[11].missing != -1) && (data[11].fvalue < (float)-0.25700798631)) {
        result[1] += 0.0077623883;
      } else {
        result[1] += 0.09976732;
      }
    }
  } else {
    if ( (data[13].missing != -1) && (data[13].fvalue < (float)1.0310770273)) {
      if ( (data[0].missing != -1) && (data[0].fvalue < (float)-1.0319960117)) {
        result[1] += -0.021144273;
      } else {
        result[1] += -0.06356901;
      }
    } else {
      if ( (data[8].missing != -1) && (data[8].fvalue < (float)-0.20033873618)) {
        if ( (data[7].missing != -1) && (data[7].fvalue < (float)1.5187627077)) {
          if ( (data[14].missing != -1) && (data[14].fvalue < (float)-0.265068084)) {
            result[1] += 0.1447236;
          } else {
            result[1] += 0.010656564;
          }
        } else {
          result[1] += -0.027829299;
        }
      } else {
        result[1] += -0.048646536;
      }
    }
  }
  if ( (data[3].missing != -1) && (data[3].fvalue < (float)-0.31944227219)) {
    if ( (data[7].missing != -1) && (data[7].fvalue < (float)-0.6713218689)) {
      if ( (data[5].missing != -1) && (data[5].fvalue < (float)-0.25318676233)) {
        if ( (data[3].missing != -1) && (data[3].fvalue < (float)-0.99287575483)) {
          result[2] += 0.029895056;
        } else {
          result[2] += -0.059905645;
        }
      } else {
        if ( (data[16].missing != -1) && (data[16].fvalue < (float)0.038424503058)) {
          result[2] += 0.12794837;
        } else {
          result[2] += 0.019071938;
        }
      }
    } else {
      if ( (data[6].missing != -1) && (data[6].fvalue < (float)-0.91755306721)) {
        if ( (data[10].missing != -1) && (data[10].fvalue < (float)-0.89206194878)) {
          result[2] += 0.09983389;
        } else {
          result[2] += -0.044627897;
        }
      } else {
        if ( (data[0].missing != -1) && (data[0].fvalue < (float)-0.75421535969)) {
          result[2] += 0.004618947;
        } else {
          if ( (data[16].missing != -1) && (data[16].fvalue < (float)0.055454473943)) {
            result[2] += 0.15968868;
          } else {
            result[2] += 0.04736686;
          }
        }
      }
    }
  } else {
    if ( (data[5].missing != -1) && (data[5].fvalue < (float)0.07551728934)) {
      if ( (data[5].missing != -1) && (data[5].fvalue < (float)-0.22976702452)) {
        if ( (data[10].missing != -1) && (data[10].fvalue < (float)2.0270805359)) {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)-0.13882735372)) {
            if ( (data[16].missing != -1) && (data[16].fvalue < (float)0.014951017685)) {
              result[2] += -0.06347441;
            } else {
              result[2] += -0.01125021;
            }
          } else {
            result[2] += -0.06774167;
          }
        } else {
          result[2] += -0.029723305;
        }
      } else {
        if ( (data[10].missing != -1) && (data[10].fvalue < (float)-0.08859796077)) {
          result[2] += 0.029225964;
        } else {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)-0.43074247241)) {
            if ( (data[0].missing != -1) && (data[0].fvalue < (float)-1.1111795902)) {
              result[2] += -0.06393028;
            } else {
              result[2] += 0.024173418;
            }
          } else {
            result[2] += -0.0661854;
          }
        }
      }
    } else {
      if ( (data[3].missing != -1) && (data[3].fvalue < (float)0.34440889955)) {
        if ( (data[11].missing != -1) && (data[11].fvalue < (float)-0.2043402344)) {
          result[2] += 0.029482534;
        } else {
          if ( (data[16].missing != -1) && (data[16].fvalue < (float)0.045002944767)) {
            result[2] += 0.1513223;
          } else {
            result[2] += 0.05222642;
          }
        }
      } else {
        if ( (data[5].missing != -1) && (data[5].fvalue < (float)3.1830465794)) {
          if ( (data[5].missing != -1) && (data[5].fvalue < (float)0.20715114474)) {
            result[2] += -0.029723305;
          } else {
            result[2] += -0.06359226;
          }
        } else {
          result[2] += 0.007253837;
        }
      }
    }
  }
  if ( (data[11].missing != -1) && (data[11].fvalue < (float)2.1478612423)) {
    if ( (data[16].missing != -1) && (data[16].fvalue < (float)0.017747782171)) {
      if ( (data[8].missing != -1) && (data[8].fvalue < (float)0.65596228838)) {
        if ( (data[6].missing != -1) && (data[6].fvalue < (float)-0.22760552168)) {
          if ( (data[7].missing != -1) && (data[7].fvalue < (float)0.31431132555)) {
            if ( (data[8].missing != -1) && (data[8].fvalue < (float)0.011566273868)) {
              if ( (data[16].missing != -1) && (data[16].fvalue < (float)0.011750927195)) {
                result[3] += -0.05658678;
              } else {
                result[3] += 0.010338887;
              }
            } else {
              if ( (data[5].missing != -1) && (data[5].fvalue < (float)-0.40431287885)) {
                result[3] += -0.040549155;
              } else {
                result[3] += 0.036867972;
              }
            }
          } else {
            if ( (data[13].missing != -1) && (data[13].fvalue < (float)0.85409128666)) {
              result[3] += 0.11863869;
            } else {
              result[3] += -0.05696829;
            }
          }
        } else {
          if ( (data[16].missing != -1) && (data[16].fvalue < (float)0.0042847408913)) {
            result[3] += -0.062056273;
          } else {
            if ( (data[6].missing != -1) && (data[6].fvalue < (float)0.16060613096)) {
              result[3] += 0.013380766;
            } else {
              if ( (data[12].missing != -1) && (data[12].fvalue < (float)-1.2382858992)) {
                result[3] += -0.021855779;
              } else {
                result[3] += -0.061910965;
              }
            }
          }
        }
      } else {
        result[3] += 0.058630884;
      }
    } else {
      if ( (data[3].missing != -1) && (data[3].fvalue < (float)0.22197172046)) {
        if ( (data[8].missing != -1) && (data[8].fvalue < (float)0.020930834115)) {
          if ( (data[2].missing != -1) && (data[2].fvalue < (float)-0.58994430304)) {
            result[3] += 0.02162335;
          } else {
            if ( (data[10].missing != -1) && (data[10].fvalue < (float)0.41789460182)) {
              if ( (data[7].missing != -1) && (data[7].fvalue < (float)-0.98458909988)) {
                result[3] += -0.021855779;
              } else {
                result[3] += -0.057423044;
              }
            } else {
              result[3] += 0.006579327;
            }
          }
        } else {
          result[3] += 0.05395303;
        }
      } else {
        if ( (data[1].missing != -1) && (data[1].fvalue < (float)-1.6562097073)) {
          result[3] += 0.19257616;
        } else {
          if ( (data[6].missing != -1) && (data[6].fvalue < (float)0.43545079231)) {
            if ( (data[5].missing != -1) && (data[5].fvalue < (float)-0.43106788397)) {
              result[3] += -0.040616106;
            } else {
              if ( (data[13].missing != -1) && (data[13].fvalue < (float)0.90258133411)) {
                result[3] += 0.113765955;
              } else {
                result[3] += -0.0057584466;
              }
            }
          } else {
            if ( (data[7].missing != -1) && (data[7].fvalue < (float)0.67131799459)) {
              if ( (data[0].missing != -1) && (data[0].fvalue < (float)0.46719673276)) {
                result[3] += 0.09082555;
              } else {
                result[3] += -0.04373759;
              }
            } else {
              if ( (data[0].missing != -1) && (data[0].fvalue < (float)-1.3575376272)) {
                result[3] += -0.021855779;
              } else {
                result[3] += -0.05777023;
              }
            }
          }
        }
      }
    }
  } else {
    result[3] += 0.17458706;
  }
  if ( (data[0].missing != -1) && (data[0].fvalue < (float)0.49852478504)) {
    if ( (data[6].missing != -1) && (data[6].fvalue < (float)-0.6440063715)) {
      if ( (data[5].missing != -1) && (data[5].fvalue < (float)-0.40100291371)) {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)-0.35524612665)) {
          result[0] += 0.024074344;
        } else {
          result[0] += 0.12427949;
        }
      } else {
        if ( (data[0].missing != -1) && (data[0].fvalue < (float)-0.04609240219)) {
          result[0] += -0.061513025;
        } else {
          result[0] += 0.057515837;
        }
      }
    } else {
      if ( (data[9].missing != -1) && (data[9].fvalue < (float)-0.072087556124)) {
        if ( (data[16].missing != -1) && (data[16].fvalue < (float)0.063959240913)) {
          if ( (data[5].missing != -1) && (data[5].fvalue < (float)-0.56079632044)) {
            result[0] += -0.023790462;
          } else {
            if ( (data[11].missing != -1) && (data[11].fvalue < (float)-0.14802908897)) {
              if ( (data[9].missing != -1) && (data[9].fvalue < (float)-0.2431563288)) {
                result[0] += -0.06468907;
              } else {
                result[0] += -0.043651816;
              }
            } else {
              if ( (data[9].missing != -1) && (data[9].fvalue < (float)-0.39155906439)) {
                result[0] += -0.022635868;
              } else {
                result[0] += -0.056606837;
              }
            }
          }
        } else {
          if ( (data[5].missing != -1) && (data[5].fvalue < (float)0.30486577749)) {
            result[0] += 0.003640645;
          } else {
            result[0] += -0.05618397;
          }
        }
      } else {
        if ( (data[5].missing != -1) && (data[5].fvalue < (float)-0.30542847514)) {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)-0.23574270308)) {
            result[0] += -0.007426257;
          } else {
            result[0] += 0.1210871;
          }
        } else {
          if ( (data[13].missing != -1) && (data[13].fvalue < (float)0.86167395115)) {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)-0.77894955873)) {
              result[0] += -0.0074712173;
            } else {
              result[0] += -0.059518665;
            }
          } else {
            result[0] += 0.014533206;
          }
        }
      }
    }
  } else {
    if ( (data[5].missing != -1) && (data[5].fvalue < (float)-0.061238311231)) {
      if ( (data[3].missing != -1) && (data[3].fvalue < (float)-0.8880417943)) {
        result[0] += -0.00545203;
      } else {
        if ( (data[11].missing != -1) && (data[11].fvalue < (float)1.4288539886)) {
          if ( (data[5].missing != -1) && (data[5].fvalue < (float)-0.15679863095)) {
            result[0] += 0.14400373;
          } else {
            result[0] += 0.071246386;
          }
        } else {
          result[0] += 0.013522181;
        }
      }
    } else {
      if ( (data[6].missing != -1) && (data[6].fvalue < (float)0.89328426123)) {
        if ( (data[5].missing != -1) && (data[5].fvalue < (float)0.07551728934)) {
          result[0] += 0.048351955;
        } else {
          if ( (data[16].missing != -1) && (data[16].fvalue < (float)0.021745100617)) {
            result[0] += -0.058084536;
          } else {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)0.35357928276)) {
              result[0] += -0.055803746;
            } else {
              result[0] += 0.037703644;
            }
          }
        }
      } else {
        if ( (data[14].missing != -1) && (data[14].fvalue < (float)0.87142986059)) {
          if ( (data[14].missing != -1) && (data[14].fvalue < (float)0.6757260561)) {
            result[0] += 0.04291129;
          } else {
            result[0] += -0.026547376;
          }
        } else {
          result[0] += 0.1372798;
        }
      }
    }
  }
  if ( (data[0].missing != -1) && (data[0].fvalue < (float)-1.0674057007)) {
    if ( (data[8].missing != -1) && (data[8].fvalue < (float)-0.21131891012)) {
      if ( (data[7].missing != -1) && (data[7].fvalue < (float)1.9876180887)) {
        if ( (data[6].missing != -1) && (data[6].fvalue < (float)-0.27162119746)) {
          result[1] += 0.0732364;
        } else {
          result[1] += 0.16755296;
        }
      } else {
        result[1] += 0.022274936;
      }
    } else {
      result[1] += -0.026070325;
    }
  } else {
    if ( (data[13].missing != -1) && (data[13].fvalue < (float)1.2225931883)) {
      if ( (data[0].missing != -1) && (data[0].fvalue < (float)-0.80280572176)) {
        result[1] += -0.019694893;
      } else {
        if ( (data[2].missing != -1) && (data[2].fvalue < (float)0.19146810472)) {
          result[1] += -0.062266268;
        } else {
          result[1] += -0.036920395;
        }
      }
    } else {
      if ( (data[8].missing != -1) && (data[8].fvalue < (float)-0.20033873618)) {
        if ( (data[5].missing != -1) && (data[5].fvalue < (float)0.22934293747)) {
          result[1] += -0.000839611;
        } else {
          result[1] += 0.11802399;
        }
      } else {
        result[1] += -0.039639752;
      }
    }
  }
  if ( (data[3].missing != -1) && (data[3].fvalue < (float)-0.048415534198)) {
    if ( (data[6].missing != -1) && (data[6].fvalue < (float)-0.68742364645)) {
      if ( (data[9].missing != -1) && (data[9].fvalue < (float)-0.49538713694)) {
        result[2] += 0.13485974;
      } else {
        if ( (data[5].missing != -1) && (data[5].fvalue < (float)-0.30345416069)) {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)-0.8327895999)) {
            result[2] += -0.011635608;
          } else {
            result[2] += -0.0613432;
          }
        } else {
          result[2] += 0.06501957;
        }
      }
    } else {
      if ( (data[7].missing != -1) && (data[7].fvalue < (float)-0.74306476116)) {
        if ( (data[2].missing != -1) && (data[2].fvalue < (float)0.17732004821)) {
          result[2] += -0.04512436;
        } else {
          if ( (data[6].missing != -1) && (data[6].fvalue < (float)0.39013785124)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)0.26863145828)) {
              result[2] += 0.04025134;
            } else {
              result[2] += -0.01198944;
            }
          } else {
            result[2] += 0.075563155;
          }
        }
      } else {
        if ( (data[0].missing != -1) && (data[0].fvalue < (float)-0.55165636539)) {
          if ( (data[8].missing != -1) && (data[8].fvalue < (float)-0.21338579059)) {
            result[2] += -0.013661878;
          } else {
            result[2] += 0.07153156;
          }
        } else {
          if ( (data[5].missing != -1) && (data[5].fvalue < (float)-0.5739902854)) {
            result[2] += 0.037463035;
          } else {
            if ( (data[16].missing != -1) && (data[16].fvalue < (float)0.069090053439)) {
              if ( (data[10].missing != -1) && (data[10].fvalue < (float)-0.40548467636)) {
                result[2] += 0.13930796;
              } else {
                result[2] += 0.10220462;
              }
            } else {
              result[2] += 0.053246487;
            }
          }
        }
      }
    }
  } else {
    if ( (data[5].missing != -1) && (data[5].fvalue < (float)0.05134915933)) {
      if ( (data[5].missing != -1) && (data[5].fvalue < (float)-0.24164952338)) {
        result[2] += -0.06584598;
      } else {
        if ( (data[3].missing != -1) && (data[3].fvalue < (float)0.42276966572)) {
          if ( (data[16].missing != -1) && (data[16].fvalue < (float)0.0063157617114)) {
            result[2] += 0.021322187;
          } else {
            result[2] += -0.038685072;
          }
        } else {
          result[2] += -0.061611928;
        }
      }
    } else {
      if ( (data[3].missing != -1) && (data[3].fvalue < (float)0.35766488314)) {
        if ( (data[7].missing != -1) && (data[7].fvalue < (float)-0.39771494269)) {
          result[2] += 0.023231566;
        } else {
          if ( (data[13].missing != -1) && (data[13].fvalue < (float)0.57195323706)) {
            result[2] += 0.12215817;
          } else {
            result[2] += 0.04019426;
          }
        }
      } else {
        if ( (data[5].missing != -1) && (data[5].fvalue < (float)2.770565033)) {
          if ( (data[10].missing != -1) && (data[10].fvalue < (float)0.79747533798)) {
            if ( (data[8].missing != -1) && (data[8].fvalue < (float)-0.061104930937)) {
              result[2] += 0.023286853;
            } else {
              result[2] += -0.05932009;
            }
          } else {
            result[2] += -0.06550539;
          }
        } else {
          result[2] += 0.036482986;
        }
      }
    }
  }
  if ( (data[11].missing != -1) && (data[11].fvalue < (float)1.734384656)) {
    if ( (data[16].missing != -1) && (data[16].fvalue < (float)0.016788505018)) {
      if ( (data[8].missing != -1) && (data[8].fvalue < (float)0.67834442854)) {
        if ( (data[6].missing != -1) && (data[6].fvalue < (float)-0.12928208709)) {
          if ( (data[7].missing != -1) && (data[7].fvalue < (float)0.31431132555)) {
            if ( (data[12].missing != -1) && (data[12].fvalue < (float)1.0508075953)) {
              if ( (data[2].missing != -1) && (data[2].fvalue < (float)0.1194704473)) {
                result[3] += -0.011032945;
              } else {
                result[3] += -0.05637288;
              }
            } else {
              if ( (data[11].missing != -1) && (data[11].fvalue < (float)-0.24323554337)) {
                result[3] += -0.056950267;
              } else {
                result[3] += 0.06101284;
              }
            }
          } else {
            if ( (data[13].missing != -1) && (data[13].fvalue < (float)0.86167395115)) {
              result[3] += 0.11077028;
            } else {
              result[3] += -0.056754805;
            }
          }
        } else {
          if ( (data[6].missing != -1) && (data[6].fvalue < (float)0.31093731523)) {
            if ( (data[16].missing != -1) && (data[16].fvalue < (float)0.00085049594054)) {
              result[3] += -0.0580306;
            } else {
              if ( (data[11].missing != -1) && (data[11].fvalue < (float)-0.2043402344)) {
                result[3] += 0.02082446;
              } else {
                result[3] += -0.054297544;
              }
            }
          } else {
            result[3] += -0.061342597;
          }
        }
      } else {
        result[3] += 0.038347714;
      }
    } else {
      if ( (data[1].missing != -1) && (data[1].fvalue < (float)-1.332406044)) {
        if ( (data[3].missing != -1) && (data[3].fvalue < (float)0.31084772944)) {
          result[3] += 0.016499517;
        } else {
          result[3] += 0.15501992;
        }
      } else {
        if ( (data[10].missing != -1) && (data[10].fvalue < (float)0.20306541026)) {
          if ( (data[11].missing != -1) && (data[11].fvalue < (float)-0.11609908938)) {
            if ( (data[2].missing != -1) && (data[2].fvalue < (float)-0.093078397214)) {
              result[3] += -0.023042044;
            } else {
              result[3] += -0.05968215;
            }
          } else {
            if ( (data[12].missing != -1) && (data[12].fvalue < (float)0.87881016731)) {
              if ( (data[11].missing != -1) && (data[11].fvalue < (float)0.025153735653)) {
                result[3] += -0.0075211497;
              } else {
                result[3] += -0.050806373;
              }
            } else {
              result[3] += 0.07396876;
            }
          }
        } else {
          if ( (data[6].missing != -1) && (data[6].fvalue < (float)1.0815649033)) {
            if ( (data[13].missing != -1) && (data[13].fvalue < (float)1.1907502413)) {
              if ( (data[5].missing != -1) && (data[5].fvalue < (float)-0.32934063673)) {
                result[3] += 0.007610872;
              } else {
                result[3] += 0.10001328;
              }
            } else {
              result[3] += -0.027770987;
            }
          } else {
            if ( (data[16].missing != -1) && (data[16].fvalue < (float)0.0526355654)) {
              result[3] += -0.046936296;
            } else {
              if ( (data[13].missing != -1) && (data[13].fvalue < (float)0.92155778408)) {
                result[3] += -0.025535056;
              } else {
                result[3] += 0.021381304;
              }
            }
          }
        }
      }
    }
  } else {
    if ( (data[5].missing != -1) && (data[5].fvalue < (float)-0.13766139746)) {
      result[3] += 0.08468795;
    } else {
      result[3] += 0.16012913;
    }
  }
  if ( (data[0].missing != -1) && (data[0].fvalue < (float)0.49852478504)) {
    if ( (data[6].missing != -1) && (data[6].fvalue < (float)-0.6440063715)) {
      if ( (data[0].missing != -1) && (data[0].fvalue < (float)0.10887497663)) {
        if ( (data[5].missing != -1) && (data[5].fvalue < (float)-0.42367523909)) {
          result[0] += 0.034546647;
        } else {
          if ( (data[8].missing != -1) && (data[8].fvalue < (float)-0.14673832059)) {
            result[0] += -0.05187667;
          } else {
            result[0] += -0.006272574;
          }
        }
      } else {
        if ( (data[13].missing != -1) && (data[13].fvalue < (float)-0.46623671055)) {
          result[0] += 0.03986785;
        } else {
          result[0] += 0.12464471;
        }
      }
    } else {
      if ( (data[9].missing != -1) && (data[9].fvalue < (float)-0.072087556124)) {
        if ( (data[16].missing != -1) && (data[16].fvalue < (float)0.063959240913)) {
          if ( (data[5].missing != -1) && (data[5].fvalue < (float)0.49404135346)) {
            if ( (data[5].missing != -1) && (data[5].fvalue < (float)-0.52645909786)) {
              result[0] += -0.032622293;
            } else {
              if ( (data[9].missing != -1) && (data[9].fvalue < (float)-0.2431563288)) {
                result[0] += -0.062461015;
              } else {
                result[0] += -0.041821778;
              }
            }
          } else {
            result[0] += -0.022163654;
          }
        } else {
          result[0] += -0.023241898;
        }
      } else {
        if ( (data[5].missing != -1) && (data[5].fvalue < (float)-0.30542847514)) {
          result[0] += 0.06880595;
        } else {
          if ( (data[12].missing != -1) && (data[12].fvalue < (float)-1.2861771584)) {
            result[0] += 0.011130842;
          } else {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)-0.77894955873)) {
              result[0] += -0.006115771;
            } else {
              result[0] += -0.058875002;
            }
          }
        }
      }
    }
  } else {
    if ( (data[5].missing != -1) && (data[5].fvalue < (float)0.07551728934)) {
      if ( (data[3].missing != -1) && (data[3].fvalue < (float)-0.8880417943)) {
        if ( (data[11].missing != -1) && (data[11].fvalue < (float)-0.24118795991)) {
          result[0] += 0.057981737;
        } else {
          result[0] += -0.04129896;
        }
      } else {
        if ( (data[11].missing != -1) && (data[11].fvalue < (float)2.1478612423)) {
          if ( (data[14].missing != -1) && (data[14].fvalue < (float)0.59280955791)) {
            if ( (data[5].missing != -1) && (data[5].fvalue < (float)-0.14628712833)) {
              result[0] += 0.07148367;
            } else {
              result[0] += -0.008922939;
            }
          } else {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)-0.58809620142)) {
              if ( (data[11].missing != -1) && (data[11].fvalue < (float)-0.24242040515)) {
                result[0] += 0.10952777;
              } else {
                result[0] += 0.022286098;
              }
            } else {
              result[0] += 0.13290446;
            }
          }
        } else {
          result[0] += -0.014523965;
        }
      }
    } else {
      if ( (data[6].missing != -1) && (data[6].fvalue < (float)0.902148664)) {
        if ( (data[16].missing != -1) && (data[16].fvalue < (float)0.032970264554)) {
          if ( (data[11].missing != -1) && (data[11].fvalue < (float)-0.13050070405)) {
            result[0] += -0.023348225;
          } else {
            result[0] += -0.061044347;
          }
        } else {
          if ( (data[7].missing != -1) && (data[7].fvalue < (float)-1.0990114212)) {
            result[0] += -0.025769262;
          } else {
            result[0] += 0.019243628;
          }
        }
      } else {
        if ( (data[14].missing != -1) && (data[14].fvalue < (float)0.87142986059)) {
          result[0] += 0.00745743;
        } else {
          result[0] += 0.12691686;
        }
      }
    }
  }
  if ( (data[0].missing != -1) && (data[0].fvalue < (float)-1.0674057007)) {
    if ( (data[8].missing != -1) && (data[8].fvalue < (float)-0.21131891012)) {
      if ( (data[7].missing != -1) && (data[7].fvalue < (float)1.9876180887)) {
        if ( (data[6].missing != -1) && (data[6].fvalue < (float)-0.2457845062)) {
          result[1] += 0.073865704;
        } else {
          result[1] += 0.14191733;
        }
      } else {
        result[1] += 0.035578884;
      }
    } else {
      result[1] += -0.012746872;
    }
  } else {
    if ( (data[13].missing != -1) && (data[13].fvalue < (float)1.1479464769)) {
      if ( (data[8].missing != -1) && (data[8].fvalue < (float)-0.21892316639)) {
        if ( (data[11].missing != -1) && (data[11].fvalue < (float)-0.27307033539)) {
          result[1] += -0.05445345;
        } else {
          result[1] += -0.021119466;
        }
      } else {
        if ( (data[11].missing != -1) && (data[11].fvalue < (float)-0.27270194888)) {
          result[1] += -0.036601495;
        } else {
          result[1] += -0.061365362;
        }
      }
    } else {
      if ( (data[6].missing != -1) && (data[6].fvalue < (float)-0.05884642154)) {
        result[1] += -0.03985929;
      } else {
        if ( (data[8].missing != -1) && (data[8].fvalue < (float)-0.20142486691)) {
          result[1] += 0.08626752;
        } else {
          result[1] += -0.009256617;
        }
      }
    }
  }
  if ( (data[3].missing != -1) && (data[3].fvalue < (float)-0.055258698761)) {
    if ( (data[6].missing != -1) && (data[6].fvalue < (float)-0.87955719233)) {
      if ( (data[9].missing != -1) && (data[9].fvalue < (float)-0.20437221229)) {
        result[2] += 0.06518851;
      } else {
        if ( (data[5].missing != -1) && (data[5].fvalue < (float)-0.33163931966)) {
          if ( (data[16].missing != -1) && (data[16].fvalue < (float)-0.028414815664)) {
            result[2] += -0.024427652;
          } else {
            result[2] += -0.06301267;
          }
        } else {
          result[2] += 0.017684704;
        }
      }
    } else {
      if ( (data[7].missing != -1) && (data[7].fvalue < (float)-0.74306476116)) {
        if ( (data[16].missing != -1) && (data[16].fvalue < (float)0.040303114802)) {
          if ( (data[6].missing != -1) && (data[6].fvalue < (float)-0.16892676055)) {
            result[2] += -0.022489442;
          } else {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)-0.77126967907)) {
              result[2] += 0.11369734;
            } else {
              result[2] += 0.03871047;
            }
          }
        } else {
          result[2] += -0.036629654;
        }
      } else {
        if ( (data[0].missing != -1) && (data[0].fvalue < (float)-0.94471514225)) {
          result[2] += -0.014478164;
        } else {
          if ( (data[16].missing != -1) && (data[16].fvalue < (float)0.076959848404)) {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)-0.31944227219)) {
              if ( (data[16].missing != -1) && (data[16].fvalue < (float)0.024607393891)) {
                result[2] += 0.1268676;
              } else {
                result[2] += 0.09387069;
              }
            } else {
              if ( (data[5].missing != -1) && (data[5].fvalue < (float)-0.058216240257)) {
                result[2] += 0.023563137;
              } else {
                result[2] += 0.10420424;
              }
            }
          } else {
            result[2] += 0.012830508;
          }
        }
      }
    }
  } else {
    if ( (data[5].missing != -1) && (data[5].fvalue < (float)0.18515683711)) {
      if ( (data[5].missing != -1) && (data[5].fvalue < (float)-0.24164952338)) {
        result[2] += -0.06332483;
      } else {
        if ( (data[3].missing != -1) && (data[3].fvalue < (float)0.42276966572)) {
          if ( (data[8].missing != -1) && (data[8].fvalue < (float)-0.042740665376)) {
            result[2] += 0.026780207;
          } else {
            result[2] += -0.058312893;
          }
        } else {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)1.0147672892)) {
            if ( (data[6].missing != -1) && (data[6].fvalue < (float)0.11079970002)) {
              result[2] += -0.007318699;
            } else {
              result[2] += -0.059322633;
            }
          } else {
            result[2] += -0.06301175;
          }
        }
      }
    } else {
      if ( (data[3].missing != -1) && (data[3].fvalue < (float)0.62488621473)) {
        if ( (data[12].missing != -1) && (data[12].fvalue < (float)0.10337144136)) {
          if ( (data[0].missing != -1) && (data[0].fvalue < (float)-0.4628483355)) {
            result[2] += -0.012255111;
          } else {
            result[2] += 0.12114555;
          }
        } else {
          result[2] += -0.027667904;
        }
      } else {
        if ( (data[10].missing != -1) && (data[10].fvalue < (float)1.0367903709)) {
          result[2] += -0.01623772;
        } else {
          result[2] += -0.06452657;
        }
      }
    }
  }
  if ( (data[11].missing != -1) && (data[11].fvalue < (float)2.1478612423)) {
    if ( (data[1].missing != -1) && (data[1].fvalue < (float)-1.5993287563)) {
      if ( (data[8].missing != -1) && (data[8].fvalue < (float)-0.21131891012)) {
        result[3] += -0.05005706;
      } else {
        if ( (data[3].missing != -1) && (data[3].fvalue < (float)0.35766488314)) {
          result[3] += 0.025756372;
        } else {
          result[3] += 0.1495704;
        }
      }
    } else {
      if ( (data[10].missing != -1) && (data[10].fvalue < (float)0.18442307413)) {
        if ( (data[2].missing != -1) && (data[2].fvalue < (float)-1.0811297894)) {
          result[3] += 0.01643189;
        } else {
          if ( (data[7].missing != -1) && (data[7].fvalue < (float)-0.91945391893)) {
            if ( (data[15].missing != -1) && (data[15].fvalue < (float)0.89251369238)) {
              result[3] += 0.05262978;
            } else {
              if ( (data[13].missing != -1) && (data[13].fvalue < (float)-1.0194351673)) {
                result[3] += -0.050334614;
              } else {
                result[3] += 0.028213268;
              }
            }
          } else {
            if ( (data[10].missing != -1) && (data[10].fvalue < (float)-0.39829662442)) {
              result[3] += -0.059140272;
            } else {
              if ( (data[2].missing != -1) && (data[2].fvalue < (float)0.13540814817)) {
                result[3] += 0.007906213;
              } else {
                result[3] += -0.045514315;
              }
            }
          }
        }
      } else {
        if ( (data[8].missing != -1) && (data[8].fvalue < (float)-0.21131891012)) {
          if ( (data[2].missing != -1) && (data[2].fvalue < (float)0.16981489956)) {
            result[3] += -0.004686909;
          } else {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)-0.64799338579)) {
              result[3] += -0.05853137;
            } else {
              result[3] += -0.026102377;
            }
          }
        } else {
          if ( (data[6].missing != -1) && (data[6].fvalue < (float)1.009770751)) {
            if ( (data[5].missing != -1) && (data[5].fvalue < (float)-0.39605548978)) {
              result[3] += -0.032527924;
            } else {
              if ( (data[13].missing != -1) && (data[13].fvalue < (float)0.92155778408)) {
                result[3] += 0.104721844;
              } else {
                result[3] += 0.015048443;
              }
            }
          } else {
            if ( (data[10].missing != -1) && (data[10].fvalue < (float)0.79747533798)) {
              result[3] += -0.046006296;
            } else {
              result[3] += 0.026711235;
            }
          }
        }
      }
    }
  } else {
    result[3] += 0.13742125;
  }
  if ( (data[0].missing != -1) && (data[0].fvalue < (float)0.5302401185)) {
    if ( (data[6].missing != -1) && (data[6].fvalue < (float)-0.6440063715)) {
      if ( (data[5].missing != -1) && (data[5].fvalue < (float)-0.40100291371)) {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)-0.35524612665)) {
          result[0] += 0.020019315;
        } else {
          result[0] += 0.105700806;
        }
      } else {
        if ( (data[15].missing != -1) && (data[15].fvalue < (float)0.21069967747)) {
          if ( (data[16].missing != -1) && (data[16].fvalue < (float)0.027447698638)) {
            result[0] += -0.058011074;
          } else {
            result[0] += -0.022565221;
          }
        } else {
          result[0] += 0.04811205;
        }
      }
    } else {
      if ( (data[9].missing != -1) && (data[9].fvalue < (float)0.73230904341)) {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)-0.072087556124)) {
          if ( (data[5].missing != -1) && (data[5].fvalue < (float)-0.52645909786)) {
            result[0] += -0.014829941;
          } else {
            if ( (data[16].missing != -1) && (data[16].fvalue < (float)0.063959240913)) {
              if ( (data[5].missing != -1) && (data[5].fvalue < (float)0.49404135346)) {
                result[0] += -0.059204657;
              } else {
                result[0] += -0.029104097;
              }
            } else {
              result[0] += -0.022310233;
            }
          }
        } else {
          if ( (data[5].missing != -1) && (data[5].fvalue < (float)-0.30542847514)) {
            result[0] += 0.06306045;
          } else {
            if ( (data[10].missing != -1) && (data[10].fvalue < (float)0.65326684713)) {
              if ( (data[9].missing != -1) && (data[9].fvalue < (float)-0.007109336555)) {
                result[0] += -0.021763898;
              } else {
                result[0] += -0.06112212;
              }
            } else {
              result[0] += -0.0075537483;
            }
          }
        }
      } else {
        result[0] += 0.036980014;
      }
    }
  } else {
    if ( (data[5].missing != -1) && (data[5].fvalue < (float)-0.0057680280879)) {
      if ( (data[3].missing != -1) && (data[3].fvalue < (float)1.1452996731)) {
        if ( (data[3].missing != -1) && (data[3].fvalue < (float)-0.8880417943)) {
          if ( (data[13].missing != -1) && (data[13].fvalue < (float)-1.2934023142)) {
            result[0] += -0.008152868;
          } else {
            result[0] += 0.009027848;
          }
        } else {
          if ( (data[14].missing != -1) && (data[14].fvalue < (float)0.61959773302)) {
            if ( (data[5].missing != -1) && (data[5].fvalue < (float)-0.17314806581)) {
              result[0] += 0.08081116;
            } else {
              result[0] += -0.009582839;
            }
          } else {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)0.87656605244)) {
              result[0] += 0.116076805;
            } else {
              result[0] += 0.073081516;
            }
          }
        }
      } else {
        result[0] += -0.041172143;
      }
    } else {
      if ( (data[6].missing != -1) && (data[6].fvalue < (float)1.0815649033)) {
        if ( (data[3].missing != -1) && (data[3].fvalue < (float)0.35766488314)) {
          result[0] += -0.061312463;
        } else {
          if ( (data[6].missing != -1) && (data[6].fvalue < (float)-0.6543686986)) {
            result[0] += -0.057468303;
          } else {
            result[0] += 0.043698195;
          }
        }
      } else {
        if ( (data[7].missing != -1) && (data[7].fvalue < (float)-0.73344153166)) {
          result[0] += 0.1160918;
        } else {
          result[0] += 0.0025462701;
        }
      }
    }
  }
  if ( (data[0].missing != -1) && (data[0].fvalue < (float)-0.94471514225)) {
    if ( (data[8].missing != -1) && (data[8].fvalue < (float)-0.21625265479)) {
      if ( (data[14].missing != -1) && (data[14].fvalue < (float)-2.3605000973)) {
        result[1] += 0.0331324;
      } else {
        result[1] += 0.1263687;
      }
    } else {
      if ( (data[13].missing != -1) && (data[13].fvalue < (float)0.65003782511)) {
        result[1] += -0.056501813;
      } else {
        if ( (data[0].missing != -1) && (data[0].fvalue < (float)-1.3415445089)) {
          result[1] += 0.08084259;
        } else {
          result[1] += 0.012241079;
        }
      }
    }
  } else {
    if ( (data[13].missing != -1) && (data[13].fvalue < (float)1.1479464769)) {
      result[1] += -0.05991411;
    } else {
      if ( (data[8].missing != -1) && (data[8].fvalue < (float)-0.21338579059)) {
        result[1] += 0.062064406;
      } else {
        result[1] += -0.019275313;
      }
    }
  }
  if ( (data[3].missing != -1) && (data[3].fvalue < (float)0.046019136906)) {
    if ( (data[7].missing != -1) && (data[7].fvalue < (float)-0.6713218689)) {
      if ( (data[5].missing != -1) && (data[5].fvalue < (float)-0.23767796159)) {
        if ( (data[3].missing != -1) && (data[3].fvalue < (float)-0.99287575483)) {
          result[2] += 0.018014774;
        } else {
          result[2] += -0.055620957;
        }
      } else {
        if ( (data[12].missing != -1) && (data[12].fvalue < (float)0.87881016731)) {
          result[2] += 0.09606212;
        } else {
          if ( (data[16].missing != -1) && (data[16].fvalue < (float)0.045531481504)) {
            result[2] += 0.03334004;
          } else {
            result[2] += -0.04559889;
          }
        }
      }
    } else {
      if ( (data[6].missing != -1) && (data[6].fvalue < (float)-0.6440063715)) {
        if ( (data[5].missing != -1) && (data[5].fvalue < (float)-0.30477491021)) {
          if ( (data[0].missing != -1) && (data[0].fvalue < (float)0.10887497663)) {
            result[2] += 0.054245025;
          } else {
            result[2] += -0.05350824;
          }
        } else {
          result[2] += 0.08317783;
        }
      } else {
        if ( (data[0].missing != -1) && (data[0].fvalue < (float)-0.94471514225)) {
          result[2] += -0.01941065;
        } else {
          if ( (data[16].missing != -1) && (data[16].fvalue < (float)0.045002944767)) {
            if ( (data[10].missing != -1) && (data[10].fvalue < (float)-0.27807244658)) {
              result[2] += 0.10955214;
            } else {
              if ( (data[6].missing != -1) && (data[6].fvalue < (float)-0.077276788652)) {
                result[2] += 0.03753161;
              } else {
                result[2] += 0.10083928;
              }
            }
          } else {
            if ( (data[6].missing != -1) && (data[6].fvalue < (float)0.94073528051)) {
              if ( (data[7].missing != -1) && (data[7].fvalue < (float)-0.31580528617)) {
                result[2] += -0.047848027;
              } else {
                result[2] += 0.035243448;
              }
            } else {
              result[2] += 0.10834607;
            }
          }
        }
      }
    }
  } else {
    if ( (data[5].missing != -1) && (data[5].fvalue < (float)2.770565033)) {
      if ( (data[3].missing != -1) && (data[3].fvalue < (float)0.34440889955)) {
        if ( (data[5].missing != -1) && (data[5].fvalue < (float)-0.14828489721)) {
          if ( (data[6].missing != -1) && (data[6].fvalue < (float)0.23682963848)) {
            result[2] += -0.0623683;
          } else {
            result[2] += -0.03237995;
          }
        } else {
          if ( (data[13].missing != -1) && (data[13].fvalue < (float)0.39541733265)) {
            result[2] += 0.07123154;
          } else {
            result[2] += -0.017512104;
          }
        }
      } else {
        if ( (data[16].missing != -1) && (data[16].fvalue < (float)0.091937877238)) {
          result[2] += -0.059489854;
        } else {
          result[2] += -0.024490194;
        }
      }
    } else {
      if ( (data[3].missing != -1) && (data[3].fvalue < (float)1.0523011684)) {
        result[2] += 0.102988735;
      } else {
        result[2] += -0.025596157;
      }
    }
  }
  if ( (data[10].missing != -1) && (data[10].fvalue < (float)0.09049295634)) {
    if ( (data[4].missing != -1) && (data[4].fvalue < (float)-1.722437501)) {
      result[3] += 0.032101244;
    } else {
      if ( (data[3].missing != -1) && (data[3].fvalue < (float)0.49688234925)) {
        if ( (data[8].missing != -1) && (data[8].fvalue < (float)0.020930834115)) {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)-0.91897934675)) {
            if ( (data[8].missing != -1) && (data[8].fvalue < (float)-0.21488688886)) {
              result[3] += -0.05248878;
            } else {
              result[3] += -0.0023259711;
            }
          } else {
            if ( (data[12].missing != -1) && (data[12].fvalue < (float)1.074536562)) {
              result[3] += -0.057298064;
            } else {
              if ( (data[10].missing != -1) && (data[10].fvalue < (float)-1.2233704329)) {
                result[3] += 0.004912154;
              } else {
                result[3] += -0.056814928;
              }
            }
          }
        } else {
          if ( (data[10].missing != -1) && (data[10].fvalue < (float)-0.6013687253)) {
            result[3] += 0.05950227;
          } else {
            if ( (data[16].missing != -1) && (data[16].fvalue < (float)0.018113873899)) {
              result[3] += -0.05129242;
            } else {
              result[3] += -0.0045569087;
            }
          }
        }
      } else {
        result[3] += 0.003935375;
      }
    }
  } else {
    if ( (data[8].missing != -1) && (data[8].fvalue < (float)-0.21041087806)) {
      if ( (data[8].missing != -1) && (data[8].fvalue < (float)-0.21470879018)) {
        if ( (data[16].missing != -1) && (data[16].fvalue < (float)0.021485496312)) {
          result[3] += -0.05832311;
        } else {
          result[3] += -0.022130461;
        }
      } else {
        result[3] += -0.0058325976;
      }
    } else {
      if ( (data[3].missing != -1) && (data[3].fvalue < (float)1.1452996731)) {
        if ( (data[5].missing != -1) && (data[5].fvalue < (float)-0.38104936481)) {
          if ( (data[5].missing != -1) && (data[5].fvalue < (float)-0.59306037426)) {
            result[3] += -0.020886429;
          } else {
            result[3] += -0.057127476;
          }
        } else {
          if ( (data[6].missing != -1) && (data[6].fvalue < (float)1.3642252684)) {
            if ( (data[12].missing != -1) && (data[12].fvalue < (float)-0.44223231077)) {
              if ( (data[8].missing != -1) && (data[8].fvalue < (float)-0.19386467338)) {
                result[3] += 0.035412353;
              } else {
                result[3] += 0.10571014;
              }
            } else {
              if ( (data[8].missing != -1) && (data[8].fvalue < (float)-0.083070620894)) {
                result[3] += 0.046358995;
              } else {
                result[3] += -0.035579525;
              }
            }
          } else {
            result[3] += -0.040427376;
          }
        }
      } else {
        if ( (data[13].missing != -1) && (data[13].fvalue < (float)0.84097009897)) {
          result[3] += 0.117204286;
        } else {
          result[3] += 0.017500354;
        }
      }
    }
  }
  if ( (data[15].missing != -1) && (data[15].fvalue < (float)0.65203696489)) {
    if ( (data[6].missing != -1) && (data[6].fvalue < (float)-0.6440063715)) {
      if ( (data[5].missing != -1) && (data[5].fvalue < (float)-0.40100291371)) {
        if ( (data[1].missing != -1) && (data[1].fvalue < (float)-1.1051690578)) {
          result[0] += 0.029688125;
        } else {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)-0.47326594591)) {
            result[0] += 0.030618886;
          } else {
            result[0] += 0.11895825;
          }
        }
      } else {
        if ( (data[7].missing != -1) && (data[7].fvalue < (float)0.057101707906)) {
          if ( (data[10].missing != -1) && (data[10].fvalue < (float)-0.64448297024)) {
            result[0] += -0.025753273;
          } else {
            result[0] += 0.06665262;
          }
        } else {
          result[0] += -0.05368361;
        }
      }
    } else {
      if ( (data[9].missing != -1) && (data[9].fvalue < (float)0.4173142314)) {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)-0.050990220159)) {
          if ( (data[5].missing != -1) && (data[5].fvalue < (float)-0.52645909786)) {
            result[0] += -0.008812418;
          } else {
            if ( (data[16].missing != -1) && (data[16].fvalue < (float)0.013591933995)) {
              if ( (data[6].missing != -1) && (data[6].fvalue < (float)-0.4729436636)) {
                result[0] += -0.036193877;
              } else {
                result[0] += -0.061479658;
              }
            } else {
              if ( (data[16].missing != -1) && (data[16].fvalue < (float)0.01904252544)) {
                result[0] += -0.011720726;
              } else {
                result[0] += -0.045527343;
              }
            }
          }
        } else {
          if ( (data[5].missing != -1) && (data[5].fvalue < (float)-0.30542847514)) {
            result[0] += 0.06896343;
          } else {
            if ( (data[11].missing != -1) && (data[11].fvalue < (float)-0.22559936345)) {
              result[0] += -0.01258231;
            } else {
              result[0] += -0.06044621;
            }
          }
        }
      } else {
        if ( (data[16].missing != -1) && (data[16].fvalue < (float)-0.0004766578495)) {
          result[0] += -0.04328572;
        } else {
          if ( (data[5].missing != -1) && (data[5].fvalue < (float)0.37600171566)) {
            result[0] += 0.067170754;
          } else {
            if ( (data[10].missing != -1) && (data[10].fvalue < (float)0.52504515648)) {
              result[0] += -0.04063646;
            } else {
              result[0] += 0.024823584;
            }
          }
        }
      }
    }
  } else {
    if ( (data[5].missing != -1) && (data[5].fvalue < (float)-0.0057680280879)) {
      if ( (data[3].missing != -1) && (data[3].fvalue < (float)-0.8880417943)) {
        if ( (data[11].missing != -1) && (data[11].fvalue < (float)-0.23818291724)) {
          result[0] += 0.06821697;
        } else {
          result[0] += -0.055887964;
        }
      } else {
        if ( (data[11].missing != -1) && (data[11].fvalue < (float)1.4288539886)) {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)-0.45875871181)) {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)-0.64635211229)) {
              result[0] += 0.10083979;
            } else {
              result[0] += 0.03523629;
            }
          } else {
            result[0] += 0.103024475;
          }
        } else {
          result[0] += 0.0076064602;
        }
      }
    } else {
      if ( (data[6].missing != -1) && (data[6].fvalue < (float)0.902148664)) {
        if ( (data[14].missing != -1) && (data[14].fvalue < (float)0.81655925512)) {
          result[0] += -0.05807934;
        } else {
          if ( (data[7].missing != -1) && (data[7].fvalue < (float)-1.260098815)) {
            result[0] += -0.049172632;
          } else {
            result[0] += 0.052774847;
          }
        }
      } else {
        if ( (data[14].missing != -1) && (data[14].fvalue < (float)0.90477436781)) {
          result[0] += -0.0040545524;
        } else {
          result[0] += 0.11269776;
        }
      }
    }
  }
  if ( (data[0].missing != -1) && (data[0].fvalue < (float)-0.88791364431)) {
    if ( (data[8].missing != -1) && (data[8].fvalue < (float)-0.21041087806)) {
      if ( (data[9].missing != -1) && (data[9].fvalue < (float)0.29513585567)) {
        if ( (data[7].missing != -1) && (data[7].fvalue < (float)0.61500769854)) {
          result[1] += 0.046185873;
        } else {
          if ( (data[13].missing != -1) && (data[13].fvalue < (float)0.31720897555)) {
            result[1] += 0.06053986;
          } else {
            if ( (data[5].missing != -1) && (data[5].fvalue < (float)-0.41068267822)) {
              result[1] += 0.072326265;
            } else {
              result[1] += 0.116192006;
            }
          }
        }
      } else {
        result[1] += -0.0121783465;
      }
    } else {
      if ( (data[13].missing != -1) && (data[13].fvalue < (float)0.85409128666)) {
        result[1] += -0.056618817;
      } else {
        result[1] += 0.040092837;
      }
    }
  } else {
    if ( (data[13].missing != -1) && (data[13].fvalue < (float)1.2953075171)) {
      if ( (data[0].missing != -1) && (data[0].fvalue < (float)-0.75421535969)) {
        result[1] += -0.022466002;
      } else {
        if ( (data[8].missing != -1) && (data[8].fvalue < (float)1.7036572695)) {
          result[1] += -0.060158815;
        } else {
          result[1] += -0.03649062;
        }
      }
    } else {
      if ( (data[13].missing != -1) && (data[13].fvalue < (float)1.4886692762)) {
        result[1] += 0.052464284;
      } else {
        result[1] += -0.02262901;
      }
    }
  }
  if ( (data[3].missing != -1) && (data[3].fvalue < (float)0.080768875778)) {
    if ( (data[6].missing != -1) && (data[6].fvalue < (float)-0.39624726772)) {
      if ( (data[7].missing != -1) && (data[7].fvalue < (float)-0.52645915747)) {
        if ( (data[10].missing != -1) && (data[10].fvalue < (float)-1.2700102329)) {
          result[2] += -0.004806514;
        } else {
          result[2] += -0.05950441;
        }
      } else {
        if ( (data[10].missing != -1) && (data[10].fvalue < (float)-0.22218285501)) {
          if ( (data[16].missing != -1) && (data[16].fvalue < (float)0.02509156242)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)-0.26975187659)) {
              result[2] += 0.110743366;
            } else {
              if ( (data[5].missing != -1) && (data[5].fvalue < (float)-0.25001698732)) {
                result[2] += 0.016128417;
              } else {
                result[2] += 0.09898504;
              }
            }
          } else {
            result[2] += -0.014365626;
          }
        } else {
          result[2] += -0.02731283;
        }
      }
    } else {
      if ( (data[15].missing != -1) && (data[15].fvalue < (float)0.94329088926)) {
        if ( (data[0].missing != -1) && (data[0].fvalue < (float)-0.80280572176)) {
          if ( (data[16].missing != -1) && (data[16].fvalue < (float)0.003763372777)) {
            result[2] += -0.043153062;
          } else {
            result[2] += 0.02346426;
          }
        } else {
          if ( (data[16].missing != -1) && (data[16].fvalue < (float)0.039527323097)) {
            if ( (data[5].missing != -1) && (data[5].fvalue < (float)-0.5739902854)) {
              result[2] += 0.044053424;
            } else {
              result[2] += 0.09903056;
            }
          } else {
            if ( (data[5].missing != -1) && (data[5].fvalue < (float)0.35202333331)) {
              if ( (data[3].missing != -1) && (data[3].fvalue < (float)-1.0088604689)) {
                result[2] += 0.043872766;
              } else {
                result[2] += -0.032713335;
              }
            } else {
              result[2] += 0.100874305;
            }
          }
        }
      } else {
        if ( (data[11].missing != -1) && (data[11].fvalue < (float)-0.21637552977)) {
          result[2] += -0.05782124;
        } else {
          result[2] += 0.029993579;
        }
      }
    }
  } else {
    if ( (data[5].missing != -1) && (data[5].fvalue < (float)1.2067114115)) {
      if ( (data[5].missing != -1) && (data[5].fvalue < (float)-0.24164952338)) {
        if ( (data[10].missing != -1) && (data[10].fvalue < (float)1.9740229845)) {
          result[2] += -0.06308707;
        } else {
          result[2] += -0.02391706;
        }
      } else {
        if ( (data[3].missing != -1) && (data[3].fvalue < (float)0.35766488314)) {
          if ( (data[8].missing != -1) && (data[8].fvalue < (float)-0.10686820745)) {
            result[2] += 0.026769256;
          } else {
            result[2] += -0.03357316;
          }
        } else {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)1.0147672892)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)0.20340718329)) {
              result[2] += -0.0074687116;
            } else {
              result[2] += -0.06003796;
            }
          } else {
            result[2] += -0.0617612;
          }
        }
      }
    } else {
      if ( (data[3].missing != -1) && (data[3].fvalue < (float)0.62488621473)) {
        result[2] += 0.08366879;
      } else {
        if ( (data[10].missing != -1) && (data[10].fvalue < (float)1.1585704088)) {
          result[2] += -0.009232743;
        } else {
          result[2] += -0.04616208;
        }
      }
    }
  }
  if ( (data[11].missing != -1) && (data[11].fvalue < (float)1.4288539886)) {
    if ( (data[1].missing != -1) && (data[1].fvalue < (float)-1.2382310629)) {
      if ( (data[8].missing != -1) && (data[8].fvalue < (float)-0.20549508929)) {
        if ( (data[13].missing != -1) && (data[13].fvalue < (float)0.43640583754)) {
          result[3] += -0.008954948;
        } else {
          result[3] += -0.05618561;
        }
      } else {
        if ( (data[3].missing != -1) && (data[3].fvalue < (float)0.22197172046)) {
          result[3] += 0.0031394262;
        } else {
          result[3] += 0.12608084;
        }
      }
    } else {
      if ( (data[10].missing != -1) && (data[10].fvalue < (float)0.17146204412)) {
        if ( (data[8].missing != -1) && (data[8].fvalue < (float)-0.12956127524)) {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)0.92333030701)) {
            if ( (data[13].missing != -1) && (data[13].fvalue < (float)0.90258133411)) {
              if ( (data[16].missing != -1) && (data[16].fvalue < (float)0.070572808385)) {
                result[3] += -0.060066026;
              } else {
                result[3] += -0.026240194;
              }
            } else {
              result[3] += -0.021137236;
            }
          } else {
            result[3] += -0.011109372;
          }
        } else {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)-0.84289908409)) {
            result[3] += 0.06469149;
          } else {
            if ( (data[1].missing != -1) && (data[1].fvalue < (float)0.46622100472)) {
              result[3] += -0.054454114;
            } else {
              if ( (data[6].missing != -1) && (data[6].fvalue < (float)-0.81779527664)) {
                result[3] += 0.024140708;
              } else {
                result[3] += -0.040982213;
              }
            }
          }
        }
      } else {
        if ( (data[8].missing != -1) && (data[8].fvalue < (float)-0.21470879018)) {
          if ( (data[16].missing != -1) && (data[16].fvalue < (float)0.021485496312)) {
            if ( (data[5].missing != -1) && (data[5].fvalue < (float)-0.14628712833)) {
              result[3] += -0.058834475;
            } else {
              result[3] += -0.026094316;
            }
          } else {
            result[3] += -0.007083048;
          }
        } else {
          if ( (data[5].missing != -1) && (data[5].fvalue < (float)-0.38104936481)) {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)0.84174287319)) {
              result[3] += -0.053745884;
            } else {
              result[3] += -0.0067031295;
            }
          } else {
            if ( (data[13].missing != -1) && (data[13].fvalue < (float)0.98732662201)) {
              if ( (data[6].missing != -1) && (data[6].fvalue < (float)0.31093731523)) {
                result[3] += 0.07883301;
              } else {
                result[3] += 0.0063587585;
              }
            } else {
              if ( (data[9].missing != -1) && (data[9].fvalue < (float)-0.51682901382)) {
                result[3] += 0.0053246096;
              } else {
                result[3] += -0.040812463;
              }
            }
          }
        }
      }
    }
  } else {
    if ( (data[0].missing != -1) && (data[0].fvalue < (float)1.3096626997)) {
      result[3] += 0.022007357;
    } else {
      result[3] += 0.12720315;
    }
  }
  if ( (data[0].missing != -1) && (data[0].fvalue < (float)0.4889344871)) {
    if ( (data[6].missing != -1) && (data[6].fvalue < (float)-0.68742364645)) {
      if ( (data[9].missing != -1) && (data[9].fvalue < (float)-0.54771786928)) {
        result[0] += -0.023679886;
      } else {
        if ( (data[5].missing != -1) && (data[5].fvalue < (float)-0.24679374695)) {
          if ( (data[12].missing != -1) && (data[12].fvalue < (float)-0.56675463915)) {
            result[0] += 0.010587663;
          } else {
            result[0] += 0.09553524;
          }
        } else {
          result[0] += -0.025687663;
        }
      }
    } else {
      if ( (data[9].missing != -1) && (data[9].fvalue < (float)-0.072087556124)) {
        if ( (data[16].missing != -1) && (data[16].fvalue < (float)0.063959240913)) {
          if ( (data[5].missing != -1) && (data[5].fvalue < (float)-0.52645909786)) {
            result[0] += -0.015929874;
          } else {
            if ( (data[5].missing != -1) && (data[5].fvalue < (float)0.49404135346)) {
              result[0] += -0.056709584;
            } else {
              result[0] += -0.026871746;
            }
          }
        } else {
          result[0] += -0.019948423;
        }
      } else {
        if ( (data[5].missing != -1) && (data[5].fvalue < (float)-0.31484144926)) {
          result[0] += 0.0586195;
        } else {
          if ( (data[7].missing != -1) && (data[7].fvalue < (float)1.1347931623)) {
            if ( (data[11].missing != -1) && (data[11].fvalue < (float)-0.22909902036)) {
              result[0] += -0.019563487;
            } else {
              result[0] += -0.055742122;
            }
          } else {
            result[0] += 0.020746931;
          }
        }
      }
    }
  } else {
    if ( (data[5].missing != -1) && (data[5].fvalue < (float)-0.061238311231)) {
      if ( (data[3].missing != -1) && (data[3].fvalue < (float)-0.84289908409)) {
        if ( (data[11].missing != -1) && (data[11].fvalue < (float)-0.24539716542)) {
          result[0] += 0.07196188;
        } else {
          result[0] += -0.046400767;
        }
      } else {
        if ( (data[3].missing != -1) && (data[3].fvalue < (float)1.1452996731)) {
          if ( (data[12].missing != -1) && (data[12].fvalue < (float)-0.071005865932)) {
            result[0] += 0.03285708;
          } else {
            if ( (data[2].missing != -1) && (data[2].fvalue < (float)-1.0811297894)) {
              result[0] += 0.037060283;
            } else {
              if ( (data[3].missing != -1) && (data[3].fvalue < (float)-0.17497244477)) {
                result[0] += 0.07919886;
              } else {
                result[0] += 0.1005785;
              }
            }
          }
        } else {
          result[0] += -0.011392436;
        }
      }
    } else {
      if ( (data[6].missing != -1) && (data[6].fvalue < (float)0.902148664)) {
        if ( (data[16].missing != -1) && (data[16].fvalue < (float)0.04201586172)) {
          if ( (data[6].missing != -1) && (data[6].fvalue < (float)-0.039940573275)) {
            if ( (data[8].missing != -1) && (data[8].fvalue < (float)0.22672767937)) {
              result[0] += 0.018361611;
            } else {
              result[0] += -0.054296613;
            }
          } else {
            result[0] += -0.05826787;
          }
        } else {
          result[0] += 0.017381145;
        }
      } else {
        if ( (data[14].missing != -1) && (data[14].fvalue < (float)0.76945388317)) {
          result[0] += 5.5425604e-05;
        } else {
          result[0] += 0.09303046;
        }
      }
    }
  }
  if ( (data[0].missing != -1) && (data[0].fvalue < (float)-1.0674057007)) {
    if ( (data[8].missing != -1) && (data[8].fvalue < (float)-0.21470879018)) {
      if ( (data[9].missing != -1) && (data[9].fvalue < (float)-0.012810664251)) {
        if ( (data[13].missing != -1) && (data[13].fvalue < (float)0.55535823107)) {
          result[1] += 0.06553143;
        } else {
          if ( (data[10].missing != -1) && (data[10].fvalue < (float)2.0270805359)) {
            result[1] += 0.10685921;
          } else {
            result[1] += 0.069108225;
          }
        }
      } else {
        result[1] += 0.031905122;
      }
    } else {
      if ( (data[13].missing != -1) && (data[13].fvalue < (float)0.85409128666)) {
        result[1] += -0.05478959;
      } else {
        result[1] += 0.04090639;
      }
    }
  } else {
    if ( (data[13].missing != -1) && (data[13].fvalue < (float)1.0310770273)) {
      if ( (data[14].missing != -1) && (data[14].fvalue < (float)-0.60067504644)) {
        if ( (data[7].missing != -1) && (data[7].fvalue < (float)0.97082847357)) {
          result[1] += -0.017947325;
        } else {
          result[1] += -0.05385689;
        }
      } else {
        result[1] += -0.057797134;
      }
    } else {
      if ( (data[9].missing != -1) && (data[9].fvalue < (float)-1.267203927)) {
        result[1] += 0.04394505;
      } else {
        if ( (data[16].missing != -1) && (data[16].fvalue < (float)0.059283025563)) {
          result[1] += -0.05054914;
        } else {
          result[1] += 0.042518135;
        }
      }
    }
  }
  if ( (data[3].missing != -1) && (data[3].fvalue < (float)-0.15657939017)) {
    if ( (data[6].missing != -1) && (data[6].fvalue < (float)-0.87955719233)) {
      if ( (data[0].missing != -1) && (data[0].fvalue < (float)0.2320445627)) {
        result[2] += 0.055356096;
      } else {
        if ( (data[3].missing != -1) && (data[3].fvalue < (float)-0.80415892601)) {
          result[2] += 0.017852822;
        } else {
          result[2] += -0.05488954;
        }
      }
    } else {
      if ( (data[12].missing != -1) && (data[12].fvalue < (float)0.99250650406)) {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)-1.267203927)) {
          result[2] += 0.011587357;
        } else {
          if ( (data[16].missing != -1) && (data[16].fvalue < (float)0.024607393891)) {
            if ( (data[10].missing != -1) && (data[10].fvalue < (float)-0.17599788308)) {
              if ( (data[7].missing != -1) && (data[7].fvalue < (float)-0.68664479256)) {
                result[2] += 0.06105264;
              } else {
                result[2] += 0.09249927;
              }
            } else {
              result[2] += 0.039271384;
            }
          } else {
            if ( (data[1].missing != -1) && (data[1].fvalue < (float)0.13584434986)) {
              result[2] += -0.020466974;
            } else {
              if ( (data[11].missing != -1) && (data[11].fvalue < (float)-0.24443873763)) {
                result[2] += 0.03384597;
              } else {
                result[2] += 0.08626541;
              }
            }
          }
        }
      } else {
        if ( (data[16].missing != -1) && (data[16].fvalue < (float)0.034552905709)) {
          result[2] += 0.03447447;
        } else {
          result[2] += -0.058914613;
        }
      }
    }
  } else {
    if ( (data[5].missing != -1) && (data[5].fvalue < (float)0.51325875521)) {
      if ( (data[5].missing != -1) && (data[5].fvalue < (float)-0.14828489721)) {
        if ( (data[10].missing != -1) && (data[10].fvalue < (float)2.0270805359)) {
          result[2] += -0.05870351;
        } else {
          result[2] += -0.021829793;
        }
      } else {
        if ( (data[3].missing != -1) && (data[3].fvalue < (float)0.2672431469)) {
          if ( (data[8].missing != -1) && (data[8].fvalue < (float)-0.10686820745)) {
            result[2] += 0.055767436;
          } else {
            result[2] += -0.017605267;
          }
        } else {
          if ( (data[8].missing != -1) && (data[8].fvalue < (float)-0.12431260198)) {
            if ( (data[0].missing != -1) && (data[0].fvalue < (float)-0.99484544992)) {
              result[2] += -0.058921613;
            } else {
              result[2] += 0.024195088;
            }
          } else {
            result[2] += -0.059874374;
          }
        }
      }
    } else {
      if ( (data[3].missing != -1) && (data[3].fvalue < (float)1.1059601307)) {
        if ( (data[0].missing != -1) && (data[0].fvalue < (float)-0.61925303936)) {
          result[2] += -0.025318895;
        } else {
          if ( (data[13].missing != -1) && (data[13].fvalue < (float)-0.29222750664)) {
            result[2] += 0.037145134;
          } else {
            result[2] += 0.09198677;
          }
        }
      } else {
        if ( (data[14].missing != -1) && (data[14].fvalue < (float)-1.1903145313)) {
          result[2] += -0.023122787;
        } else {
          result[2] += -0.059928697;
        }
      }
    }
  }
  if ( (data[11].missing != -1) && (data[11].fvalue < (float)1.4288539886)) {
    if ( (data[10].missing != -1) && (data[10].fvalue < (float)0.09049295634)) {
      if ( (data[1].missing != -1) && (data[1].fvalue < (float)-1.425771594)) {
        result[3] += 0.022028936;
      } else {
        if ( (data[12].missing != -1) && (data[12].fvalue < (float)0.99250650406)) {
          if ( (data[10].missing != -1) && (data[10].fvalue < (float)-0.39829662442)) {
            if ( (data[12].missing != -1) && (data[12].fvalue < (float)0.64476305246)) {
              result[3] += -0.057800364;
            } else {
              if ( (data[11].missing != -1) && (data[11].fvalue < (float)-0.23058250546)) {
                result[3] += -0.05350423;
              } else {
                result[3] += -0.018576112;
              }
            }
          } else {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)-0.29118299484)) {
              result[3] += -0.0058970354;
            } else {
              if ( (data[6].missing != -1) && (data[6].fvalue < (float)-1.2536873817)) {
                result[3] += -0.0056842803;
              } else {
                result[3] += -0.04859936;
              }
            }
          }
        } else {
          if ( (data[11].missing != -1) && (data[11].fvalue < (float)-0.13807588816)) {
            if ( (data[11].missing != -1) && (data[11].fvalue < (float)-0.23818291724)) {
              result[3] += -0.05724279;
            } else {
              result[3] += -0.010722409;
            }
          } else {
            result[3] += 0.06631764;
          }
        }
      }
    } else {
      if ( (data[8].missing != -1) && (data[8].fvalue < (float)-0.21470879018)) {
        if ( (data[16].missing != -1) && (data[16].fvalue < (float)0.0056078946218)) {
          result[3] += -0.058152683;
        } else {
          if ( (data[8].missing != -1) && (data[8].fvalue < (float)-0.21842740476)) {
            result[3] += -0.0044359635;
          } else {
            result[3] += -0.051294204;
          }
        }
      } else {
        if ( (data[12].missing != -1) && (data[12].fvalue < (float)-0.52997714281)) {
          if ( (data[5].missing != -1) && (data[5].fvalue < (float)0.35733887553)) {
            if ( (data[13].missing != -1) && (data[13].fvalue < (float)1.0546414852)) {
              if ( (data[0].missing != -1) && (data[0].fvalue < (float)-0.88791364431)) {
                result[3] += 0.11709871;
              } else {
                result[3] += 0.07517801;
              }
            } else {
              result[3] += 0.011451938;
            }
          } else {
            if ( (data[7].missing != -1) && (data[7].fvalue < (float)0.67131799459)) {
              result[3] += 0.042536147;
            } else {
              result[3] += -0.041650183;
            }
          }
        } else {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)1.2197483778)) {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)0.2672431469)) {
              if ( (data[12].missing != -1) && (data[12].fvalue < (float)-0.3120880723)) {
                result[3] += -0.025665114;
              } else {
                result[3] += 0.035004538;
              }
            } else {
              if ( (data[6].missing != -1) && (data[6].fvalue < (float)-0.71604603529)) {
                result[3] += 0.0088596875;
              } else {
                result[3] += -0.054069873;
              }
            }
          } else {
            result[3] += 0.08892546;
          }
        }
      }
    }
  } else {
    if ( (data[12].missing != -1) && (data[12].fvalue < (float)0.84613794088)) {
      result[3] += 0.015842305;
    } else {
      result[3] += 0.11872585;
    }
  }
  if ( (data[7].missing != -1) && (data[7].fvalue < (float)-0.4675784409)) {
    if ( (data[5].missing != -1) && (data[5].fvalue < (float)0.07551728934)) {
      if ( (data[3].missing != -1) && (data[3].fvalue < (float)-1.1314468384)) {
        if ( (data[12].missing != -1) && (data[12].fvalue < (float)0.92753559351)) {
          result[0] += -0.057662707;
        } else {
          result[0] += -0.021956958;
        }
      } else {
        if ( (data[11].missing != -1) && (data[11].fvalue < (float)1.4288539886)) {
          if ( (data[10].missing != -1) && (data[10].fvalue < (float)-0.85419273376)) {
            if ( (data[11].missing != -1) && (data[11].fvalue < (float)-0.25845351815)) {
              result[0] += 0.105352275;
            } else {
              if ( (data[11].missing != -1) && (data[11].fvalue < (float)-0.22255906463)) {
                result[0] += 0.01321439;
              } else {
                result[0] += -0.03266762;
              }
            }
          } else {
            result[0] += 0.0926668;
          }
        } else {
          result[0] += 0.0011958202;
        }
      }
    } else {
      if ( (data[6].missing != -1) && (data[6].fvalue < (float)1.0815649033)) {
        if ( (data[11].missing != -1) && (data[11].fvalue < (float)-0.047184146941)) {
          result[0] += -0.013694748;
        } else {
          result[0] += -0.054113984;
        }
      } else {
        if ( (data[7].missing != -1) && (data[7].fvalue < (float)-0.85705763102)) {
          result[0] += 0.083268516;
        } else {
          result[0] += -0.008356147;
        }
      }
    }
  } else {
    if ( (data[9].missing != -1) && (data[9].fvalue < (float)-0.25189942122)) {
      if ( (data[6].missing != -1) && (data[6].fvalue < (float)-0.77784711123)) {
        if ( (data[5].missing != -1) && (data[5].fvalue < (float)-0.41432738304)) {
          result[0] += 0.038603213;
        } else {
          result[0] += -0.036770444;
        }
      } else {
        if ( (data[8].missing != -1) && (data[8].fvalue < (float)-0.16417980194)) {
          if ( (data[5].missing != -1) && (data[5].fvalue < (float)0.49404135346)) {
            if ( (data[5].missing != -1) && (data[5].fvalue < (float)-0.52645909786)) {
              result[0] += -0.020692144;
            } else {
              if ( (data[1].missing != -1) && (data[1].fvalue < (float)-2.5561361313)) {
                result[0] += -0.033854663;
              } else {
                result[0] += -0.058677472;
              }
            }
          } else {
            result[0] += -0.0251585;
          }
        } else {
          result[0] += -0.010596818;
        }
      }
    } else {
      if ( (data[5].missing != -1) && (data[5].fvalue < (float)-0.35727164149)) {
        if ( (data[5].missing != -1) && (data[5].fvalue < (float)-0.48989018798)) {
          result[0] += 0.10470932;
        } else {
          if ( (data[11].missing != -1) && (data[11].fvalue < (float)-0.22396065295)) {
            result[0] += 0.08356428;
          } else {
            result[0] += 0.012296896;
          }
        }
      } else {
        if ( (data[10].missing != -1) && (data[10].fvalue < (float)0.53875249624)) {
          if ( (data[5].missing != -1) && (data[5].fvalue < (float)-0.072991624475)) {
            if ( (data[12].missing != -1) && (data[12].fvalue < (float)-0.11233115941)) {
              if ( (data[13].missing != -1) && (data[13].fvalue < (float)0.74447184801)) {
                result[0] += -0.05835973;
              } else {
                result[0] += 0.008551809;
              }
            } else {
              result[0] += 0.038121596;
            }
          } else {
            result[0] += -0.05791085;
          }
        } else {
          if ( (data[16].missing != -1) && (data[16].fvalue < (float)0.067746691406)) {
            result[0] += 0.0576772;
          } else {
            result[0] += -0.029081995;
          }
        }
      }
    }
  }
  if ( (data[0].missing != -1) && (data[0].fvalue < (float)-0.88791364431)) {
    if ( (data[8].missing != -1) && (data[8].fvalue < (float)-0.21470879018)) {
      if ( (data[7].missing != -1) && (data[7].fvalue < (float)1.9876180887)) {
        if ( (data[13].missing != -1) && (data[13].fvalue < (float)0.45347779989)) {
          result[1] += 0.04525685;
        } else {
          result[1] += 0.0965841;
        }
      } else {
        result[1] += 0.0036946055;
      }
    } else {
      if ( (data[11].missing != -1) && (data[11].fvalue < (float)-0.25357052684)) {
        result[1] += -0.057139333;
      } else {
        if ( (data[8].missing != -1) && (data[8].fvalue < (float)-0.19731342793)) {
          if ( (data[0].missing != -1) && (data[0].fvalue < (float)-1.3415445089)) {
            result[1] += 0.07919585;
          } else {
            result[1] += 0.019079672;
          }
        } else {
          result[1] += -0.025809346;
        }
      }
    }
  } else {
    if ( (data[13].missing != -1) && (data[13].fvalue < (float)1.1479464769)) {
      if ( (data[8].missing != -1) && (data[8].fvalue < (float)1.7036572695)) {
        result[1] += -0.057065822;
      } else {
        result[1] += -0.033029795;
      }
    } else {
      if ( (data[16].missing != -1) && (data[16].fvalue < (float)0.048564616591)) {
        result[1] += -0.027656099;
      } else {
        result[1] += 0.05389262;
      }
    }
  }
  if ( (data[3].missing != -1) && (data[3].fvalue < (float)0.080768875778)) {
    if ( (data[7].missing != -1) && (data[7].fvalue < (float)-0.48104423285)) {
      if ( (data[1].missing != -1) && (data[1].fvalue < (float)0.43742504716)) {
        if ( (data[14].missing != -1) && (data[14].fvalue < (float)0.64714348316)) {
          result[2] += -0.003947451;
        } else {
          result[2] += -0.060523536;
        }
      } else {
        if ( (data[16].missing != -1) && (data[16].fvalue < (float)0.039527323097)) {
          if ( (data[6].missing != -1) && (data[6].fvalue < (float)-0.25756847858)) {
            if ( (data[16].missing != -1) && (data[16].fvalue < (float)-0.018879529089)) {
              result[2] += -0.027827663;
            } else {
              result[2] += 0.0399628;
            }
          } else {
            if ( (data[13].missing != -1) && (data[13].fvalue < (float)-1.5869985819)) {
              result[2] += 0.024003444;
            } else {
              if ( (data[5].missing != -1) && (data[5].fvalue < (float)-0.3588539362)) {
                result[2] += 0.041836184;
              } else {
                result[2] += 0.09802504;
              }
            }
          }
        } else {
          if ( (data[5].missing != -1) && (data[5].fvalue < (float)0.40036734939)) {
            result[2] += -0.06255185;
          } else {
            result[2] += 0.028971324;
          }
        }
      }
    } else {
      if ( (data[10].missing != -1) && (data[10].fvalue < (float)-0.16315969825)) {
        if ( (data[6].missing != -1) && (data[6].fvalue < (float)-1.1565660238)) {
          result[2] += 0.006663824;
        } else {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)-0.31944227219)) {
            if ( (data[8].missing != -1) && (data[8].fvalue < (float)-0.12082034349)) {
              result[2] += 0.08852098;
            } else {
              result[2] += 0.04626293;
            }
          } else {
            if ( (data[5].missing != -1) && (data[5].fvalue < (float)-0.050763271749)) {
              result[2] += -0.0027093866;
            } else {
              result[2] += 0.085266225;
            }
          }
        }
      } else {
        if ( (data[16].missing != -1) && (data[16].fvalue < (float)0.0056078946218)) {
          result[2] += -0.031028444;
        } else {
          if ( (data[12].missing != -1) && (data[12].fvalue < (float)-0.20998249948)) {
            if ( (data[10].missing != -1) && (data[10].fvalue < (float)0.41789460182)) {
              result[2] += 0.09149502;
            } else {
              result[2] += 0.04410931;
            }
          } else {
            result[2] += -0.0021690356;
          }
        }
      }
    }
  } else {
    if ( (data[5].missing != -1) && (data[5].fvalue < (float)2.770565033)) {
      if ( (data[3].missing != -1) && (data[3].fvalue < (float)0.19738391042)) {
        if ( (data[11].missing != -1) && (data[11].fvalue < (float)-0.23313875496)) {
          result[2] += -0.055080928;
        } else {
          result[2] += 0.01651944;
        }
      } else {
        if ( (data[6].missing != -1) && (data[6].fvalue < (float)1.4502813816)) {
          if ( (data[11].missing != -1) && (data[11].fvalue < (float)-0.27450460196)) {
            result[2] += -0.021576902;
          } else {
            if ( (data[5].missing != -1) && (data[5].fvalue < (float)-0.24164952338)) {
              result[2] += -0.060639113;
            } else {
              if ( (data[3].missing != -1) && (data[3].fvalue < (float)1.0147672892)) {
                result[2] += -0.033491522;
              } else {
                result[2] += -0.059721965;
              }
            }
          }
        } else {
          result[2] += -0.010470951;
        }
      }
    } else {
      if ( (data[16].missing != -1) && (data[16].fvalue < (float)0.075354173779)) {
        result[2] += 0.07349704;
      } else {
        result[2] += -0.013827592;
      }
    }
  }
  if ( (data[11].missing != -1) && (data[11].fvalue < (float)1.4288539886)) {
    if ( (data[16].missing != -1) && (data[16].fvalue < (float)0.0035756931175)) {
      if ( (data[11].missing != -1) && (data[11].fvalue < (float)-0.18861956894)) {
        if ( (data[6].missing != -1) && (data[6].fvalue < (float)-1.2102799416)) {
          if ( (data[10].missing != -1) && (data[10].fvalue < (float)-0.36787736416)) {
            result[3] += -0.05230658;
          } else {
            result[3] += -0.004483411;
          }
        } else {
          if ( (data[16].missing != -1) && (data[16].fvalue < (float)0.00085049594054)) {
            if ( (data[13].missing != -1) && (data[13].fvalue < (float)1.7701672316)) {
              result[3] += -0.056998786;
            } else {
              result[3] += -0.03283496;
            }
          } else {
            result[3] += -0.027375514;
          }
        }
      } else {
        if ( (data[12].missing != -1) && (data[12].fvalue < (float)0.68646353483)) {
          if ( (data[6].missing != -1) && (data[6].fvalue < (float)-1.0255299807)) {
            result[3] += -0.012403695;
          } else {
            result[3] += -0.056160327;
          }
        } else {
          result[3] += 0.050967723;
        }
      }
    } else {
      if ( (data[10].missing != -1) && (data[10].fvalue < (float)0.09049295634)) {
        if ( (data[2].missing != -1) && (data[2].fvalue < (float)-0.069487594068)) {
          if ( (data[0].missing != -1) && (data[0].fvalue < (float)0.87237280607)) {
            result[3] += 0.061685063;
          } else {
            result[3] += -0.0404085;
          }
        } else {
          if ( (data[7].missing != -1) && (data[7].fvalue < (float)-0.94923579693)) {
            if ( (data[0].missing != -1) && (data[0].fvalue < (float)1.1677356958)) {
              result[3] += 0.045514937;
            } else {
              result[3] += -0.04063907;
            }
          } else {
            if ( (data[1].missing != -1) && (data[1].fvalue < (float)-1.3821275234)) {
              result[3] += -0.011907785;
            } else {
              if ( (data[7].missing != -1) && (data[7].fvalue < (float)-0.41575521231)) {
                result[3] += -0.037979033;
              } else {
                result[3] += -0.055244662;
              }
            }
          }
        }
      } else {
        if ( (data[6].missing != -1) && (data[6].fvalue < (float)0.43545079231)) {
          if ( (data[13].missing != -1) && (data[13].fvalue < (float)0.92155778408)) {
            if ( (data[5].missing != -1) && (data[5].fvalue < (float)-0.39605548978)) {
              result[3] += -0.026505409;
            } else {
              if ( (data[7].missing != -1) && (data[7].fvalue < (float)-0.55196768045)) {
                result[3] += 0.019436054;
              } else {
                result[3] += 0.09188043;
              }
            }
          } else {
            result[3] += -0.02808438;
          }
        } else {
          if ( (data[10].missing != -1) && (data[10].fvalue < (float)0.96652847528)) {
            if ( (data[16].missing != -1) && (data[16].fvalue < (float)0.030153848231)) {
              result[3] += -0.00980947;
            } else {
              result[3] += -0.05097292;
            }
          } else {
            if ( (data[7].missing != -1) && (data[7].fvalue < (float)0.61500769854)) {
              result[3] += 0.08559065;
            } else {
              if ( (data[12].missing != -1) && (data[12].fvalue < (float)-1.3175876141)) {
                result[3] += 0.009317505;
              } else {
                result[3] += -0.042641677;
              }
            }
          }
        }
      }
    }
  } else {
    if ( (data[9].missing != -1) && (data[9].fvalue < (float)1.5155695677)) {
      result[3] += 0.0020813458;
    } else {
      result[3] += 0.10782688;
    }
  }
  if ( (data[9].missing != -1) && (data[9].fvalue < (float)-0.1445838958)) {
    if ( (data[6].missing != -1) && (data[6].fvalue < (float)-0.72838789225)) {
      if ( (data[5].missing != -1) && (data[5].fvalue < (float)-0.41925215721)) {
        result[0] += 0.061329957;
      } else {
        if ( (data[8].missing != -1) && (data[8].fvalue < (float)-0.19687050581)) {
          result[0] += -0.05393436;
        } else {
          result[0] += 0.0095901685;
        }
      }
    } else {
      if ( (data[8].missing != -1) && (data[8].fvalue < (float)-0.20325836539)) {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)-0.35524612665)) {
          if ( (data[12].missing != -1) && (data[12].fvalue < (float)-1.4443564415)) {
            result[0] += -0.033074647;
          } else {
            result[0] += -0.058973063;
          }
        } else {
          result[0] += -0.032126512;
        }
      } else {
        if ( (data[3].missing != -1) && (data[3].fvalue < (float)0.15496069193)) {
          if ( (data[7].missing != -1) && (data[7].fvalue < (float)-0.38695818186)) {
            result[0] += -0.0029408855;
          } else {
            result[0] += -0.05703296;
          }
        } else {
          result[0] += 0.015505358;
        }
      }
    }
  } else {
    if ( (data[5].missing != -1) && (data[5].fvalue < (float)-0.15679863095)) {
      if ( (data[3].missing != -1) && (data[3].fvalue < (float)-1.1069164276)) {
        result[0] += -0.03261506;
      } else {
        if ( (data[3].missing != -1) && (data[3].fvalue < (float)0.84174287319)) {
          if ( (data[14].missing != -1) && (data[14].fvalue < (float)-0.032462161034)) {
            if ( (data[11].missing != -1) && (data[11].fvalue < (float)-0.25357052684)) {
              result[0] += 0.06472529;
            } else {
              result[0] += -0.009472779;
            }
          } else {
            if ( (data[10].missing != -1) && (data[10].fvalue < (float)-0.78995537758)) {
              if ( (data[11].missing != -1) && (data[11].fvalue < (float)-0.21514505148)) {
                result[0] += 0.08416686;
              } else {
                result[0] += -0.04791567;
              }
            } else {
              if ( (data[2].missing != -1) && (data[2].fvalue < (float)0.023060614243)) {
                result[0] += 0.056944516;
              } else {
                result[0] += 0.088525064;
              }
            }
          }
        } else {
          if ( (data[11].missing != -1) && (data[11].fvalue < (float)-0.23246327043)) {
            result[0] += 0.052538898;
          } else {
            result[0] += -0.026722971;
          }
        }
      }
    } else {
      if ( (data[14].missing != -1) && (data[14].fvalue < (float)0.77326214314)) {
        if ( (data[3].missing != -1) && (data[3].fvalue < (float)0.2672431469)) {
          if ( (data[16].missing != -1) && (data[16].fvalue < (float)0.06678853929)) {
            if ( (data[5].missing != -1) && (data[5].fvalue < (float)-0.093005672097)) {
              result[0] += -0.012361778;
            } else {
              result[0] += -0.05938484;
            }
          } else {
            result[0] += 0.009543228;
          }
        } else {
          if ( (data[8].missing != -1) && (data[8].fvalue < (float)-0.18555359542)) {
            result[0] += -0.030372847;
          } else {
            if ( (data[13].missing != -1) && (data[13].fvalue < (float)-0.13281053305)) {
              result[0] += -0.009964598;
            } else {
              result[0] += 0.044452865;
            }
          }
        }
      } else {
        if ( (data[10].missing != -1) && (data[10].fvalue < (float)0.99988812208)) {
          if ( (data[13].missing != -1) && (data[13].fvalue < (float)-1.2693741322)) {
            if ( (data[8].missing != -1) && (data[8].fvalue < (float)-0.12956127524)) {
              result[0] += 0.0018268289;
            } else {
              result[0] += 0.031383187;
            }
          } else {
            if ( (data[12].missing != -1) && (data[12].fvalue < (float)1.0864658356)) {
              result[0] += 0.0992076;
            } else {
              result[0] += 0.044719804;
            }
          }
        } else {
          result[0] += -0.0534378;
        }
      }
    }
  }
  if ( (data[0].missing != -1) && (data[0].fvalue < (float)-0.88791364431)) {
    if ( (data[8].missing != -1) && (data[8].fvalue < (float)-0.21379387379)) {
      if ( (data[14].missing != -1) && (data[14].fvalue < (float)-2.3605000973)) {
        result[1] += -0.0008125459;
      } else {
        if ( (data[13].missing != -1) && (data[13].fvalue < (float)0.55535823107)) {
          result[1] += 0.04610579;
        } else {
          if ( (data[10].missing != -1) && (data[10].fvalue < (float)2.0270805359)) {
            if ( (data[13].missing != -1) && (data[13].fvalue < (float)1.8422523737)) {
              result[1] += 0.09224671;
            } else {
              result[1] += 0.054357715;
            }
          } else {
            result[1] += 0.050114956;
          }
        }
      }
    } else {
      if ( (data[6].missing != -1) && (data[6].fvalue < (float)-0.23574389517)) {
        result[1] += -0.046647877;
      } else {
        if ( (data[11].missing != -1) && (data[11].fvalue < (float)-0.24631793797)) {
          result[1] += 0.0040831836;
        } else {
          result[1] += 0.052708168;
        }
      }
    }
  } else {
    if ( (data[13].missing != -1) && (data[13].fvalue < (float)1.2225931883)) {
      result[1] += -0.056254566;
    } else {
      if ( (data[15].missing != -1) && (data[15].fvalue < (float)-0.50750309229)) {
        result[1] += 0.06010099;
      } else {
        result[1] += -0.035208832;
      }
    }
  }
  if ( (data[3].missing != -1) && (data[3].fvalue < (float)0.046019136906)) {
    if ( (data[6].missing != -1) && (data[6].fvalue < (float)-0.85984605551)) {
      if ( (data[5].missing != -1) && (data[5].fvalue < (float)-0.30345416069)) {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)-0.37011244893)) {
          result[2] += 0.041379984;
        } else {
          if ( (data[7].missing != -1) && (data[7].fvalue < (float)-1.0048215389)) {
            result[2] += -0.0209394;
          } else {
            result[2] += -0.05956326;
          }
        }
      } else {
        result[2] += 0.06996161;
      }
    } else {
      if ( (data[12].missing != -1) && (data[12].fvalue < (float)0.99250650406)) {
        if ( (data[3].missing != -1) && (data[3].fvalue < (float)-0.91771012545)) {
          if ( (data[5].missing != -1) && (data[5].fvalue < (float)0.1903680414)) {
            if ( (data[16].missing != -1) && (data[16].fvalue < (float)-0.019668526947)) {
              if ( (data[3].missing != -1) && (data[3].fvalue < (float)-1.3735567331)) {
                result[2] += 0.085990846;
              } else {
                result[2] += 0.035806905;
              }
            } else {
              result[2] += 0.089508004;
            }
          } else {
            result[2] += 0.048006218;
          }
        } else {
          if ( (data[5].missing != -1) && (data[5].fvalue < (float)-0.323004812)) {
            if ( (data[16].missing != -1) && (data[16].fvalue < (float)0.013591933995)) {
              if ( (data[10].missing != -1) && (data[10].fvalue < (float)-0.56095850468)) {
                result[2] += -0.018953701;
              } else {
                result[2] += -0.062228482;
              }
            } else {
              result[2] += 0.019788591;
            }
          } else {
            if ( (data[10].missing != -1) && (data[10].fvalue < (float)0.3943721056)) {
              if ( (data[6].missing != -1) && (data[6].fvalue < (float)-0.4936747849)) {
                result[2] += 0.036260992;
              } else {
                result[2] += 0.07712265;
              }
            } else {
              result[2] += 0.013538085;
            }
          }
        }
      } else {
        if ( (data[8].missing != -1) && (data[8].fvalue < (float)-0.1196475178)) {
          result[2] += 0.033463284;
        } else {
          result[2] += -0.04969732;
        }
      }
    }
  } else {
    if ( (data[5].missing != -1) && (data[5].fvalue < (float)-0.14828489721)) {
      if ( (data[11].missing != -1) && (data[11].fvalue < (float)-0.27450460196)) {
        result[2] += -0.018047715;
      } else {
        if ( (data[5].missing != -1) && (data[5].fvalue < (float)-0.22246353328)) {
          result[2] += -0.05767254;
        } else {
          result[2] += -0.03570562;
        }
      }
    } else {
      if ( (data[3].missing != -1) && (data[3].fvalue < (float)0.34440889955)) {
        if ( (data[0].missing != -1) && (data[0].fvalue < (float)-0.43628501892)) {
          result[2] += -0.028566947;
        } else {
          if ( (data[14].missing != -1) && (data[14].fvalue < (float)0.42597126961)) {
            result[2] += 0.09586694;
          } else {
            result[2] += 0.0125527745;
          }
        }
      } else {
        if ( (data[5].missing != -1) && (data[5].fvalue < (float)2.4669363499)) {
          if ( (data[8].missing != -1) && (data[8].fvalue < (float)-0.17387378216)) {
            if ( (data[8].missing != -1) && (data[8].fvalue < (float)-0.21131891012)) {
              result[2] += -0.056681063;
            } else {
              result[2] += 0.0051868884;
            }
          } else {
            result[2] += -0.060406804;
          }
        } else {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)1.0523011684)) {
            result[2] += 0.054572474;
          } else {
            result[2] += -0.040578283;
          }
        }
      }
    }
  }
  if ( (data[10].missing != -1) && (data[10].fvalue < (float)0.032870963216)) {
    if ( (data[2].missing != -1) && (data[2].fvalue < (float)-1.0811297894)) {
      result[3] += 0.019267818;
    } else {
      if ( (data[8].missing != -1) && (data[8].fvalue < (float)0.020930834115)) {
        if ( (data[10].missing != -1) && (data[10].fvalue < (float)-0.40548467636)) {
          if ( (data[7].missing != -1) && (data[7].fvalue < (float)-1.1657770872)) {
            result[3] += -0.0014169685;
          } else {
            result[3] += -0.05591606;
          }
        } else {
          if ( (data[6].missing != -1) && (data[6].fvalue < (float)-0.92730844021)) {
            result[3] += 0.008914815;
          } else {
            if ( (data[7].missing != -1) && (data[7].fvalue < (float)-0.27299571037)) {
              result[3] += 0.014222401;
            } else {
              result[3] += -0.050744355;
            }
          }
        }
      } else {
        if ( (data[3].missing != -1) && (data[3].fvalue < (float)-0.18419151008)) {
          result[3] += 0.06615848;
        } else {
          if ( (data[16].missing != -1) && (data[16].fvalue < (float)0.018113873899)) {
            result[3] += -0.055221852;
          } else {
            result[3] += -0.00984087;
          }
        }
      }
    }
  } else {
    if ( (data[8].missing != -1) && (data[8].fvalue < (float)-0.21131891012)) {
      if ( (data[16].missing != -1) && (data[16].fvalue < (float)0.00043312591151)) {
        result[3] += -0.056515288;
      } else {
        if ( (data[6].missing != -1) && (data[6].fvalue < (float)0.17723160982)) {
          result[3] += 0.041268133;
        } else {
          if ( (data[13].missing != -1) && (data[13].fvalue < (float)0.94055110216)) {
            result[3] += -0.05423212;
          } else {
            result[3] += -0.023737393;
          }
        }
      }
    } else {
      if ( (data[6].missing != -1) && (data[6].fvalue < (float)0.52432119846)) {
        if ( (data[5].missing != -1) && (data[5].fvalue < (float)-0.39917689562)) {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)0.84174287319)) {
            result[3] += -0.044211704;
          } else {
            result[3] += 0.03420923;
          }
        } else {
          if ( (data[13].missing != -1) && (data[13].fvalue < (float)0.92155778408)) {
            if ( (data[14].missing != -1) && (data[14].fvalue < (float)0.13486784697)) {
              if ( (data[1].missing != -1) && (data[1].fvalue < (float)-2.2683463097)) {
                result[3] += 0.04730507;
              } else {
                result[3] += 0.10523498;
              }
            } else {
              if ( (data[10].missing != -1) && (data[10].fvalue < (float)1.0788408518)) {
                result[3] += 0.0072132363;
              } else {
                result[3] += 0.098233014;
              }
            }
          } else {
            result[3] += 0.0032623012;
          }
        }
      } else {
        if ( (data[10].missing != -1) && (data[10].fvalue < (float)0.96652847528)) {
          if ( (data[6].missing != -1) && (data[6].fvalue < (float)1.009770751)) {
            result[3] += -0.016204957;
          } else {
            result[3] += -0.05536759;
          }
        } else {
          result[3] += 0.040798645;
        }
      }
    }
  }
  if ( (data[9].missing != -1) && (data[9].fvalue < (float)0.14077378809)) {
    if ( (data[6].missing != -1) && (data[6].fvalue < (float)-0.72838789225)) {
      if ( (data[12].missing != -1) && (data[12].fvalue < (float)-0.71274340153)) {
        result[0] += -0.04038613;
      } else {
        if ( (data[3].missing != -1) && (data[3].fvalue < (float)-0.94150280952)) {
          result[0] += -0.012146054;
        } else {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)-0.37011244893)) {
            result[0] += 0.03480771;
          } else {
            result[0] += 0.084645785;
          }
        }
      }
    } else {
      if ( (data[9].missing != -1) && (data[9].fvalue < (float)-0.25189942122)) {
        if ( (data[5].missing != -1) && (data[5].fvalue < (float)-0.52645909786)) {
          result[0] += -0.0064341957;
        } else {
          if ( (data[5].missing != -1) && (data[5].fvalue < (float)0.29465630651)) {
            result[0] += -0.057041407;
          } else {
            if ( (data[10].missing != -1) && (data[10].fvalue < (float)1.0438103676)) {
              result[0] += -0.0013031652;
            } else {
              result[0] += -0.051798683;
            }
          }
        }
      } else {
        if ( (data[5].missing != -1) && (data[5].fvalue < (float)-0.31484144926)) {
          result[0] += 0.020275254;
        } else {
          if ( (data[16].missing != -1) && (data[16].fvalue < (float)0.047094654292)) {
            if ( (data[11].missing != -1) && (data[11].fvalue < (float)-0.23136755824)) {
              result[0] += -0.019234873;
            } else {
              result[0] += -0.05634692;
            }
          } else {
            result[0] += -0.0042478903;
          }
        }
      }
    }
  } else {
    if ( (data[5].missing != -1) && (data[5].fvalue < (float)-0.0057680280879)) {
      if ( (data[1].missing != -1) && (data[1].fvalue < (float)-1.425771594)) {
        if ( (data[11].missing != -1) && (data[11].fvalue < (float)-0.18233262002)) {
          result[0] += 0.02246646;
        } else {
          result[0] += -0.030313903;
        }
      } else {
        if ( (data[3].missing != -1) && (data[3].fvalue < (float)-0.84289908409)) {
          result[0] += -0.008654135;
        } else {
          if ( (data[11].missing != -1) && (data[11].fvalue < (float)2.1478612423)) {
            if ( (data[7].missing != -1) && (data[7].fvalue < (float)-0.20401850343)) {
              if ( (data[3].missing != -1) && (data[3].fvalue < (float)-0.15657939017)) {
                result[0] += 0.05951802;
              } else {
                result[0] += 0.08243403;
              }
            } else {
              if ( (data[8].missing != -1) && (data[8].fvalue < (float)-0.20710201561)) {
                result[0] += 0.091337554;
              } else {
                result[0] += -0.005452312;
              }
            }
          } else {
            result[0] += -0.0019948452;
          }
        }
      }
    } else {
      if ( (data[9].missing != -1) && (data[9].fvalue < (float)1.1172224283)) {
        if ( (data[6].missing != -1) && (data[6].fvalue < (float)1.4937204123)) {
          if ( (data[6].missing != -1) && (data[6].fvalue < (float)-0.12928208709)) {
            result[0] += 0.0097596;
          } else {
            if ( (data[6].missing != -1) && (data[6].fvalue < (float)0.902148664)) {
              result[0] += -0.05788939;
            } else {
              result[0] += -0.014827147;
            }
          }
        } else {
          result[0] += 0.020538425;
        }
      } else {
        if ( (data[11].missing != -1) && (data[11].fvalue < (float)0.17148371041)) {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)1.4091589451)) {
            result[0] += 0.045922454;
          } else {
            result[0] += 0.10180938;
          }
        } else {
          if ( (data[8].missing != -1) && (data[8].fvalue < (float)0.39282861352)) {
            result[0] += 0.015238339;
          } else {
            result[0] += -0.03780844;
          }
        }
      }
    }
  }
  if ( (data[0].missing != -1) && (data[0].fvalue < (float)-0.80280572176)) {
    if ( (data[8].missing != -1) && (data[8].fvalue < (float)-0.21041087806)) {
      if ( (data[9].missing != -1) && (data[9].fvalue < (float)0.29513585567)) {
        if ( (data[6].missing != -1) && (data[6].fvalue < (float)-0.33870640397)) {
          result[1] += 0.023812972;
        } else {
          if ( (data[7].missing != -1) && (data[7].fvalue < (float)0.60061269999)) {
            result[1] += 0.040107742;
          } else {
            if ( (data[5].missing != -1) && (data[5].fvalue < (float)-0.41068267822)) {
              result[1] += 0.050343554;
            } else {
              if ( (data[4].missing != -1) && (data[4].fvalue < (float)-0.60439938307)) {
                result[1] += 0.052268285;
              } else {
                result[1] += 0.086147726;
              }
            }
          }
        }
      } else {
        result[1] += -0.0045264564;
      }
    } else {
      if ( (data[13].missing != -1) && (data[13].fvalue < (float)0.85409128666)) {
        result[1] += -0.0427135;
      } else {
        if ( (data[16].missing != -1) && (data[16].fvalue < (float)0.023775557056)) {
          result[1] += 0.023197882;
        } else {
          result[1] += -0.008094871;
        }
      }
    }
  } else {
    if ( (data[12].missing != -1) && (data[12].fvalue < (float)-1.168685317)) {
      result[1] += 0.021166071;
    } else {
      if ( (data[13].missing != -1) && (data[13].fvalue < (float)1.3674556017)) {
        result[1] += -0.05543955;
      } else {
        result[1] += -0.02288229;
      }
    }
  }
  if ( (data[3].missing != -1) && (data[3].fvalue < (float)0.015094771981)) {
    if ( (data[6].missing != -1) && (data[6].fvalue < (float)-0.85984605551)) {
      if ( (data[5].missing != -1) && (data[5].fvalue < (float)-0.1428437233)) {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)-0.37011244893)) {
          result[2] += 0.037398953;
        } else {
          if ( (data[0].missing != -1) && (data[0].fvalue < (float)0.36894261837)) {
            result[2] += -0.027835881;
          } else {
            result[2] += -0.05886941;
          }
        }
      } else {
        result[2] += 0.07164943;
      }
    } else {
      if ( (data[12].missing != -1) && (data[12].fvalue < (float)1.0508075953)) {
        if ( (data[13].missing != -1) && (data[13].fvalue < (float)1.0310770273)) {
          if ( (data[7].missing != -1) && (data[7].fvalue < (float)-0.48104423285)) {
            if ( (data[10].missing != -1) && (data[10].fvalue < (float)-0.75739496946)) {
              if ( (data[16].missing != -1) && (data[16].fvalue < (float)0.038849674165)) {
                result[2] += 0.07302059;
              } else {
                result[2] += 0.025034798;
              }
            } else {
              if ( (data[5].missing != -1) && (data[5].fvalue < (float)0.14037305117)) {
                result[2] += -0.044768132;
              } else {
                result[2] += 0.04415439;
              }
            }
          } else {
            if ( (data[0].missing != -1) && (data[0].fvalue < (float)0.63141965866)) {
              if ( (data[2].missing != -1) && (data[2].fvalue < (float)0.13006652892)) {
                result[2] += 0.049660977;
              } else {
                result[2] += 0.075535595;
              }
            } else {
              result[2] += 0.03506622;
            }
          }
        } else {
          if ( (data[8].missing != -1) && (data[8].fvalue < (float)-0.21338579059)) {
            result[2] += -0.018717183;
          } else {
            result[2] += 0.039678805;
          }
        }
      } else {
        if ( (data[8].missing != -1) && (data[8].fvalue < (float)-0.14445891976)) {
          result[2] += 0.03181011;
        } else {
          result[2] += -0.049962368;
        }
      }
    }
  } else {
    if ( (data[5].missing != -1) && (data[5].fvalue < (float)0.73547679186)) {
      if ( (data[8].missing != -1) && (data[8].fvalue < (float)-0.15855799615)) {
        if ( (data[0].missing != -1) && (data[0].fvalue < (float)-0.80280572176)) {
          if ( (data[5].missing != -1) && (data[5].fvalue < (float)-0.41068267822)) {
            result[2] += -0.01709279;
          } else {
            if ( (data[10].missing != -1) && (data[10].fvalue < (float)0.3943721056)) {
              result[2] += -0.020995425;
            } else {
              result[2] += -0.057267226;
            }
          }
        } else {
          if ( (data[5].missing != -1) && (data[5].fvalue < (float)-0.15271317959)) {
            result[2] += -0.04248708;
          } else {
            result[2] += 0.05103883;
          }
        }
      } else {
        result[2] += -0.057023365;
      }
    } else {
      if ( (data[3].missing != -1) && (data[3].fvalue < (float)0.72411340475)) {
        if ( (data[5].missing != -1) && (data[5].fvalue < (float)2.4669363499)) {
          result[2] += 0.024706636;
        } else {
          result[2] += 0.07794561;
        }
      } else {
        if ( (data[10].missing != -1) && (data[10].fvalue < (float)1.1853919029)) {
          result[2] += -0.0056807585;
        } else {
          result[2] += -0.05594026;
        }
      }
    }
  }
  if ( (data[11].missing != -1) && (data[11].fvalue < (float)2.1478612423)) {
    if ( (data[16].missing != -1) && (data[16].fvalue < (float)0.016788505018)) {
      if ( (data[6].missing != -1) && (data[6].fvalue < (float)-1.1365638971)) {
        if ( (data[5].missing != -1) && (data[5].fvalue < (float)-0.46358054876)) {
          if ( (data[5].missing != -1) && (data[5].fvalue < (float)-0.70301657915)) {
            result[3] += -0.017698469;
          } else {
            result[3] += -0.051938754;
          }
        } else {
          if ( (data[11].missing != -1) && (data[11].fvalue < (float)-0.2294845134)) {
            result[3] += -0.005057389;
          } else {
            result[3] += 0.06470888;
          }
        }
      } else {
        if ( (data[6].missing != -1) && (data[6].fvalue < (float)0.4216991365)) {
          if ( (data[10].missing != -1) && (data[10].fvalue < (float)0.080816432834)) {
            if ( (data[8].missing != -1) && (data[8].fvalue < (float)0.12072786689)) {
              if ( (data[12].missing != -1) && (data[12].fvalue < (float)0.8181411624)) {
                result[3] += -0.05502648;
              } else {
                result[3] += -0.01062072;
              }
            } else {
              result[3] += -0.003102932;
            }
          } else {
            if ( (data[8].missing != -1) && (data[8].fvalue < (float)-0.21470879018)) {
              result[3] += -0.049302723;
            } else {
              if ( (data[7].missing != -1) && (data[7].fvalue < (float)0.087789729238)) {
                result[3] += -0.026631901;
              } else {
                result[3] += 0.065382734;
              }
            }
          }
        } else {
          result[3] += -0.05670346;
        }
      }
    } else {
      if ( (data[6].missing != -1) && (data[6].fvalue < (float)1.0815649033)) {
        if ( (data[3].missing != -1) && (data[3].fvalue < (float)1.027759552)) {
          if ( (data[2].missing != -1) && (data[2].fvalue < (float)-0.069487594068)) {
            if ( (data[10].missing != -1) && (data[10].fvalue < (float)-0.33739864826)) {
              result[3] += -0.0052492595;
            } else {
              result[3] += 0.09908938;
            }
          } else {
            if ( (data[8].missing != -1) && (data[8].fvalue < (float)-0.14253479242)) {
              if ( (data[10].missing != -1) && (data[10].fvalue < (float)0.15932565928)) {
                result[3] += -0.046757385;
              } else {
                result[3] += -0.0047028656;
              }
            } else {
              if ( (data[7].missing != -1) && (data[7].fvalue < (float)0.13828615844)) {
                result[3] += -0.0068103643;
              } else {
                result[3] += 0.07270841;
              }
            }
          }
        } else {
          if ( (data[11].missing != -1) && (data[11].fvalue < (float)0.12085646391)) {
            result[3] += 0.089235395;
          } else {
            result[3] += 0.014978143;
          }
        }
      } else {
        if ( (data[11].missing != -1) && (data[11].fvalue < (float)-0.24741731584)) {
          result[3] += -0.016418567;
        } else {
          result[3] += -0.05377155;
        }
      }
    }
  } else {
    if ( (data[5].missing != -1) && (data[5].fvalue < (float)-0.24679374695)) {
      result[3] += 0.035955038;
    } else {
      result[3] += 0.09025704;
    }
  }
  if ( (data[9].missing != -1) && (data[9].fvalue < (float)-0.1445838958)) {
    if ( (data[6].missing != -1) && (data[6].fvalue < (float)-0.72838789225)) {
      if ( (data[12].missing != -1) && (data[12].fvalue < (float)-0.70902597904)) {
        result[0] += -0.037998956;
      } else {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)-0.56608271599)) {
          result[0] += -0.009374312;
        } else {
          result[0] += 0.06273283;
        }
      }
    } else {
      if ( (data[8].missing != -1) && (data[8].fvalue < (float)-0.16417980194)) {
        if ( (data[5].missing != -1) && (data[5].fvalue < (float)-0.52645909786)) {
          result[0] += -0.021360995;
        } else {
          if ( (data[16].missing != -1) && (data[16].fvalue < (float)0.063959240913)) {
            if ( (data[5].missing != -1) && (data[5].fvalue < (float)0.49404135346)) {
              result[0] += -0.05518576;
            } else {
              result[0] += -0.025431741;
            }
          } else {
            result[0] += -0.022655888;
          }
        }
      } else {
        result[0] += -0.014047295;
      }
    }
  } else {
    if ( (data[5].missing != -1) && (data[5].fvalue < (float)-0.35539877415)) {
      if ( (data[10].missing != -1) && (data[10].fvalue < (float)-1.2233704329)) {
        result[0] += -0.020823712;
      } else {
        if ( (data[3].missing != -1) && (data[3].fvalue < (float)0.87052029371)) {
          if ( (data[7].missing != -1) && (data[7].fvalue < (float)0.057101707906)) {
            if ( (data[10].missing != -1) && (data[10].fvalue < (float)-0.85419273376)) {
              result[0] += 0.053582598;
            } else {
              result[0] += 0.078932814;
            }
          } else {
            result[0] += 0.03419913;
          }
        } else {
          result[0] += 0.014036787;
        }
      }
    } else {
      if ( (data[7].missing != -1) && (data[7].fvalue < (float)-0.46015933156)) {
        if ( (data[3].missing != -1) && (data[3].fvalue < (float)1.4404942989)) {
          if ( (data[5].missing != -1) && (data[5].fvalue < (float)0.07551728934)) {
            if ( (data[0].missing != -1) && (data[0].fvalue < (float)0.90102219582)) {
              if ( (data[1].missing != -1) && (data[1].fvalue < (float)0.13584434986)) {
                result[0] += 0.06736084;
              } else {
                result[0] += -0.01355626;
              }
            } else {
              result[0] += 0.08896167;
            }
          } else {
            if ( (data[6].missing != -1) && (data[6].fvalue < (float)0.902148664)) {
              if ( (data[3].missing != -1) && (data[3].fvalue < (float)-0.09566282481)) {
                result[0] += -0.05421987;
              } else {
                result[0] += -0.014241365;
              }
            } else {
              if ( (data[11].missing != -1) && (data[11].fvalue < (float)-0.15063607693)) {
                result[0] += 0.08047694;
              } else {
                result[0] += 0.0402483;
              }
            }
          }
        } else {
          result[0] += -0.05389672;
        }
      } else {
        if ( (data[10].missing != -1) && (data[10].fvalue < (float)0.53875249624)) {
          if ( (data[5].missing != -1) && (data[5].fvalue < (float)-0.096374280751)) {
            if ( (data[12].missing != -1) && (data[12].fvalue < (float)-0.11233115941)) {
              if ( (data[16].missing != -1) && (data[16].fvalue < (float)0.01313174516)) {
                result[0] += -0.055990107;
              } else {
                result[0] += -0.0047588455;
              }
            } else {
              result[0] += 0.04845394;
            }
          } else {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)0.49207127094)) {
              result[0] += -0.056289732;
            } else {
              if ( (data[0].missing != -1) && (data[0].fvalue < (float)0.64019787312)) {
                result[0] += -0.004959283;
              } else {
                result[0] += -0.055003464;
              }
            }
          }
        } else {
          if ( (data[16].missing != -1) && (data[16].fvalue < (float)0.067746691406)) {
            result[0] += 0.065533996;
          } else {
            result[0] += -0.02927616;
          }
        }
      }
    }
  }
  if ( (data[0].missing != -1) && (data[0].fvalue < (float)-0.80280572176)) {
    if ( (data[8].missing != -1) && (data[8].fvalue < (float)-0.21041087806)) {
      if ( (data[9].missing != -1) && (data[9].fvalue < (float)0.28542903066)) {
        if ( (data[6].missing != -1) && (data[6].fvalue < (float)-0.4729436636)) {
          result[1] += 0.004847599;
        } else {
          result[1] += 0.07694568;
        }
      } else {
        result[1] += -0.003981717;
      }
    } else {
      if ( (data[13].missing != -1) && (data[13].fvalue < (float)1.0956714153)) {
        result[1] += -0.045333356;
      } else {
        result[1] += 0.010723363;
      }
    }
  } else {
    if ( (data[13].missing != -1) && (data[13].fvalue < (float)1.2953075171)) {
      result[1] += -0.05527842;
    } else {
      result[1] += 0.007926044;
    }
  }
  if ( (data[3].missing != -1) && (data[3].fvalue < (float)-0.048415534198)) {
    if ( (data[6].missing != -1) && (data[6].fvalue < (float)-0.87955719233)) {
      if ( (data[7].missing != -1) && (data[7].fvalue < (float)-0.49739542603)) {
        if ( (data[13].missing != -1) && (data[13].fvalue < (float)-1.4167046547)) {
          result[2] += -0.025014265;
        } else {
          result[2] += -0.05523503;
        }
      } else {
        if ( (data[5].missing != -1) && (data[5].fvalue < (float)-0.31662553549)) {
          result[2] += -0.008540995;
        } else {
          result[2] += 0.053781163;
        }
      }
    } else {
      if ( (data[12].missing != -1) && (data[12].fvalue < (float)1.0508075953)) {
        if ( (data[10].missing != -1) && (data[10].fvalue < (float)-0.27807244658)) {
          if ( (data[16].missing != -1) && (data[16].fvalue < (float)0.039527323097)) {
            if ( (data[0].missing != -1) && (data[0].fvalue < (float)0.10080797225)) {
              result[2] += 0.07914012;
            } else {
              if ( (data[0].missing != -1) && (data[0].fvalue < (float)0.18346723914)) {
                result[2] += 0.02084468;
              } else {
                result[2] += 0.06963496;
              }
            }
          } else {
            if ( (data[5].missing != -1) && (data[5].fvalue < (float)-0.019165378064)) {
              result[2] += -0.015514195;
            } else {
              if ( (data[11].missing != -1) && (data[11].fvalue < (float)-0.18427316844)) {
                result[2] += 0.032225613;
              } else {
                result[2] += 0.0706728;
              }
            }
          }
        } else {
          if ( (data[1].missing != -1) && (data[1].fvalue < (float)-1.0453500748)) {
            result[2] += 0.0740578;
          } else {
            if ( (data[13].missing != -1) && (data[13].fvalue < (float)1.0878903866)) {
              if ( (data[7].missing != -1) && (data[7].fvalue < (float)-0.17488925159)) {
                result[2] += -0.0059460667;
              } else {
                result[2] += 0.057411093;
              }
            } else {
              if ( (data[6].missing != -1) && (data[6].fvalue < (float)0.70052707195)) {
                result[2] += -0.06359183;
              } else {
                result[2] += 0.01183946;
              }
            }
          }
        }
      } else {
        if ( (data[8].missing != -1) && (data[8].fvalue < (float)-0.1196475178)) {
          result[2] += 0.007218517;
        } else {
          result[2] += -0.055543642;
        }
      }
    }
  } else {
    if ( (data[5].missing != -1) && (data[5].fvalue < (float)0.05134915933)) {
      if ( (data[5].missing != -1) && (data[5].fvalue < (float)-0.24164952338)) {
        result[2] += -0.05487871;
      } else {
        if ( (data[10].missing != -1) && (data[10].fvalue < (float)0.26540723443)) {
          if ( (data[8].missing != -1) && (data[8].fvalue < (float)-0.10686820745)) {
            result[2] += 0.037185114;
          } else {
            result[2] += -0.043352235;
          }
        } else {
          result[2] += -0.057377744;
        }
      }
    } else {
      if ( (data[3].missing != -1) && (data[3].fvalue < (float)1.0523011684)) {
        if ( (data[13].missing != -1) && (data[13].fvalue < (float)1.0127772093)) {
          if ( (data[12].missing != -1) && (data[12].fvalue < (float)0.26557740569)) {
            if ( (data[13].missing != -1) && (data[13].fvalue < (float)0.22905167937)) {
              result[2] += 0.081360854;
            } else {
              result[2] += 0.040320277;
            }
          } else {
            result[2] += -0.03236113;
          }
        } else {
          result[2] += -0.027892733;
        }
      } else {
        result[2] += -0.058400493;
      }
    }
  }
  if ( (data[10].missing != -1) && (data[10].fvalue < (float)-0.083548948169)) {
    if ( (data[2].missing != -1) && (data[2].fvalue < (float)-1.0811297894)) {
      result[3] += 0.028537324;
    } else {
      if ( (data[8].missing != -1) && (data[8].fvalue < (float)0.011566273868)) {
        if ( (data[7].missing != -1) && (data[7].fvalue < (float)-1.260098815)) {
          result[3] += -0.00070511363;
        } else {
          if ( (data[10].missing != -1) && (data[10].fvalue < (float)-0.39829662442)) {
            result[3] += -0.0529914;
          } else {
            if ( (data[7].missing != -1) && (data[7].fvalue < (float)-0.27611738443)) {
              result[3] += 0.0007561883;
            } else {
              result[3] += -0.047265798;
            }
          }
        }
      } else {
        if ( (data[3].missing != -1) && (data[3].fvalue < (float)-0.17497244477)) {
          result[3] += 0.050262153;
        } else {
          if ( (data[11].missing != -1) && (data[11].fvalue < (float)0.13176590204)) {
            result[3] += -0.05213973;
          } else {
            result[3] += -0.00800205;
          }
        }
      }
    }
  } else {
    if ( (data[8].missing != -1) && (data[8].fvalue < (float)-0.21131891012)) {
      if ( (data[16].missing != -1) && (data[16].fvalue < (float)0.019390493631)) {
        if ( (data[5].missing != -1) && (data[5].fvalue < (float)-0.16507096589)) {
          result[3] += -0.055667307;
        } else {
          result[3] += -0.015547007;
        }
      } else {
        if ( (data[0].missing != -1) && (data[0].fvalue < (float)-1.2417032719)) {
          result[3] += 0.025476772;
        } else {
          result[3] += -0.052040625;
        }
      }
    } else {
      if ( (data[3].missing != -1) && (data[3].fvalue < (float)1.027759552)) {
        if ( (data[14].missing != -1) && (data[14].fvalue < (float)0.13486784697)) {
          if ( (data[5].missing != -1) && (data[5].fvalue < (float)0.47671183944)) {
            if ( (data[15].missing != -1) && (data[15].fvalue < (float)-0.27798226476)) {
              if ( (data[12].missing != -1) && (data[12].fvalue < (float)-0.70902597904)) {
                result[3] += 0.0522392;
              } else {
                result[3] += -0.024229778;
              }
            } else {
              result[3] += 0.08724276;
            }
          } else {
            result[3] += -0.025718896;
          }
        } else {
          if ( (data[5].missing != -1) && (data[5].fvalue < (float)-0.088755533099)) {
            if ( (data[10].missing != -1) && (data[10].fvalue < (float)0.14474117756)) {
              result[3] += -0.054703016;
            } else {
              result[3] += -0.029164886;
            }
          } else {
            if ( (data[6].missing != -1) && (data[6].fvalue < (float)0.32220888138)) {
              result[3] += 0.052212138;
            } else {
              result[3] += -0.038083572;
            }
          }
        }
      } else {
        if ( (data[6].missing != -1) && (data[6].fvalue < (float)-0.52184551954)) {
          if ( (data[13].missing != -1) && (data[13].fvalue < (float)0.30374440551)) {
            result[3] += 0.083728425;
          } else {
            result[3] += 0.039583564;
          }
        } else {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)1.4404942989)) {
            result[3] += 0.008986288;
          } else {
            result[3] += 0.061112206;
          }
        }
      }
    }
  }
  if ( (data[9].missing != -1) && (data[9].fvalue < (float)-0.25189942122)) {
    if ( (data[6].missing != -1) && (data[6].fvalue < (float)-0.77784711123)) {
      if ( (data[5].missing != -1) && (data[5].fvalue < (float)-0.41432738304)) {
        result[0] += 0.047842894;
      } else {
        result[0] += -0.024954291;
      }
    } else {
      if ( (data[8].missing != -1) && (data[8].fvalue < (float)-0.20142486691)) {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)-0.40411242843)) {
          result[0] += -0.056863617;
        } else {
          result[0] += -0.033061676;
        }
      } else {
        if ( (data[10].missing != -1) && (data[10].fvalue < (float)0.53875249624)) {
          result[0] += -0.049531735;
        } else {
          result[0] += 0.0040886267;
        }
      }
    }
  } else {
    if ( (data[5].missing != -1) && (data[5].fvalue < (float)-0.35539877415)) {
      if ( (data[3].missing != -1) && (data[3].fvalue < (float)-1.1069164276)) {
        result[0] += -0.04353223;
      } else {
        if ( (data[11].missing != -1) && (data[11].fvalue < (float)-0.22255906463)) {
          result[0] += 0.08253288;
        } else {
          if ( (data[7].missing != -1) && (data[7].fvalue < (float)0.057101707906)) {
            if ( (data[1].missing != -1) && (data[1].fvalue < (float)0.13584434986)) {
              result[0] += 0.07399761;
            } else {
              if ( (data[3].missing != -1) && (data[3].fvalue < (float)-0.17497244477)) {
                result[0] += -0.0052759806;
              } else {
                result[0] += 0.05494484;
              }
            }
          } else {
            result[0] += -0.0044785617;
          }
        }
      }
    } else {
      if ( (data[0].missing != -1) && (data[0].fvalue < (float)0.50772362947)) {
        if ( (data[5].missing != -1) && (data[5].fvalue < (float)-0.18760381639)) {
          if ( (data[5].missing != -1) && (data[5].fvalue < (float)-0.25515717268)) {
            if ( (data[5].missing != -1) && (data[5].fvalue < (float)-0.30477491021)) {
              result[0] += 0.019350613;
            } else {
              result[0] += -0.030932803;
            }
          } else {
            result[0] += 0.037403625;
          }
        } else {
          if ( (data[13].missing != -1) && (data[13].fvalue < (float)1.0127772093)) {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)-0.89701044559)) {
              result[0] += -0.018996755;
            } else {
              result[0] += -0.053637233;
            }
          } else {
            result[0] += 0.011948712;
          }
        }
      } else {
        if ( (data[5].missing != -1) && (data[5].fvalue < (float)0.07551728934)) {
          if ( (data[16].missing != -1) && (data[16].fvalue < (float)0.0023125449661)) {
            if ( (data[7].missing != -1) && (data[7].fvalue < (float)-0.84092009068)) {
              result[0] += 0.03419466;
            } else {
              result[0] += -0.047377065;
            }
          } else {
            if ( (data[6].missing != -1) && (data[6].fvalue < (float)-0.7999060154)) {
              result[0] += -0.0031025305;
            } else {
              result[0] += 0.08141517;
            }
          }
        } else {
          if ( (data[6].missing != -1) && (data[6].fvalue < (float)0.902148664)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)1.3016400337)) {
              result[0] += -0.051481623;
            } else {
              result[0] += -0.0009453146;
            }
          } else {
            if ( (data[5].missing != -1) && (data[5].fvalue < (float)1.500685215)) {
              result[0] += 0.071697004;
            } else {
              result[0] += 0.0017238948;
            }
          }
        }
      }
    }
  }
  if ( (data[0].missing != -1) && (data[0].fvalue < (float)-0.80280572176)) {
    if ( (data[8].missing != -1) && (data[8].fvalue < (float)-0.21625265479)) {
      if ( (data[10].missing != -1) && (data[10].fvalue < (float)0.19718895853)) {
        result[1] += 0.024677655;
      } else {
        if ( (data[0].missing != -1) && (data[0].fvalue < (float)-1.4190087318)) {
          result[1] += 0.077014975;
        } else {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)0.29908499122)) {
            result[1] += 0.07805934;
          } else {
            result[1] += 0.028569708;
          }
        }
      }
    } else {
      if ( (data[5].missing != -1) && (data[5].fvalue < (float)0.37600171566)) {
        if ( (data[16].missing != -1) && (data[16].fvalue < (float)0.003763372777)) {
          result[1] += 0.03916968;
        } else {
          if ( (data[11].missing != -1) && (data[11].fvalue < (float)-0.24807538092)) {
            result[1] += -0.062275786;
          } else {
            result[1] += -0.012693174;
          }
        }
      } else {
        result[1] += 0.04739419;
      }
    }
  } else {
    if ( (data[13].missing != -1) && (data[13].fvalue < (float)1.2225931883)) {
      if ( (data[8].missing != -1) && (data[8].fvalue < (float)1.3224829435)) {
        result[1] += -0.054449435;
      } else {
        result[1] += -0.031514566;
      }
    } else {
      if ( (data[8].missing != -1) && (data[8].fvalue < (float)-0.20142486691)) {
        result[1] += 0.045860533;
      } else {
        result[1] += -0.037203427;
      }
    }
  }
  if ( (data[3].missing != -1) && (data[3].fvalue < (float)0.046019136906)) {
    if ( (data[6].missing != -1) && (data[6].fvalue < (float)-0.71604603529)) {
      if ( (data[3].missing != -1) && (data[3].fvalue < (float)-1.117757678)) {
        result[2] += 0.077534;
      } else {
        if ( (data[5].missing != -1) && (data[5].fvalue < (float)-0.30345416069)) {
          if ( (data[0].missing != -1) && (data[0].fvalue < (float)0.20606780052)) {
            result[2] += -0.008393;
          } else {
            result[2] += -0.052651055;
          }
        } else {
          result[2] += 0.02510321;
        }
      }
    } else {
      if ( (data[12].missing != -1) && (data[12].fvalue < (float)0.99250650406)) {
        if ( (data[10].missing != -1) && (data[10].fvalue < (float)-0.32952460647)) {
          if ( (data[16].missing != -1) && (data[16].fvalue < (float)0.040303114802)) {
            if ( (data[16].missing != -1) && (data[16].fvalue < (float)-0.018879529089)) {
              if ( (data[10].missing != -1) && (data[10].fvalue < (float)-0.940084517)) {
                result[2] += 0.06409088;
              } else {
                result[2] += 0.0021547386;
              }
            } else {
              if ( (data[6].missing != -1) && (data[6].fvalue < (float)1.1975353956)) {
                result[2] += 0.07266866;
              } else {
                result[2] += 0.035669696;
              }
            }
          } else {
            if ( (data[6].missing != -1) && (data[6].fvalue < (float)0.82943028212)) {
              result[2] += 0.00063659827;
            } else {
              result[2] += 0.06423949;
            }
          }
        } else {
          if ( (data[12].missing != -1) && (data[12].fvalue < (float)0.04880091548)) {
            if ( (data[11].missing != -1) && (data[11].fvalue < (float)-0.26094642282)) {
              result[2] += -0.017726278;
            } else {
              if ( (data[16].missing != -1) && (data[16].fvalue < (float)0.01313174516)) {
                result[2] += 0.015721885;
              } else {
                result[2] += 0.0666988;
              }
            }
          } else {
            result[2] += -0.018246636;
          }
        }
      } else {
        if ( (data[8].missing != -1) && (data[8].fvalue < (float)-0.12956127524)) {
          result[2] += 0.017057775;
        } else {
          result[2] += -0.05008163;
        }
      }
    }
  } else {
    if ( (data[5].missing != -1) && (data[5].fvalue < (float)2.770565033)) {
      if ( (data[5].missing != -1) && (data[5].fvalue < (float)-0.14828489721)) {
        if ( (data[0].missing != -1) && (data[0].fvalue < (float)-1.8228155375)) {
          result[2] += -0.01592691;
        } else {
          result[2] += -0.056616325;
        }
      } else {
        if ( (data[3].missing != -1) && (data[3].fvalue < (float)0.35766488314)) {
          if ( (data[10].missing != -1) && (data[10].fvalue < (float)0.018758390099)) {
            result[2] += 0.04043534;
          } else {
            result[2] += -0.012492997;
          }
        } else {
          if ( (data[10].missing != -1) && (data[10].fvalue < (float)0.79747533798)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)0.57206761837)) {
              result[2] += 0.012150196;
            } else {
              result[2] += -0.05555415;
            }
          } else {
            result[2] += -0.05671993;
          }
        }
      }
    } else {
      if ( (data[3].missing != -1) && (data[3].fvalue < (float)1.0523011684)) {
        result[2] += 0.0649259;
      } else {
        result[2] += -0.02297514;
      }
    }
  }
  if ( (data[3].missing != -1) && (data[3].fvalue < (float)0.22197172046)) {
    if ( (data[8].missing != -1) && (data[8].fvalue < (float)0.011566273868)) {
      if ( (data[10].missing != -1) && (data[10].fvalue < (float)-0.40548467636)) {
        if ( (data[7].missing != -1) && (data[7].fvalue < (float)-1.2111908197)) {
          result[3] += 0.0004496076;
        } else {
          if ( (data[16].missing != -1) && (data[16].fvalue < (float)0.063959240913)) {
            result[3] += -0.054762185;
          } else {
            result[3] += -0.022773517;
          }
        }
      } else {
        if ( (data[8].missing != -1) && (data[8].fvalue < (float)-0.21293455362)) {
          result[3] += -0.053647112;
        } else {
          if ( (data[13].missing != -1) && (data[13].fvalue < (float)0.68191283941)) {
            if ( (data[5].missing != -1) && (data[5].fvalue < (float)-0.24522577226)) {
              if ( (data[5].missing != -1) && (data[5].fvalue < (float)-0.45687660575)) {
                result[3] += -0.050027948;
              } else {
                result[3] += 0.051822312;
              }
            } else {
              result[3] += -0.04939018;
            }
          } else {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)-0.37257739902)) {
              result[3] += -0.0037516446;
            } else {
              result[3] += 0.07091153;
            }
          }
        }
      }
    } else {
      if ( (data[3].missing != -1) && (data[3].fvalue < (float)-0.45875871181)) {
        result[3] += 0.0803359;
      } else {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)0.8564171195)) {
          result[3] += -0.04012404;
        } else {
          result[3] += 0.009737183;
        }
      }
    }
  } else {
    if ( (data[8].missing != -1) && (data[8].fvalue < (float)-0.20999103785)) {
      if ( (data[0].missing != -1) && (data[0].fvalue < (float)-1.4190087318)) {
        if ( (data[3].missing != -1) && (data[3].fvalue < (float)1.6910718679)) {
          result[3] += -0.054378726;
        } else {
          result[3] += -0.011637972;
        }
      } else {
        if ( (data[11].missing != -1) && (data[11].fvalue < (float)-0.24950000644)) {
          result[3] += 0.033614196;
        } else {
          result[3] += -0.050469797;
        }
      }
    } else {
      if ( (data[5].missing != -1) && (data[5].fvalue < (float)-0.43748578429)) {
        if ( (data[3].missing != -1) && (data[3].fvalue < (float)0.87052029371)) {
          result[3] += -0.048966445;
        } else {
          result[3] += 0.016273793;
        }
      } else {
        if ( (data[6].missing != -1) && (data[6].fvalue < (float)-0.44656607509)) {
          if ( (data[2].missing != -1) && (data[2].fvalue < (float)0.023060614243)) {
            result[3] += 0.10327031;
          } else {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)1.1138499975)) {
              if ( (data[11].missing != -1) && (data[11].fvalue < (float)0.12085646391)) {
                result[3] += 0.07431088;
              } else {
                result[3] += -0.026820773;
              }
            } else {
              result[3] += 0.07644468;
            }
          }
        } else {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)0.29513585567)) {
            if ( (data[13].missing != -1) && (data[13].fvalue < (float)0.80325615406)) {
              result[3] += 0.067917906;
            } else {
              result[3] += 0.006534061;
            }
          } else {
            if ( (data[10].missing != -1) && (data[10].fvalue < (float)0.57694214582)) {
              if ( (data[10].missing != -1) && (data[10].fvalue < (float)0.09049295634)) {
                result[3] += -0.022993496;
              } else {
                result[3] += -0.054756697;
              }
            } else {
              result[3] += 0.02532417;
            }
          }
        }
      }
    }
  }
  if ( (data[9].missing != -1) && (data[9].fvalue < (float)-0.18324759603)) {
    if ( (data[6].missing != -1) && (data[6].fvalue < (float)-0.77784711123)) {
      if ( (data[6].missing != -1) && (data[6].fvalue < (float)-1.0408135653)) {
        result[0] += -0.03775051;
      } else {
        result[0] += 0.048839737;
      }
    } else {
      if ( (data[16].missing != -1) && (data[16].fvalue < (float)0.063959240913)) {
        if ( (data[8].missing != -1) && (data[8].fvalue < (float)-0.20639407635)) {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)-0.35524612665)) {
            result[0] += -0.056019384;
          } else {
            result[0] += -0.032189276;
          }
        } else {
          if ( (data[8].missing != -1) && (data[8].fvalue < (float)-0.19492897391)) {
            result[0] += -0.0059460043;
          } else {
            result[0] += -0.054492373;
          }
        }
      } else {
        result[0] += -0.0029645776;
      }
    }
  } else {
    if ( (data[5].missing != -1) && (data[5].fvalue < (float)-0.34637346864)) {
      if ( (data[3].missing != -1) && (data[3].fvalue < (float)-1.0847979784)) {
        result[0] += -0.026471714;
      } else {
        if ( (data[3].missing != -1) && (data[3].fvalue < (float)0.86093568802)) {
          if ( (data[14].missing != -1) && (data[14].fvalue < (float)-0.032462161034)) {
            if ( (data[16].missing != -1) && (data[16].fvalue < (float)0.0057717883028)) {
              result[0] += 0.007559508;
            } else {
              result[0] += 0.043251485;
            }
          } else {
            if ( (data[10].missing != -1) && (data[10].fvalue < (float)-1.0384379625)) {
              result[0] += 0.030048711;
            } else {
              if ( (data[4].missing != -1) && (data[4].fvalue < (float)-0.5074865222)) {
                result[0] += 0.038188595;
              } else {
                result[0] += 0.07260733;
              }
            }
          }
        } else {
          if ( (data[16].missing != -1) && (data[16].fvalue < (float)-0.018707942218)) {
            result[0] += 0.042059816;
          } else {
            result[0] += -0.02600927;
          }
        }
      }
    } else {
      if ( (data[0].missing != -1) && (data[0].fvalue < (float)0.50772362947)) {
        if ( (data[13].missing != -1) && (data[13].fvalue < (float)0.86167395115)) {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)-0.76787650585)) {
            result[0] += -0.00428866;
          } else {
            result[0] += -0.05377681;
          }
        } else {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)0.93932986259)) {
            result[0] += 0.043835886;
          } else {
            result[0] += -0.04122093;
          }
        }
      } else {
        if ( (data[7].missing != -1) && (data[7].fvalue < (float)-1.4372395277)) {
          result[0] += -0.036833744;
        } else {
          if ( (data[15].missing != -1) && (data[15].fvalue < (float)1.0522749424)) {
            if ( (data[5].missing != -1) && (data[5].fvalue < (float)0.07551728934)) {
              if ( (data[14].missing != -1) && (data[14].fvalue < (float)0.77326214314)) {
                result[0] += 0.017511874;
              } else {
                result[0] += 0.07513698;
              }
            } else {
              if ( (data[12].missing != -1) && (data[12].fvalue < (float)-0.027997098863)) {
                result[0] += 0.03586713;
              } else {
                result[0] += -0.028756535;
              }
            }
          } else {
            result[0] += 0.08266763;
          }
        }
      }
    }
  }
  if ( (data[0].missing != -1) && (data[0].fvalue < (float)-1.0674057007)) {
    if ( (data[8].missing != -1) && (data[8].fvalue < (float)-0.21625265479)) {
      if ( (data[7].missing != -1) && (data[7].fvalue < (float)1.9876180887)) {
        if ( (data[13].missing != -1) && (data[13].fvalue < (float)0.97630155087)) {
          if ( (data[14].missing != -1) && (data[14].fvalue < (float)-1.3453755379)) {
            result[1] += 0.07126664;
          } else {
            result[1] += 0.013826193;
          }
        } else {
          result[1] += 0.07409229;
        }
      } else {
        result[1] += 0.0017803073;
      }
    } else {
      if ( (data[5].missing != -1) && (data[5].fvalue < (float)-0.33815327287)) {
        result[1] += -0.038761515;
      } else {
        if ( (data[3].missing != -1) && (data[3].fvalue < (float)1.1823512316)) {
          result[1] += 0.06220583;
        } else {
          result[1] += -0.009807672;
        }
      }
    }
  } else {
    if ( (data[13].missing != -1) && (data[13].fvalue < (float)1.1479464769)) {
      if ( (data[14].missing != -1) && (data[14].fvalue < (float)-0.60067504644)) {
        result[1] += -0.034829035;
      } else {
        if ( (data[8].missing != -1) && (data[8].fvalue < (float)-0.21892316639)) {
          result[1] += -0.030152632;
        } else {
          if ( (data[11].missing != -1) && (data[11].fvalue < (float)-0.26988664269)) {
            result[1] += -0.03115466;
          } else {
            if ( (data[8].missing != -1) && (data[8].fvalue < (float)1.3224829435)) {
              result[1] += -0.05505393;
            } else {
              result[1] += -0.031705663;
            }
          }
        }
      }
    } else {
      if ( (data[13].missing != -1) && (data[13].fvalue < (float)1.9114689827)) {
        if ( (data[16].missing != -1) && (data[16].fvalue < (float)0.050249256194)) {
          result[1] += -0.00036755504;
        } else {
          result[1] += 0.060269613;
        }
      } else {
        result[1] += -0.042094465;
      }
    }
  }
  if ( (data[3].missing != -1) && (data[3].fvalue < (float)0.015094771981)) {
    if ( (data[7].missing != -1) && (data[7].fvalue < (float)-0.63134747744)) {
      if ( (data[5].missing != -1) && (data[5].fvalue < (float)0.05134915933)) {
        if ( (data[3].missing != -1) && (data[3].fvalue < (float)-1.2579658031)) {
          result[2] += 0.049664386;
        } else {
          if ( (data[12].missing != -1) && (data[12].fvalue < (float)0.98061102629)) {
            if ( (data[7].missing != -1) && (data[7].fvalue < (float)-0.76535511017)) {
              result[2] += 0.0010653498;
            } else {
              result[2] += -0.054399252;
            }
          } else {
            result[2] += -0.05905954;
          }
        }
      } else {
        if ( (data[6].missing != -1) && (data[6].fvalue < (float)0.85807436705)) {
          result[2] += 0.05992954;
        } else {
          result[2] += 0.011681748;
        }
      }
    } else {
      if ( (data[10].missing != -1) && (data[10].fvalue < (float)-0.40548467636)) {
        if ( (data[6].missing != -1) && (data[6].fvalue < (float)-0.71604603529)) {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)-0.94150280952)) {
            result[2] += 0.07181028;
          } else {
            result[2] += -0.023946194;
          }
        } else {
          if ( (data[11].missing != -1) && (data[11].fvalue < (float)-0.22117689252)) {
            if ( (data[8].missing != -1) && (data[8].fvalue < (float)-0.18555359542)) {
              if ( (data[0].missing != -1) && (data[0].fvalue < (float)0.40298116207)) {
                result[2] += 0.06599137;
              } else {
                result[2] += 0.021805167;
              }
            } else {
              result[2] += -0.0222783;
            }
          } else {
            result[2] += 0.074586354;
          }
        }
      } else {
        if ( (data[7].missing != -1) && (data[7].fvalue < (float)-0.33559387922)) {
          result[2] += -0.07280467;
        } else {
          if ( (data[13].missing != -1) && (data[13].fvalue < (float)1.0310770273)) {
            if ( (data[8].missing != -1) && (data[8].fvalue < (float)-0.19521571696)) {
              result[2] += 0.07585682;
            } else {
              if ( (data[5].missing != -1) && (data[5].fvalue < (float)-0.14628712833)) {
                result[2] += -0.020656139;
              } else {
                result[2] += 0.05401953;
              }
            }
          } else {
            if ( (data[12].missing != -1) && (data[12].fvalue < (float)-0.34677696228)) {
              if ( (data[8].missing != -1) && (data[8].fvalue < (float)-0.21338579059)) {
                result[2] += -0.012512125;
              } else {
                result[2] += 0.08435122;
              }
            } else {
              result[2] += -0.032646295;
            }
          }
        }
      }
    }
  } else {
    if ( (data[6].missing != -1) && (data[6].fvalue < (float)1.3929610252)) {
      if ( (data[3].missing != -1) && (data[3].fvalue < (float)0.19738391042)) {
        if ( (data[5].missing != -1) && (data[5].fvalue < (float)-0.15271317959)) {
          result[2] += -0.046417978;
        } else {
          result[2] += 0.038118564;
        }
      } else {
        if ( (data[11].missing != -1) && (data[11].fvalue < (float)-0.27436363697)) {
          result[2] += -0.015695734;
        } else {
          if ( (data[5].missing != -1) && (data[5].fvalue < (float)-0.21864587069)) {
            result[2] += -0.05472226;
          } else {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)1.0147672892)) {
              if ( (data[13].missing != -1) && (data[13].fvalue < (float)0.61577022076)) {
                result[2] += -0.0019794665;
              } else {
                result[2] += -0.047252763;
              }
            } else {
              result[2] += -0.055399068;
            }
          }
        }
      }
    } else {
      if ( (data[0].missing != -1) && (data[0].fvalue < (float)-0.88791364431)) {
        result[2] += -0.038366526;
      } else {
        if ( (data[3].missing != -1) && (data[3].fvalue < (float)0.61244803667)) {
          result[2] += 0.06692504;
        } else {
          result[2] += 0.0016058631;
        }
      }
    }
  }
  if ( (data[10].missing != -1) && (data[10].fvalue < (float)-0.40548467636)) {
    if ( (data[8].missing != -1) && (data[8].fvalue < (float)-0.12956127524)) {
      result[3] += -0.05233845;
    } else {
      if ( (data[3].missing != -1) && (data[3].fvalue < (float)-0.84289908409)) {
        result[3] += 0.067807764;
      } else {
        if ( (data[11].missing != -1) && (data[11].fvalue < (float)-0.061941049993)) {
          result[3] += -0.047120523;
        } else {
          result[3] += 0.019494765;
        }
      }
    }
  } else {
    if ( (data[8].missing != -1) && (data[8].fvalue < (float)-0.21131891012)) {
      if ( (data[6].missing != -1) && (data[6].fvalue < (float)-0.40938580036)) {
        result[3] += 0.0064747343;
      } else {
        if ( (data[8].missing != -1) && (data[8].fvalue < (float)-0.21470879018)) {
          result[3] += -0.050018437;
        } else {
          result[3] += -0.020919986;
        }
      }
    } else {
      if ( (data[5].missing != -1) && (data[5].fvalue < (float)-0.47590339184)) {
        if ( (data[3].missing != -1) && (data[3].fvalue < (float)0.86093568802)) {
          result[3] += -0.04995469;
        } else {
          result[3] += 0.0063958983;
        }
      } else {
        if ( (data[10].missing != -1) && (data[10].fvalue < (float)0.79747533798)) {
          if ( (data[2].missing != -1) && (data[2].fvalue < (float)-0.27207258344)) {
            result[3] += 0.07555553;
          } else {
            if ( (data[11].missing != -1) && (data[11].fvalue < (float)-0.22117689252)) {
              if ( (data[9].missing != -1) && (data[9].fvalue < (float)-0.82454138994)) {
                result[3] += 0.091041274;
              } else {
                result[3] += 0.009869271;
              }
            } else {
              if ( (data[12].missing != -1) && (data[12].fvalue < (float)0.98061102629)) {
                result[3] += -0.018380629;
              } else {
                result[3] += 0.06731225;
              }
            }
          }
        } else {
          if ( (data[13].missing != -1) && (data[13].fvalue < (float)0.94390970469)) {
            result[3] += 0.07258102;
          } else {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)-0.51682901382)) {
              result[3] += 0.045427;
            } else {
              result[3] += -0.024964424;
            }
          }
        }
      }
    }
  }
  if ( (data[9].missing != -1) && (data[9].fvalue < (float)-0.25189942122)) {
    if ( (data[5].missing != -1) && (data[5].fvalue < (float)-0.41925215721)) {
      if ( (data[10].missing != -1) && (data[10].fvalue < (float)-0.0013583783293)) {
        if ( (data[7].missing != -1) && (data[7].fvalue < (float)-0.30446729064)) {
          result[0] += -0.019271659;
        } else {
          result[0] += -0.05340746;
        }
      } else {
        result[0] += 0.03501485;
      }
    } else {
      if ( (data[11].missing != -1) && (data[11].fvalue < (float)-0.15698228776)) {
        if ( (data[1].missing != -1) && (data[1].fvalue < (float)-2.3883194923)) {
          result[0] += -0.017696617;
        } else {
          if ( (data[6].missing != -1) && (data[6].fvalue < (float)1.326390624)) {
            result[0] += -0.054454993;
          } else {
            result[0] += -0.029811207;
          }
        }
      } else {
        result[0] += -0.012537601;
      }
    }
  } else {
    if ( (data[5].missing != -1) && (data[5].fvalue < (float)-0.35539877415)) {
      if ( (data[3].missing != -1) && (data[3].fvalue < (float)-1.1069164276)) {
        result[0] += -0.056051057;
      } else {
        if ( (data[11].missing != -1) && (data[11].fvalue < (float)-0.17039236426)) {
          if ( (data[10].missing != -1) && (data[10].fvalue < (float)-1.0384379625)) {
            result[0] += 0.04633007;
          } else {
            result[0] += 0.07274493;
          }
        } else {
          if ( (data[12].missing != -1) && (data[12].fvalue < (float)0.91569340229)) {
            if ( (data[7].missing != -1) && (data[7].fvalue < (float)-0.27611738443)) {
              if ( (data[11].missing != -1) && (data[11].fvalue < (float)-0.11609908938)) {
                result[0] += 0.028557999;
              } else {
                result[0] += 0.07558042;
              }
            } else {
              result[0] += -0.009551419;
            }
          } else {
            if ( (data[12].missing != -1) && (data[12].fvalue < (float)1.4924834967)) {
              result[0] += -0.05239876;
            } else {
              result[0] += 0.026693657;
            }
          }
        }
      }
    } else {
      if ( (data[9].missing != -1) && (data[9].fvalue < (float)0.57206761837)) {
        if ( (data[7].missing != -1) && (data[7].fvalue < (float)-0.74306476116)) {
          result[0] += 0.029737527;
        } else {
          if ( (data[12].missing != -1) && (data[12].fvalue < (float)-1.2861771584)) {
            result[0] += 0.026346374;
          } else {
            if ( (data[6].missing != -1) && (data[6].fvalue < (float)-0.4936747849)) {
              result[0] += 0.0041376413;
            } else {
              if ( (data[8].missing != -1) && (data[8].fvalue < (float)-0.20835191011)) {
                result[0] += -0.0064491653;
              } else {
                result[0] += -0.051543545;
              }
            }
          }
        }
      } else {
        if ( (data[7].missing != -1) && (data[7].fvalue < (float)-1.4372395277)) {
          if ( (data[8].missing != -1) && (data[8].fvalue < (float)0.65596228838)) {
            result[0] += -0.009836008;
          } else {
            result[0] += -0.038672842;
          }
        } else {
          if ( (data[8].missing != -1) && (data[8].fvalue < (float)-0.1669395268)) {
            if ( (data[8].missing != -1) && (data[8].fvalue < (float)-0.20631541312)) {
              result[0] += 0.012666202;
            } else {
              result[0] += -0.03593542;
            }
          } else {
            if ( (data[16].missing != -1) && (data[16].fvalue < (float)0.029432564974)) {
              if ( (data[5].missing != -1) && (data[5].fvalue < (float)0.07551728934)) {
                result[0] += 0.05218726;
              } else {
                result[0] += -0.01616063;
              }
            } else {
              if ( (data[16].missing != -1) && (data[16].fvalue < (float)0.044379305094)) {
                result[0] += 0.08591786;
              } else {
                result[0] += 0.045310218;
              }
            }
          }
        }
      }
    }
  }
  if ( (data[0].missing != -1) && (data[0].fvalue < (float)-0.80280572176)) {
    if ( (data[8].missing != -1) && (data[8].fvalue < (float)-0.21625265479)) {
      if ( (data[14].missing != -1) && (data[14].fvalue < (float)-2.5253870487)) {
        result[1] += 0.003924468;
      } else {
        if ( (data[10].missing != -1) && (data[10].fvalue < (float)2.0270805359)) {
          if ( (data[13].missing != -1) && (data[13].fvalue < (float)0.48812502623)) {
            result[1] += 0.03645142;
          } else {
            result[1] += 0.071280524;
          }
        } else {
          result[1] += 0.04214024;
        }
      }
    } else {
      if ( (data[11].missing != -1) && (data[11].fvalue < (float)-0.25399804115)) {
        result[1] += -0.035751313;
      } else {
        if ( (data[16].missing != -1) && (data[16].fvalue < (float)0.025671081617)) {
          result[1] += 0.04823145;
        } else {
          result[1] += -0.007202009;
        }
      }
    }
  } else {
    if ( (data[13].missing != -1) && (data[13].fvalue < (float)1.2225931883)) {
      if ( (data[8].missing != -1) && (data[8].fvalue < (float)-0.21892316639)) {
        result[1] += -0.03004325;
      } else {
        if ( (data[11].missing != -1) && (data[11].fvalue < (float)-0.27011045814)) {
          result[1] += -0.030784545;
        } else {
          if ( (data[8].missing != -1) && (data[8].fvalue < (float)0.9665927887)) {
            result[1] += -0.054608103;
          } else {
            result[1] += -0.032294434;
          }
        }
      }
    } else {
      if ( (data[5].missing != -1) && (data[5].fvalue < (float)1.1080287695)) {
        result[1] += -0.005695985;
      } else {
        result[1] += 0.021508316;
      }
    }
  }
  if ( (data[3].missing != -1) && (data[3].fvalue < (float)0.19738391042)) {
    if ( (data[7].missing != -1) && (data[7].fvalue < (float)-0.71226298809)) {
      if ( (data[10].missing != -1) && (data[10].fvalue < (float)-0.7706798315)) {
        if ( (data[12].missing != -1) && (data[12].fvalue < (float)1.0508075953)) {
          if ( (data[13].missing != -1) && (data[13].fvalue < (float)-1.2608052492)) {
            result[2] += 0.08673024;
          } else {
            result[2] += 0.008919322;
          }
        } else {
          if ( (data[11].missing != -1) && (data[11].fvalue < (float)-0.21822673082)) {
            result[2] += -0.048049882;
          } else {
            result[2] += 0.004471333;
          }
        }
      } else {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)0.84752988815)) {
          result[2] += -0.013555248;
        } else {
          result[2] += -0.0576931;
        }
      }
    } else {
      if ( (data[6].missing != -1) && (data[6].fvalue < (float)-0.70061522722)) {
        if ( (data[5].missing != -1) && (data[5].fvalue < (float)-0.16096504033)) {
          if ( (data[8].missing != -1) && (data[8].fvalue < (float)-0.17387378216)) {
            if ( (data[0].missing != -1) && (data[0].fvalue < (float)0.10887497663)) {
              result[2] += 0.04845154;
            } else {
              result[2] += -0.01541566;
            }
          } else {
            result[2] += -0.048991974;
          }
        } else {
          result[2] += 0.06522722;
        }
      } else {
        if ( (data[0].missing != -1) && (data[0].fvalue < (float)-0.55165636539)) {
          if ( (data[10].missing != -1) && (data[10].fvalue < (float)0.79747533798)) {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)-0.41539546847)) {
              result[2] += 0.020957453;
            } else {
              result[2] += -0.03901094;
            }
          } else {
            result[2] += 0.033933353;
          }
        } else {
          if ( (data[5].missing != -1) && (data[5].fvalue < (float)-0.5739902854)) {
            result[2] += 0.0014438836;
          } else {
            if ( (data[16].missing != -1) && (data[16].fvalue < (float)0.069090053439)) {
              if ( (data[2].missing != -1) && (data[2].fvalue < (float)0.1194704473)) {
                result[2] += 0.037800696;
              } else {
                result[2] += 0.06419977;
              }
            } else {
              result[2] += 0.025534922;
            }
          }
        }
      }
    }
  } else {
    if ( (data[5].missing != -1) && (data[5].fvalue < (float)2.4669363499)) {
      if ( (data[3].missing != -1) && (data[3].fvalue < (float)0.35766488314)) {
        if ( (data[5].missing != -1) && (data[5].fvalue < (float)-0.18760381639)) {
          result[2] += -0.051537193;
        } else {
          result[2] += 0.013652327;
        }
      } else {
        if ( (data[11].missing != -1) && (data[11].fvalue < (float)-0.27381569147)) {
          result[2] += -0.0153836;
        } else {
          if ( (data[12].missing != -1) && (data[12].fvalue < (float)-0.89306592941)) {
            if ( (data[13].missing != -1) && (data[13].fvalue < (float)0.61577022076)) {
              result[2] += -0.015641509;
            } else {
              result[2] += -0.05275297;
            }
          } else {
            result[2] += -0.056675773;
          }
        }
      }
    } else {
      result[2] += 0.017234957;
    }
  }
  if ( (data[10].missing != -1) && (data[10].fvalue < (float)-0.40548467636)) {
    if ( (data[8].missing != -1) && (data[8].fvalue < (float)0.12072786689)) {
      if ( (data[12].missing != -1) && (data[12].fvalue < (float)1.0508075953)) {
        result[3] += -0.053446926;
      } else {
        if ( (data[11].missing != -1) && (data[11].fvalue < (float)-0.2367080003)) {
          result[3] += -0.050557908;
        } else {
          result[3] += 0.020819958;
        }
      }
    } else {
      result[3] += 0.030984074;
    }
  } else {
    if ( (data[8].missing != -1) && (data[8].fvalue < (float)-0.21131891012)) {
      if ( (data[2].missing != -1) && (data[2].fvalue < (float)0.16981489956)) {
        if ( (data[11].missing != -1) && (data[11].fvalue < (float)-0.25700798631)) {
          result[3] += 0.026784396;
        } else {
          result[3] += -0.03454481;
        }
      } else {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)-0.61510449648)) {
          if ( (data[13].missing != -1) && (data[13].fvalue < (float)1.6390570402)) {
            result[3] += -0.053977467;
          } else {
            result[3] += -0.030935287;
          }
        } else {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)0.93932986259)) {
            result[3] += -0.049880575;
          } else {
            result[3] += -0.0055832923;
          }
        }
      }
    } else {
      if ( (data[10].missing != -1) && (data[10].fvalue < (float)0.41789460182)) {
        if ( (data[2].missing != -1) && (data[2].fvalue < (float)-0.093078397214)) {
          if ( (data[6].missing != -1) && (data[6].fvalue < (float)-0.091145552695)) {
            result[3] += 0.07252781;
          } else {
            result[3] += -0.005194991;
          }
        } else {
          if ( (data[0].missing != -1) && (data[0].fvalue < (float)0.12998342514)) {
            if ( (data[5].missing != -1) && (data[5].fvalue < (float)-0.18760381639)) {
              if ( (data[16].missing != -1) && (data[16].fvalue < (float)0.021745100617)) {
                result[3] += 0.049001228;
              } else {
                result[3] += -0.0038343377;
              }
            } else {
              result[3] += -0.02251075;
            }
          } else {
            if ( (data[16].missing != -1) && (data[16].fvalue < (float)0.0526355654)) {
              if ( (data[3].missing != -1) && (data[3].fvalue < (float)-0.12851008773)) {
                result[3] += 0.00030939264;
              } else {
                result[3] += -0.04698551;
              }
            } else {
              result[3] += 0.013191484;
            }
          }
        }
      } else {
        if ( (data[6].missing != -1) && (data[6].fvalue < (float)1.0815649033)) {
          if ( (data[5].missing != -1) && (data[5].fvalue < (float)-0.14007590711)) {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)0.66696953773)) {
              result[3] += -0.012448046;
            } else {
              if ( (data[13].missing != -1) && (data[13].fvalue < (float)0.31720897555)) {
                result[3] += 0.063296095;
              } else {
                result[3] += 0.019976232;
              }
            }
          } else {
            if ( (data[7].missing != -1) && (data[7].fvalue < (float)0.42412701249)) {
              if ( (data[0].missing != -1) && (data[0].fvalue < (float)1.2524466515)) {
                result[3] += 0.097275846;
              } else {
                result[3] += 0.047264006;
              }
            } else {
              result[3] += 0.037683886;
            }
          }
        } else {
          result[3] += -0.009492924;
        }
      }
    }
  }
  if ( (data[9].missing != -1) && (data[9].fvalue < (float)-0.18324759603)) {
    if ( (data[6].missing != -1) && (data[6].fvalue < (float)-0.77784711123)) {
      if ( (data[6].missing != -1) && (data[6].fvalue < (float)-1.0408135653)) {
        result[0] += -0.023010591;
      } else {
        result[0] += 0.030613312;
      }
    } else {
      if ( (data[16].missing != -1) && (data[16].fvalue < (float)0.063959240913)) {
        if ( (data[5].missing != -1) && (data[5].fvalue < (float)0.47671183944)) {
          if ( (data[7].missing != -1) && (data[7].fvalue < (float)-0.44216892123)) {
            result[0] += -0.016231129;
          } else {
            result[0] += -0.05394405;
          }
        } else {
          result[0] += 0.0059090047;
        }
      } else {
        result[0] += 0.002479472;
      }
    }
  } else {
    if ( (data[5].missing != -1) && (data[5].fvalue < (float)-0.35727164149)) {
      if ( (data[3].missing != -1) && (data[3].fvalue < (float)-1.0088604689)) {
        result[0] += -0.019040419;
      } else {
        if ( (data[3].missing != -1) && (data[3].fvalue < (float)0.84174287319)) {
          if ( (data[11].missing != -1) && (data[11].fvalue < (float)-0.17124177516)) {
            if ( (data[6].missing != -1) && (data[6].fvalue < (float)0.041582621634)) {
              result[0] += 0.07270705;
            } else {
              result[0] += 0.04685661;
            }
          } else {
            if ( (data[12].missing != -1) && (data[12].fvalue < (float)0.53372818232)) {
              if ( (data[12].missing != -1) && (data[12].fvalue < (float)-0.14010675251)) {
                result[0] += 0.027601559;
              } else {
                result[0] += 0.06496639;
              }
            } else {
              if ( (data[3].missing != -1) && (data[3].fvalue < (float)-0.038952160627)) {
                result[0] += -0.027827352;
              } else {
                result[0] += 0.050133217;
              }
            }
          }
        } else {
          if ( (data[13].missing != -1) && (data[13].fvalue < (float)-1.0734432936)) {
            result[0] += 0.036837578;
          } else {
            result[0] += -0.029081592;
          }
        }
      }
    } else {
      if ( (data[0].missing != -1) && (data[0].fvalue < (float)0.50772362947)) {
        if ( (data[14].missing != -1) && (data[14].fvalue < (float)-1.2660292387)) {
          if ( (data[7].missing != -1) && (data[7].fvalue < (float)1.895293951)) {
            result[0] += 0.052820064;
          } else {
            result[0] += -0.024652367;
          }
        } else {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)-0.89701044559)) {
            result[0] += 0.013179438;
          } else {
            if ( (data[6].missing != -1) && (data[6].fvalue < (float)-0.60982686281)) {
              result[0] += -0.014286796;
            } else {
              result[0] += -0.05555231;
            }
          }
        }
      } else {
        if ( (data[7].missing != -1) && (data[7].fvalue < (float)-1.4372395277)) {
          result[0] += -0.03671372;
        } else {
          if ( (data[14].missing != -1) && (data[14].fvalue < (float)0.90477436781)) {
            if ( (data[5].missing != -1) && (data[5].fvalue < (float)0.07551728934)) {
              if ( (data[11].missing != -1) && (data[11].fvalue < (float)0.35976424813)) {
                result[0] += 0.017924387;
              } else {
                result[0] += 0.07439743;
              }
            } else {
              if ( (data[11].missing != -1) && (data[11].fvalue < (float)-0.027360389009)) {
                result[0] += 0.018905824;
              } else {
                result[0] += -0.036530692;
              }
            }
          } else {
            result[0] += 0.06792434;
          }
        }
      }
    }
  }
  if ( (data[0].missing != -1) && (data[0].fvalue < (float)-0.94471514225)) {
    if ( (data[8].missing != -1) && (data[8].fvalue < (float)-0.21041087806)) {
      if ( (data[13].missing != -1) && (data[13].fvalue < (float)1.9595717192)) {
        if ( (data[10].missing != -1) && (data[10].fvalue < (float)0.26540723443)) {
          result[1] += 0.008984448;
        } else {
          if ( (data[5].missing != -1) && (data[5].fvalue < (float)-0.434255898)) {
            result[1] += 0.04034576;
          } else {
            if ( (data[13].missing != -1) && (data[13].fvalue < (float)0.5182184577)) {
              result[1] += 0.041711804;
            } else {
              result[1] += 0.070819795;
            }
          }
        }
      } else {
        result[1] += -0.00021686331;
      }
    } else {
      if ( (data[15].missing != -1) && (data[15].fvalue < (float)-1.1929416656)) {
        result[1] += -0.04283085;
      } else {
        result[1] += 0.018759323;
      }
    }
  } else {
    if ( (data[13].missing != -1) && (data[13].fvalue < (float)1.2225931883)) {
      result[1] += -0.051550705;
    } else {
      if ( (data[16].missing != -1) && (data[16].fvalue < (float)0.050249256194)) {
        result[1] += -0.027945522;
      } else {
        result[1] += 0.053203166;
      }
    }
  }
  if ( (data[3].missing != -1) && (data[3].fvalue < (float)0.046019136906)) {
    if ( (data[6].missing != -1) && (data[6].fvalue < (float)-0.39624726772)) {
      if ( (data[9].missing != -1) && (data[9].fvalue < (float)-0.32228955626)) {
        if ( (data[12].missing != -1) && (data[12].fvalue < (float)-0.060700327158)) {
          result[2] += -0.003610472;
        } else {
          if ( (data[12].missing != -1) && (data[12].fvalue < (float)0.34002301097)) {
            result[2] += 0.076151624;
          } else {
            result[2] += 0.029576955;
          }
        }
      } else {
        if ( (data[5].missing != -1) && (data[5].fvalue < (float)-0.30345416069)) {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)-0.9672704339)) {
            result[2] += 0.002690592;
          } else {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)0.59630715847)) {
              result[2] += -0.056186926;
            } else {
              result[2] += -0.02583459;
            }
          }
        } else {
          if ( (data[11].missing != -1) && (data[11].fvalue < (float)-0.21514505148)) {
            result[2] += -0.040555518;
          } else {
            if ( (data[13].missing != -1) && (data[13].fvalue < (float)-0.75550806522)) {
              result[2] += 0.06959232;
            } else {
              result[2] += -0.0037654948;
            }
          }
        }
      }
    } else {
      if ( (data[16].missing != -1) && (data[16].fvalue < (float)0.069090053439)) {
        if ( (data[0].missing != -1) && (data[0].fvalue < (float)-0.94471514225)) {
          result[2] += -0.01524394;
        } else {
          if ( (data[13].missing != -1) && (data[13].fvalue < (float)-1.4167046547)) {
            result[2] += -0.0034536656;
          } else {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)-1.1657506227)) {
              result[2] += 0.06757491;
            } else {
              if ( (data[5].missing != -1) && (data[5].fvalue < (float)-0.34237021208)) {
                result[2] += 0.0019458843;
              } else {
                result[2] += 0.056206387;
              }
            }
          }
        }
      } else {
        if ( (data[5].missing != -1) && (data[5].fvalue < (float)1.160358429)) {
          result[2] += -0.055403978;
        } else {
          result[2] += 0.03551505;
        }
      }
    }
  } else {
    if ( (data[5].missing != -1) && (data[5].fvalue < (float)0.64061391354)) {
      if ( (data[8].missing != -1) && (data[8].fvalue < (float)-0.10686820745)) {
        if ( (data[7].missing != -1) && (data[7].fvalue < (float)0.53076726198)) {
          if ( (data[5].missing != -1) && (data[5].fvalue < (float)-0.15271317959)) {
            result[2] += -0.021587146;
          } else {
            result[2] += 0.043939937;
          }
        } else {
          if ( (data[5].missing != -1) && (data[5].fvalue < (float)-0.41068267822)) {
            result[2] += -0.00538866;
          } else {
            if ( (data[10].missing != -1) && (data[10].fvalue < (float)0.44645428658)) {
              result[2] += -0.0072920746;
            } else {
              result[2] += -0.05585446;
            }
          }
        }
      } else {
        result[2] += -0.05412046;
      }
    } else {
      if ( (data[3].missing != -1) && (data[3].fvalue < (float)0.61244803667)) {
        result[2] += 0.04667384;
      } else {
        if ( (data[5].missing != -1) && (data[5].fvalue < (float)1.8541356325)) {
          result[2] += -0.051749885;
        } else {
          if ( (data[8].missing != -1) && (data[8].fvalue < (float)-0.19956482947)) {
            result[2] += 0.009315372;
          } else {
            result[2] += -0.027852092;
          }
        }
      }
    }
  }
  if ( (data[10].missing != -1) && (data[10].fvalue < (float)-0.27807244658)) {
    if ( (data[8].missing != -1) && (data[8].fvalue < (float)0.12072786689)) {
      if ( (data[16].missing != -1) && (data[16].fvalue < (float)-0.030906429514)) {
        if ( (data[5].missing != -1) && (data[5].fvalue < (float)-0.39324355125)) {
          result[3] += -0.04760523;
        } else {
          result[3] += 0.015843885;
        }
      } else {
        if ( (data[5].missing != -1) && (data[5].fvalue < (float)-0.44625386596)) {
          if ( (data[5].missing != -1) && (data[5].fvalue < (float)-0.51371687651)) {
            result[3] += -0.04975034;
          } else {
            result[3] += 0.005443668;
          }
        } else {
          result[3] += -0.050259203;
        }
      }
    } else {
      result[3] += 0.03165214;
    }
  } else {
    if ( (data[8].missing != -1) && (data[8].fvalue < (float)-0.21131891012)) {
      if ( (data[6].missing != -1) && (data[6].fvalue < (float)-0.40938580036)) {
        result[3] += 0.010964063;
      } else {
        if ( (data[5].missing != -1) && (data[5].fvalue < (float)-0.14628712833)) {
          result[3] += -0.049814086;
        } else {
          if ( (data[11].missing != -1) && (data[11].fvalue < (float)-0.24950000644)) {
            result[3] += 0.007081271;
          } else {
            result[3] += -0.05046329;
          }
        }
      }
    } else {
      if ( (data[10].missing != -1) && (data[10].fvalue < (float)0.41789460182)) {
        if ( (data[1].missing != -1) && (data[1].fvalue < (float)-1.0610685349)) {
          if ( (data[0].missing != -1) && (data[0].fvalue < (float)-0.32232868671)) {
            result[3] += 0.009424802;
          } else {
            result[3] += 0.08409547;
          }
        } else {
          if ( (data[14].missing != -1) && (data[14].fvalue < (float)0.13486784697)) {
            if ( (data[6].missing != -1) && (data[6].fvalue < (float)0.17723160982)) {
              result[3] += 0.044405863;
            } else {
              result[3] += -0.034880925;
            }
          } else {
            if ( (data[16].missing != -1) && (data[16].fvalue < (float)0.053103368729)) {
              if ( (data[3].missing != -1) && (data[3].fvalue < (float)-0.063802108169)) {
                result[3] += -0.01611177;
              } else {
                result[3] += -0.05293095;
              }
            } else {
              result[3] += 0.008063142;
            }
          }
        }
      } else {
        if ( (data[6].missing != -1) && (data[6].fvalue < (float)1.0815649033)) {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)1.027759552)) {
            if ( (data[6].missing != -1) && (data[6].fvalue < (float)-0.87955719233)) {
              result[3] += -0.007031218;
            } else {
              if ( (data[3].missing != -1) && (data[3].fvalue < (float)0.48468419909)) {
                result[3] += 0.060205318;
              } else {
                result[3] += 0.014699389;
              }
            }
          } else {
            if ( (data[11].missing != -1) && (data[11].fvalue < (float)0.30801925063)) {
              result[3] += 0.07526498;
            } else {
              if ( (data[12].missing != -1) && (data[12].fvalue < (float)0.56249433756)) {
                result[3] += -0.010045139;
              } else {
                result[3] += 0.06667929;
              }
            }
          }
        } else {
          result[3] += -0.0008957898;
        }
      }
    }
  }
  if ( (data[9].missing != -1) && (data[9].fvalue < (float)-0.25189942122)) {
    if ( (data[11].missing != -1) && (data[11].fvalue < (float)-0.15698228776)) {
      if ( (data[5].missing != -1) && (data[5].fvalue < (float)-0.44998666644)) {
        if ( (data[10].missing != -1) && (data[10].fvalue < (float)-0.23650088906)) {
          result[0] += -0.051107634;
        } else {
          result[0] += 0.036709107;
        }
      } else {
        if ( (data[5].missing != -1) && (data[5].fvalue < (float)0.29465630651)) {
          if ( (data[8].missing != -1) && (data[8].fvalue < (float)-0.18701218069)) {
            result[0] += -0.05341956;
          } else {
            result[0] += -0.027505526;
          }
        } else {
          result[0] += -0.022120645;
        }
      }
    } else {
      result[0] += 0.01354969;
    }
  } else {
    if ( (data[5].missing != -1) && (data[5].fvalue < (float)-0.30542847514)) {
      if ( (data[3].missing != -1) && (data[3].fvalue < (float)-0.95868659019)) {
        if ( (data[6].missing != -1) && (data[6].fvalue < (float)-0.35151079297)) {
          result[0] += -0.015276112;
        } else {
          result[0] += -0.053346474;
        }
      } else {
        if ( (data[3].missing != -1) && (data[3].fvalue < (float)1.0523011684)) {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)0.23856493831)) {
            result[0] += 0.08496598;
          } else {
            if ( (data[7].missing != -1) && (data[7].fvalue < (float)-0.19608767331)) {
              if ( (data[3].missing != -1) && (data[3].fvalue < (float)-0.58809620142)) {
                result[0] += 0.024945676;
              } else {
                result[0] += 0.061163146;
              }
            } else {
              result[0] += -0.00040687036;
            }
          }
        } else {
          result[0] += -0.0107641565;
        }
      }
    } else {
      if ( (data[7].missing != -1) && (data[7].fvalue < (float)-0.48896437883)) {
        if ( (data[7].missing != -1) && (data[7].fvalue < (float)-1.3269523382)) {
          if ( (data[6].missing != -1) && (data[6].fvalue < (float)-0.90994179249)) {
            result[0] += -0.056433678;
          } else {
            result[0] += -0.0030795806;
          }
        } else {
          if ( (data[14].missing != -1) && (data[14].fvalue < (float)0.90477436781)) {
            if ( (data[5].missing != -1) && (data[5].fvalue < (float)0.069415435195)) {
              if ( (data[9].missing != -1) && (data[9].fvalue < (float)0.57206761837)) {
                result[0] += 0.0076366575;
              } else {
                result[0] += 0.06322458;
              }
            } else {
              if ( (data[16].missing != -1) && (data[16].fvalue < (float)0.072256959975)) {
                result[0] += -0.04529373;
              } else {
                result[0] += 0.035300504;
              }
            }
          } else {
            result[0] += 0.06738032;
          }
        }
      } else {
        if ( (data[11].missing != -1) && (data[11].fvalue < (float)-0.23136755824)) {
          if ( (data[5].missing != -1) && (data[5].fvalue < (float)-0.15679863095)) {
            result[0] += 0.044431187;
          } else {
            result[0] += -0.010636116;
          }
        } else {
          if ( (data[10].missing != -1) && (data[10].fvalue < (float)0.6175121069)) {
            if ( (data[0].missing != -1) && (data[0].fvalue < (float)0.50772362947)) {
              result[0] += -0.05597648;
            } else {
              if ( (data[14].missing != -1) && (data[14].fvalue < (float)0.5266110301)) {
                result[0] += 0.026376545;
              } else {
                result[0] += -0.05634302;
              }
            }
          } else {
            result[0] += 0.013274247;
          }
        }
      }
    }
  }
  if ( (data[0].missing != -1) && (data[0].fvalue < (float)-0.80280572176)) {
    if ( (data[8].missing != -1) && (data[8].fvalue < (float)-0.21625265479)) {
      if ( (data[16].missing != -1) && (data[16].fvalue < (float)0.014711526223)) {
        if ( (data[13].missing != -1) && (data[13].fvalue < (float)0.97630155087)) {
          if ( (data[14].missing != -1) && (data[14].fvalue < (float)-1.3603727818)) {
            result[1] += 0.06532634;
          } else {
            result[1] += 0.0002822121;
          }
        } else {
          result[1] += 0.068215095;
        }
      } else {
        result[1] += 0.024233157;
      }
    } else {
      if ( (data[6].missing != -1) && (data[6].fvalue < (float)-0.27628463507)) {
        result[1] += -0.04196565;
      } else {
        if ( (data[11].missing != -1) && (data[11].fvalue < (float)-0.2053707242)) {
          if ( (data[8].missing != -1) && (data[8].fvalue < (float)-0.21041087806)) {
            result[1] += 0.031708825;
          } else {
            result[1] += -0.038674172;
          }
        } else {
          result[1] += 0.04793998;
        }
      }
    }
  } else {
    if ( (data[13].missing != -1) && (data[13].fvalue < (float)1.2225931883)) {
      if ( (data[8].missing != -1) && (data[8].fvalue < (float)-0.21892316639)) {
        result[1] += -0.029382711;
      } else {
        if ( (data[1].missing != -1) && (data[1].fvalue < (float)-1.6562097073)) {
          result[1] += -0.030305235;
        } else {
          if ( (data[11].missing != -1) && (data[11].fvalue < (float)-0.27058675885)) {
            result[1] += -0.031207204;
          } else {
            result[1] += -0.053644657;
          }
        }
      }
    } else {
      if ( (data[8].missing != -1) && (data[8].fvalue < (float)-0.20207519829)) {
        result[1] += 0.033625256;
      } else {
        result[1] += -0.02370728;
      }
    }
  }
  if ( (data[3].missing != -1) && (data[3].fvalue < (float)-0.25331288576)) {
    if ( (data[12].missing != -1) && (data[12].fvalue < (float)1.0508075953)) {
      if ( (data[6].missing != -1) && (data[6].fvalue < (float)-0.7944175601)) {
        if ( (data[3].missing != -1) && (data[3].fvalue < (float)-0.94150280952)) {
          result[2] += 0.05611178;
        } else {
          if ( (data[12].missing != -1) && (data[12].fvalue < (float)0.15007823706)) {
            result[2] += 0.01676168;
          } else {
            result[2] += -0.04322946;
          }
        }
      } else {
        if ( (data[16].missing != -1) && (data[16].fvalue < (float)0.072256959975)) {
          if ( (data[16].missing != -1) && (data[16].fvalue < (float)-0.018879529089)) {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)-1.3735567331)) {
              result[2] += 0.06562804;
            } else {
              if ( (data[13].missing != -1) && (data[13].fvalue < (float)-0.34435260296)) {
                result[2] += 0.023281679;
              } else {
                result[2] += -0.035159793;
              }
            }
          } else {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)-1.2842303514)) {
              result[2] += 0.018942827;
            } else {
              if ( (data[8].missing != -1) && (data[8].fvalue < (float)-0.14445891976)) {
                result[2] += 0.06445857;
              } else {
                result[2] += 0.042784676;
              }
            }
          }
        } else {
          result[2] += 0.009165465;
        }
      }
    } else {
      if ( (data[9].missing != -1) && (data[9].fvalue < (float)-0.058335654438)) {
        result[2] += 0.02668939;
      } else {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)0.58306658268)) {
          result[2] += -0.05783058;
        } else {
          result[2] += -0.022124924;
        }
      }
    }
  } else {
    if ( (data[5].missing != -1) && (data[5].fvalue < (float)-0.21864587069)) {
      if ( (data[9].missing != -1) && (data[9].fvalue < (float)-1.6948031187)) {
        result[2] += -0.0058622486;
      } else {
        if ( (data[6].missing != -1) && (data[6].fvalue < (float)0.17723160982)) {
          result[2] += -0.056587495;
        } else {
          if ( (data[7].missing != -1) && (data[7].fvalue < (float)1.2491922379)) {
            result[2] += -0.016761662;
          } else {
            result[2] += -0.05183056;
          }
        }
      }
    } else {
      if ( (data[3].missing != -1) && (data[3].fvalue < (float)1.1059601307)) {
        if ( (data[13].missing != -1) && (data[13].fvalue < (float)0.65003782511)) {
          if ( (data[7].missing != -1) && (data[7].fvalue < (float)-0.71226298809)) {
            if ( (data[8].missing != -1) && (data[8].fvalue < (float)-0.018376011401)) {
              result[2] += -0.0027220016;
            } else {
              result[2] += -0.054601636;
            }
          } else {
            if ( (data[5].missing != -1) && (data[5].fvalue < (float)0.05134915933)) {
              result[2] += 0.021857364;
            } else {
              if ( (data[0].missing != -1) && (data[0].fvalue < (float)0.85348778963)) {
                result[2] += 0.070134245;
              } else {
                result[2] += 0.026800765;
              }
            }
          }
        } else {
          if ( (data[6].missing != -1) && (data[6].fvalue < (float)1.3642252684)) {
            if ( (data[13].missing != -1) && (data[13].fvalue < (float)0.98732662201)) {
              result[2] += -0.022790186;
            } else {
              result[2] += -0.058120906;
            }
          } else {
            result[2] += 0.040316828;
          }
        }
      } else {
        result[2] += -0.051110543;
      }
    }
  }
  if ( (data[10].missing != -1) && (data[10].fvalue < (float)0.09049295634)) {
    if ( (data[8].missing != -1) && (data[8].fvalue < (float)-0.088057100773)) {
      if ( (data[15].missing != -1) && (data[15].fvalue < (float)0.20022596419)) {
        if ( (data[6].missing != -1) && (data[6].fvalue < (float)-0.091145552695)) {
          if ( (data[11].missing != -1) && (data[11].fvalue < (float)-0.22192882001)) {
            result[3] += 0.025941998;
          } else {
            result[3] += -0.02019704;
          }
        } else {
          result[3] += -0.04382075;
        }
      } else {
        if ( (data[16].missing != -1) && (data[16].fvalue < (float)0.06678853929)) {
          result[3] += -0.054353464;
        } else {
          result[3] += -0.01671773;
        }
      }
    } else {
      if ( (data[10].missing != -1) && (data[10].fvalue < (float)-1.0556701422)) {
        result[3] += 0.078659736;
      } else {
        if ( (data[13].missing != -1) && (data[13].fvalue < (float)-1.0734432936)) {
          result[3] += -0.05323664;
        } else {
          if ( (data[7].missing != -1) && (data[7].fvalue < (float)-0.94923579693)) {
            result[3] += 0.051786967;
          } else {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)0.7610539794)) {
              if ( (data[8].missing != -1) && (data[8].fvalue < (float)-0.018376011401)) {
                result[3] += -0.01918014;
              } else {
                result[3] += -0.05018576;
              }
            } else {
              result[3] += 0.01764992;
            }
          }
        }
      }
    }
  } else {
    if ( (data[8].missing != -1) && (data[8].fvalue < (float)-0.21470879018)) {
      if ( (data[16].missing != -1) && (data[16].fvalue < (float)0.021485496312)) {
        if ( (data[5].missing != -1) && (data[5].fvalue < (float)-0.18760381639)) {
          result[3] += -0.05223273;
        } else {
          result[3] += -0.015317139;
        }
      } else {
        result[3] += 0.0040315357;
      }
    } else {
      if ( (data[11].missing != -1) && (data[11].fvalue < (float)2.1478612423)) {
        if ( (data[12].missing != -1) && (data[12].fvalue < (float)-0.48623552918)) {
          if ( (data[13].missing != -1) && (data[13].fvalue < (float)1.1396669149)) {
            if ( (data[6].missing != -1) && (data[6].fvalue < (float)0.98540580273)) {
              if ( (data[15].missing != -1) && (data[15].fvalue < (float)-0.66690677404)) {
                result[3] += 0.06872197;
              } else {
                result[3] += 0.033832077;
              }
            } else {
              result[3] += 0.004191312;
            }
          } else {
            result[3] += -0.013414465;
          }
        } else {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)1.1617108583)) {
            if ( (data[16].missing != -1) && (data[16].fvalue < (float)0.075354173779)) {
              if ( (data[6].missing != -1) && (data[6].fvalue < (float)0.2744962275)) {
                result[3] += -0.016797733;
              } else {
                result[3] += -0.0534675;
              }
            } else {
              result[3] += 0.022498073;
            }
          } else {
            result[3] += 0.05343442;
          }
        }
      } else {
        result[3] += 0.07559144;
      }
    }
  }
  if ( (data[9].missing != -1) && (data[9].fvalue < (float)-0.23011678457)) {
    if ( (data[11].missing != -1) && (data[11].fvalue < (float)-0.15698228776)) {
      if ( (data[5].missing != -1) && (data[5].fvalue < (float)-0.51631754637)) {
        result[0] += 0.019006979;
      } else {
        if ( (data[16].missing != -1) && (data[16].fvalue < (float)0.062331173569)) {
          if ( (data[6].missing != -1) && (data[6].fvalue < (float)-1.0598759651)) {
            result[0] += -0.020686088;
          } else {
            if ( (data[12].missing != -1) && (data[12].fvalue < (float)-1.4074794054)) {
              result[0] += -0.029472083;
            } else {
              if ( (data[16].missing != -1) && (data[16].fvalue < (float)0.021214965731)) {
                result[0] += -0.054033816;
              } else {
                result[0] += -0.037914224;
              }
            }
          }
        } else {
          result[0] += -0.017262729;
        }
      }
    } else {
      if ( (data[8].missing != -1) && (data[8].fvalue < (float)-0.16569210589)) {
        result[0] += -0.023578301;
      } else {
        result[0] += 0.04955792;
      }
    }
  } else {
    if ( (data[5].missing != -1) && (data[5].fvalue < (float)-0.35539877415)) {
      if ( (data[3].missing != -1) && (data[3].fvalue < (float)-1.0847979784)) {
        result[0] += -0.027128402;
      } else {
        if ( (data[3].missing != -1) && (data[3].fvalue < (float)1.0822201967)) {
          if ( (data[11].missing != -1) && (data[11].fvalue < (float)-0.16485464573)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)0.34409162402)) {
              result[0] += 0.08052034;
            } else {
              if ( (data[3].missing != -1) && (data[3].fvalue < (float)-0.55354166031)) {
                result[0] += 0.015322077;
              } else {
                result[0] += 0.06709644;
              }
            }
          } else {
            if ( (data[7].missing != -1) && (data[7].fvalue < (float)-0.47102257609)) {
              if ( (data[12].missing != -1) && (data[12].fvalue < (float)0.92753559351)) {
                result[0] += 0.056734886;
              } else {
                result[0] += 0.010390366;
              }
            } else {
              result[0] += -0.010305314;
            }
          }
        } else {
          result[0] += -0.0057454;
        }
      }
    } else {
      if ( (data[0].missing != -1) && (data[0].fvalue < (float)0.59084939957)) {
        if ( (data[5].missing != -1) && (data[5].fvalue < (float)-0.16096504033)) {
          if ( (data[16].missing != -1) && (data[16].fvalue < (float)0.0064786295407)) {
            result[0] += -0.02270917;
          } else {
            if ( (data[10].missing != -1) && (data[10].fvalue < (float)0.032870963216)) {
              result[0] += 0.045986194;
            } else {
              result[0] += 0.0062720194;
            }
          }
        } else {
          if ( (data[13].missing != -1) && (data[13].fvalue < (float)0.85409128666)) {
            if ( (data[0].missing != -1) && (data[0].fvalue < (float)0.43066838384)) {
              result[0] += -0.054150242;
            } else {
              result[0] += -0.022330962;
            }
          } else {
            result[0] += 0.01175348;
          }
        }
      } else {
        if ( (data[14].missing != -1) && (data[14].fvalue < (float)0.5324190259)) {
          result[0] += 0.078527324;
        } else {
          if ( (data[7].missing != -1) && (data[7].fvalue < (float)-0.48104423285)) {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)1.4404942989)) {
              if ( (data[3].missing != -1) && (data[3].fvalue < (float)0.046019136906)) {
                result[0] += 0.008629663;
              } else {
                result[0] += 0.058160167;
              }
            } else {
              result[0] += -0.03616686;
            }
          } else {
            result[0] += -0.055945374;
          }
        }
      }
    }
  }
  if ( (data[0].missing != -1) && (data[0].fvalue < (float)-0.72903758287)) {
    if ( (data[8].missing != -1) && (data[8].fvalue < (float)-0.21625265479)) {
      if ( (data[11].missing != -1) && (data[11].fvalue < (float)-0.27450460196)) {
        result[1] += 0.023409804;
      } else {
        if ( (data[13].missing != -1) && (data[13].fvalue < (float)0.52680617571)) {
          result[1] += 0.030968336;
        } else {
          if ( (data[8].missing != -1) && (data[8].fvalue < (float)-0.21802853048)) {
            result[1] += 0.06871305;
          } else {
            result[1] += 0.041008845;
          }
        }
      }
    } else {
      if ( (data[5].missing != -1) && (data[5].fvalue < (float)0.37600171566)) {
        if ( (data[0].missing != -1) && (data[0].fvalue < (float)-1.1111795902)) {
          if ( (data[11].missing != -1) && (data[11].fvalue < (float)-0.25190475583)) {
            result[1] += -0.03520842;
          } else {
            result[1] += 0.033684235;
          }
        } else {
          result[1] += -0.04627239;
        }
      } else {
        result[1] += 0.035355654;
      }
    }
  } else {
    if ( (data[5].missing != -1) && (data[5].fvalue < (float)3.4161965847)) {
      if ( (data[3].missing != -1) && (data[3].fvalue < (float)-0.82810521126)) {
        if ( (data[16].missing != -1) && (data[16].fvalue < (float)0.045002944767)) {
          if ( (data[16].missing != -1) && (data[16].fvalue < (float)-0.019668526947)) {
            if ( (data[13].missing != -1) && (data[13].fvalue < (float)-0.34435260296)) {
              result[1] += -0.047195952;
            } else {
              result[1] += -0.012199498;
            }
          } else {
            result[1] += -0.052350044;
          }
        } else {
          result[1] += -0.017093787;
        }
      } else {
        result[1] += -0.054459017;
      }
    } else {
      result[1] += -0.007224993;
    }
  }
  if ( (data[3].missing != -1) && (data[3].fvalue < (float)0.19738391042)) {
    if ( (data[6].missing != -1) && (data[6].fvalue < (float)-0.39624726772)) {
      if ( (data[7].missing != -1) && (data[7].fvalue < (float)-0.61462640762)) {
        if ( (data[8].missing != -1) && (data[8].fvalue < (float)-0.16341301799)) {
          result[2] += -0.012600104;
        } else {
          if ( (data[11].missing != -1) && (data[11].fvalue < (float)0.00019615572819)) {
            result[2] += -0.05732174;
          } else {
            result[2] += -0.024457011;
          }
        }
      } else {
        if ( (data[10].missing != -1) && (data[10].fvalue < (float)-0.79976952076)) {
          if ( (data[8].missing != -1) && (data[8].fvalue < (float)-0.19264282286)) {
            result[2] += 0.06495204;
          } else {
            result[2] += 0.021654915;
          }
        } else {
          if ( (data[7].missing != -1) && (data[7].fvalue < (float)0.17420266569)) {
            if ( (data[13].missing != -1) && (data[13].fvalue < (float)-0.6913408637)) {
              result[2] += 0.027673641;
            } else {
              if ( (data[12].missing != -1) && (data[12].fvalue < (float)-0.063653245568)) {
                result[2] += -0.06563521;
              } else {
                result[2] += -0.022378609;
              }
            }
          } else {
            result[2] += 0.041880764;
          }
        }
      }
    } else {
      if ( (data[16].missing != -1) && (data[16].fvalue < (float)0.040303114802)) {
        if ( (data[0].missing != -1) && (data[0].fvalue < (float)-0.94471514225)) {
          result[2] += -0.02756014;
        } else {
          if ( (data[16].missing != -1) && (data[16].fvalue < (float)-0.018879529089)) {
            if ( (data[8].missing != -1) && (data[8].fvalue < (float)-0.20368315279)) {
              if ( (data[11].missing != -1) && (data[11].fvalue < (float)-0.26053145528)) {
                result[2] += 0.06290302;
              } else {
                result[2] += 0.029071305;
              }
            } else {
              result[2] += -0.015258367;
            }
          } else {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)0.046019136906)) {
              if ( (data[16].missing != -1) && (data[16].fvalue < (float)0.003278326476)) {
                result[2] += 0.066420145;
              } else {
                result[2] += 0.04769929;
              }
            } else {
              result[2] += 0.017669974;
            }
          }
        }
      } else {
        if ( (data[7].missing != -1) && (data[7].fvalue < (float)-0.40445777774)) {
          if ( (data[5].missing != -1) && (data[5].fvalue < (float)0.35733887553)) {
            if ( (data[11].missing != -1) && (data[11].fvalue < (float)-0.19597181678)) {
              result[2] += -0.06489702;
            } else {
              result[2] += -0.029912723;
            }
          } else {
            result[2] += 0.0148788495;
          }
        } else {
          if ( (data[15].missing != -1) && (data[15].fvalue < (float)-0.10980009288)) {
            result[2] += -0.0068452987;
          } else {
            result[2] += 0.07194813;
          }
        }
      }
    }
  } else {
    if ( (data[5].missing != -1) && (data[5].fvalue < (float)2.770565033)) {
      if ( (data[11].missing != -1) && (data[11].fvalue < (float)-0.27120104432)) {
        if ( (data[7].missing != -1) && (data[7].fvalue < (float)1.3987635374)) {
          result[2] += -0.0039042605;
        } else {
          result[2] += -0.047547415;
        }
      } else {
        if ( (data[10].missing != -1) && (data[10].fvalue < (float)0.44645428658)) {
          if ( (data[8].missing != -1) && (data[8].fvalue < (float)-0.16569210589)) {
            result[2] += 0.004791005;
          } else {
            if ( (data[6].missing != -1) && (data[6].fvalue < (float)0.35821998119)) {
              result[2] += -0.054077324;
            } else {
              result[2] += -0.02967248;
            }
          }
        } else {
          if ( (data[13].missing != -1) && (data[13].fvalue < (float)-0.061750162393)) {
            result[2] += -0.03290157;
          } else {
            result[2] += -0.05608345;
          }
        }
      }
    } else {
      result[2] += 0.015591755;
    }
  }
  if ( (data[3].missing != -1) && (data[3].fvalue < (float)-0.28086575866)) {
    if ( (data[8].missing != -1) && (data[8].fvalue < (float)0.0070507549681)) {
      if ( (data[2].missing != -1) && (data[2].fvalue < (float)-0.66433107853)) {
        result[3] += 0.012562573;
      } else {
        if ( (data[8].missing != -1) && (data[8].fvalue < (float)-0.12956127524)) {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)-0.94920670986)) {
            if ( (data[13].missing != -1) && (data[13].fvalue < (float)1.23132658)) {
              result[3] += -0.014212489;
            } else {
              result[3] += -0.034082036;
            }
          } else {
            if ( (data[5].missing != -1) && (data[5].fvalue < (float)-0.45429927111)) {
              if ( (data[6].missing != -1) && (data[6].fvalue < (float)-0.36119776964)) {
                result[3] += -0.047369536;
              } else {
                result[3] += -0.013240791;
              }
            } else {
              result[3] += -0.05368333;
            }
          }
        } else {
          result[3] += -0.014913253;
        }
      }
    } else {
      result[3] += 0.061052788;
    }
  } else {
    if ( (data[1].missing != -1) && (data[1].fvalue < (float)-1.0610685349)) {
      if ( (data[8].missing != -1) && (data[8].fvalue < (float)-0.20738936961)) {
        result[3] += -0.023134967;
      } else {
        if ( (data[3].missing != -1) && (data[3].fvalue < (float)0.25650903583)) {
          result[3] += 0.030555233;
        } else {
          result[3] += 0.08078916;
        }
      }
    } else {
      if ( (data[11].missing != -1) && (data[11].fvalue < (float)2.1478612423)) {
        if ( (data[16].missing != -1) && (data[16].fvalue < (float)0.053103368729)) {
          if ( (data[5].missing != -1) && (data[5].fvalue < (float)-0.44998666644)) {
            if ( (data[6].missing != -1) && (data[6].fvalue < (float)-1.1365638971)) {
              result[3] += -0.027277103;
            } else {
              result[3] += -0.052221842;
            }
          } else {
            if ( (data[6].missing != -1) && (data[6].fvalue < (float)-0.96865642071)) {
              if ( (data[9].missing != -1) && (data[9].fvalue < (float)0.67599290609)) {
                result[3] += 0.0013419105;
              } else {
                result[3] += 0.0755469;
              }
            } else {
              if ( (data[16].missing != -1) && (data[16].fvalue < (float)0.00085049594054)) {
                result[3] += -0.042302247;
              } else {
                result[3] += -0.004272214;
              }
            }
          }
        } else {
          if ( (data[15].missing != -1) && (data[15].fvalue < (float)-0.47399246693)) {
            result[3] += -0.023024974;
          } else {
            if ( (data[11].missing != -1) && (data[11].fvalue < (float)-0.052285194397)) {
              result[3] += 0.015284667;
            } else {
              result[3] += 0.06618787;
            }
          }
        }
      } else {
        if ( (data[12].missing != -1) && (data[12].fvalue < (float)1.3626664877)) {
          result[3] += 0.024959592;
        } else {
          result[3] += 0.06768936;
        }
      }
    }
  }
  if ( (data[9].missing != -1) && (data[9].fvalue < (float)-0.084286130965)) {
    if ( (data[6].missing != -1) && (data[6].fvalue < (float)-0.71604603529)) {
      if ( (data[7].missing != -1) && (data[7].fvalue < (float)0.18004330993)) {
        if ( (data[14].missing != -1) && (data[14].fvalue < (float)0.35550844669)) {
          result[0] += 0.059194744;
        } else {
          result[0] += 0.0037237094;
        }
      } else {
        result[0] += -0.011494016;
      }
    } else {
      if ( (data[8].missing != -1) && (data[8].fvalue < (float)-0.19687050581)) {
        if ( (data[16].missing != -1) && (data[16].fvalue < (float)0.059283025563)) {
          if ( (data[8].missing != -1) && (data[8].fvalue < (float)-0.20639407635)) {
            if ( (data[1].missing != -1) && (data[1].fvalue < (float)-1.3821275234)) {
              result[0] += -0.029044017;
            } else {
              if ( (data[11].missing != -1) && (data[11].fvalue < (float)-0.23459285498)) {
                result[0] += -0.053623773;
              } else {
                result[0] += -0.030100921;
              }
            }
          } else {
            result[0] += -0.024895659;
          }
        } else {
          result[0] += -0.019132597;
        }
      } else {
        if ( (data[6].missing != -1) && (data[6].fvalue < (float)0.030263820663)) {
          result[0] += -0.044564042;
        } else {
          result[0] += 0.002768204;
        }
      }
    }
  } else {
    if ( (data[5].missing != -1) && (data[5].fvalue < (float)-0.40100291371)) {
      if ( (data[10].missing != -1) && (data[10].fvalue < (float)-1.2233704329)) {
        result[0] += -0.031920504;
      } else {
        if ( (data[11].missing != -1) && (data[11].fvalue < (float)-0.17039236426)) {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)-0.58809620142)) {
            result[0] += 0.035940677;
          } else {
            result[0] += 0.069232374;
          }
        } else {
          if ( (data[6].missing != -1) && (data[6].fvalue < (float)-1.1161192656)) {
            if ( (data[7].missing != -1) && (data[7].fvalue < (float)-0.94923579693)) {
              result[0] += -0.014188177;
            } else {
              result[0] += 0.03581832;
            }
          } else {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)-0.23574270308)) {
              result[0] += 0.022770764;
            } else {
              result[0] += 0.06472681;
            }
          }
        }
      }
    } else {
      if ( (data[7].missing != -1) && (data[7].fvalue < (float)-0.74306476116)) {
        if ( (data[11].missing != -1) && (data[11].fvalue < (float)-0.21514505148)) {
          result[0] += 0.06532376;
        } else {
          if ( (data[10].missing != -1) && (data[10].fvalue < (float)-0.64825534821)) {
            result[0] += -0.034446146;
          } else {
            if ( (data[8].missing != -1) && (data[8].fvalue < (float)0.85846698284)) {
              if ( (data[16].missing != -1) && (data[16].fvalue < (float)0.053103368729)) {
                result[0] += 0.06112312;
              } else {
                result[0] += 0.0146802245;
              }
            } else {
              result[0] += -0.022646073;
            }
          }
        }
      } else {
        if ( (data[11].missing != -1) && (data[11].fvalue < (float)0.35976424813)) {
          if ( (data[2].missing != -1) && (data[2].fvalue < (float)-0.069487594068)) {
            result[0] += -0.059901077;
          } else {
            if ( (data[11].missing != -1) && (data[11].fvalue < (float)-0.088884577155)) {
              if ( (data[11].missing != -1) && (data[11].fvalue < (float)-0.14085152745)) {
                result[0] += -0.0053789155;
              } else {
                result[0] += 0.055509876;
              }
            } else {
              if ( (data[12].missing != -1) && (data[12].fvalue < (float)-0.24093179405)) {
                result[0] += -0.009145032;
              } else {
                result[0] += -0.05295798;
              }
            }
          }
        } else {
          if ( (data[5].missing != -1) && (data[5].fvalue < (float)0.07551728934)) {
            result[0] += 0.07207758;
          } else {
            result[0] += 0.0048368066;
          }
        }
      }
    }
  }
  if ( (data[0].missing != -1) && (data[0].fvalue < (float)-1.0674057007)) {
    if ( (data[8].missing != -1) && (data[8].fvalue < (float)-0.21625265479)) {
      if ( (data[0].missing != -1) && (data[0].fvalue < (float)-1.4190087318)) {
        if ( (data[10].missing != -1) && (data[10].fvalue < (float)2.0270805359)) {
          result[1] += 0.06415499;
        } else {
          result[1] += 0.03705651;
        }
      } else {
        if ( (data[3].missing != -1) && (data[3].fvalue < (float)0.31084772944)) {
          result[1] += 0.058329135;
        } else {
          result[1] += -0.0066092233;
        }
      }
    } else {
      if ( (data[11].missing != -1) && (data[11].fvalue < (float)-0.25190475583)) {
        result[1] += -0.03261831;
      } else {
        if ( (data[5].missing != -1) && (data[5].fvalue < (float)-0.26934820414)) {
          result[1] += 0.012607008;
        } else {
          result[1] += 0.060795564;
        }
      }
    }
  } else {
    if ( (data[13].missing != -1) && (data[13].fvalue < (float)1.0310770273)) {
      if ( (data[16].missing != -1) && (data[16].fvalue < (float)0.069090053439)) {
        if ( (data[11].missing != -1) && (data[11].fvalue < (float)-0.27182242274)) {
          result[1] += -0.029911432;
        } else {
          result[1] += -0.051983636;
        }
      } else {
        result[1] += -0.032613058;
      }
    } else {
      if ( (data[13].missing != -1) && (data[13].fvalue < (float)1.412607789)) {
        if ( (data[13].missing != -1) && (data[13].fvalue < (float)1.2953075171)) {
          result[1] += -0.002683149;
        } else {
          result[1] += 0.055000544;
        }
      } else {
        result[1] += -0.030359028;
      }
    }
  }
  if ( (data[3].missing != -1) && (data[3].fvalue < (float)0.19738391042)) {
    if ( (data[12].missing != -1) && (data[12].fvalue < (float)1.0508075953)) {
      if ( (data[3].missing != -1) && (data[3].fvalue < (float)-0.94150280952)) {
        if ( (data[16].missing != -1) && (data[16].fvalue < (float)0.042571268976)) {
          if ( (data[11].missing != -1) && (data[11].fvalue < (float)-0.25357052684)) {
            if ( (data[8].missing != -1) && (data[8].fvalue < (float)-0.21141324937)) {
              if ( (data[13].missing != -1) && (data[13].fvalue < (float)-0.32171311975)) {
                result[2] += 0.03606456;
              } else {
                result[2] += 0.06270179;
              }
            } else {
              result[2] += -0.013692995;
            }
          } else {
            if ( (data[8].missing != -1) && (data[8].fvalue < (float)-0.16569210589)) {
              result[2] += 0.0674372;
            } else {
              result[2] += 0.036724765;
            }
          }
        } else {
          result[2] += 0.0050710724;
        }
      } else {
        if ( (data[5].missing != -1) && (data[5].fvalue < (float)-0.15271317959)) {
          if ( (data[7].missing != -1) && (data[7].fvalue < (float)-0.32512119412)) {
            if ( (data[14].missing != -1) && (data[14].fvalue < (float)0.76945388317)) {
              if ( (data[10].missing != -1) && (data[10].fvalue < (float)-0.85419273376)) {
                result[2] += -0.030261735;
              } else {
                result[2] += -0.056048818;
              }
            } else {
              result[2] += 0.010619225;
            }
          } else {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)-0.31944227219)) {
              if ( (data[11].missing != -1) && (data[11].fvalue < (float)-0.25190475583)) {
                result[2] += -0.0075725103;
              } else {
                result[2] += 0.06649373;
              }
            } else {
              if ( (data[12].missing != -1) && (data[12].fvalue < (float)-0.52283453941)) {
                result[2] += -0.05594739;
              } else {
                result[2] += 0.0019333455;
              }
            }
          }
        } else {
          if ( (data[13].missing != -1) && (data[13].fvalue < (float)1.0310770273)) {
            if ( (data[12].missing != -1) && (data[12].fvalue < (float)0.29996162653)) {
              if ( (data[9].missing != -1) && (data[9].fvalue < (float)-0.47115305066)) {
                result[2] += 0.028937861;
              } else {
                result[2] += 0.058615424;
              }
            } else {
              if ( (data[11].missing != -1) && (data[11].fvalue < (float)-0.17039236426)) {
                result[2] += -0.047515634;
              } else {
                result[2] += 0.056584705;
              }
            }
          } else {
            result[2] += -0.025169054;
          }
        }
      }
    } else {
      if ( (data[7].missing != -1) && (data[7].fvalue < (float)-0.81045007706)) {
        if ( (data[13].missing != -1) && (data[13].fvalue < (float)-1.6364631653)) {
          result[2] += -0.011043756;
        } else {
          result[2] += -0.058549166;
        }
      } else {
        result[2] += 0.011002386;
      }
    }
  } else {
    if ( (data[5].missing != -1) && (data[5].fvalue < (float)1.667165041)) {
      if ( (data[8].missing != -1) && (data[8].fvalue < (float)-0.10686820745)) {
        if ( (data[10].missing != -1) && (data[10].fvalue < (float)0.44645428658)) {
          if ( (data[5].missing != -1) && (data[5].fvalue < (float)-0.25926822424)) {
            result[2] += -0.047196265;
          } else {
            result[2] += 0.03907239;
          }
        } else {
          if ( (data[5].missing != -1) && (data[5].fvalue < (float)-0.40431287885)) {
            result[2] += 0.00063095515;
          } else {
            if ( (data[7].missing != -1) && (data[7].fvalue < (float)0.67131799459)) {
              result[2] += -0.019693187;
            } else {
              result[2] += -0.053596407;
            }
          }
        }
      } else {
        result[2] += -0.052615095;
      }
    } else {
      if ( (data[10].missing != -1) && (data[10].fvalue < (float)1.0367903709)) {
        result[2] += 0.034452762;
      } else {
        result[2] += -0.028501093;
      }
    }
  }
  if ( (data[8].missing != -1) && (data[8].fvalue < (float)-0.21569140255)) {
    if ( (data[9].missing != -1) && (data[9].fvalue < (float)-1.6679133177)) {
      result[3] += -0.029417885;
    } else {
      result[3] += -0.05317214;
    }
  } else {
    if ( (data[3].missing != -1) && (data[3].fvalue < (float)0.46049252152)) {
      if ( (data[12].missing != -1) && (data[12].fvalue < (float)0.99250650406)) {
        if ( (data[15].missing != -1) && (data[15].fvalue < (float)0.20022596419)) {
          if ( (data[2].missing != -1) && (data[2].fvalue < (float)0.16981489956)) {
            result[3] += 0.03881955;
          } else {
            if ( (data[10].missing != -1) && (data[10].fvalue < (float)-0.15075722337)) {
              result[3] += -0.04249526;
            } else {
              if ( (data[16].missing != -1) && (data[16].fvalue < (float)0.013591933995)) {
                result[3] += 0.055760827;
              } else {
                result[3] += -0.0260892;
              }
            }
          }
        } else {
          if ( (data[1].missing != -1) && (data[1].fvalue < (float)-1.0143922567)) {
            result[3] += -0.0031200408;
          } else {
            if ( (data[12].missing != -1) && (data[12].fvalue < (float)0.32130610943)) {
              result[3] += -0.053829845;
            } else {
              if ( (data[13].missing != -1) && (data[13].fvalue < (float)-0.72381085157)) {
                result[3] += -0.044272732;
              } else {
                result[3] += -0.0029404783;
              }
            }
          }
        }
      } else {
        if ( (data[11].missing != -1) && (data[11].fvalue < (float)-0.13807588816)) {
          if ( (data[11].missing != -1) && (data[11].fvalue < (float)-0.2367080003)) {
            result[3] += -0.04794452;
          } else {
            result[3] += 0.010546788;
          }
        } else {
          result[3] += 0.077128604;
        }
      }
    } else {
      if ( (data[6].missing != -1) && (data[6].fvalue < (float)0.71585971117)) {
        if ( (data[13].missing != -1) && (data[13].fvalue < (float)0.90258133411)) {
          if ( (data[13].missing != -1) && (data[13].fvalue < (float)-1.0194351673)) {
            result[3] += -0.00818488;
          } else {
            if ( (data[13].missing != -1) && (data[13].fvalue < (float)0.31720897555)) {
              if ( (data[12].missing != -1) && (data[12].fvalue < (float)-0.46165171266)) {
                result[3] += 0.0773496;
              } else {
                result[3] += 0.047217187;
              }
            } else {
              if ( (data[5].missing != -1) && (data[5].fvalue < (float)-0.18760381639)) {
                result[3] += 0.0019511676;
              } else {
                result[3] += 0.05864147;
              }
            }
          }
        } else {
          result[3] += -0.0062048254;
        }
      } else {
        if ( (data[10].missing != -1) && (data[10].fvalue < (float)0.99988812208)) {
          result[3] += -0.05138762;
        } else {
          result[3] += 0.0014304327;
        }
      }
    }
  }
  if ( (data[7].missing != -1) && (data[7].fvalue < (float)-0.35935726762)) {
    if ( (data[3].missing != -1) && (data[3].fvalue < (float)-1.1763842106)) {
      if ( (data[3].missing != -1) && (data[3].fvalue < (float)-1.3735567331)) {
        result[0] += -0.05269701;
      } else {
        result[0] += -0.02128251;
      }
    } else {
      if ( (data[11].missing != -1) && (data[11].fvalue < (float)-0.25845351815)) {
        result[0] += 0.07627859;
      } else {
        if ( (data[10].missing != -1) && (data[10].fvalue < (float)-0.79976952076)) {
          if ( (data[16].missing != -1) && (data[16].fvalue < (float)0.040853574872)) {
            if ( (data[12].missing != -1) && (data[12].fvalue < (float)0.63036763668)) {
              result[0] += 0.0038205904;
            } else {
              result[0] += -0.04889814;
            }
          } else {
            result[0] += 0.04217153;
          }
        } else {
          if ( (data[11].missing != -1) && (data[11].fvalue < (float)2.1478612423)) {
            if ( (data[13].missing != -1) && (data[13].fvalue < (float)-0.21653530002)) {
              if ( (data[5].missing != -1) && (data[5].fvalue < (float)-0.31870663166)) {
                result[0] += 0.0503875;
              } else {
                result[0] += 0.014722729;
              }
            } else {
              result[0] += 0.07748552;
            }
          } else {
            result[0] += -0.027084371;
          }
        }
      }
    }
  } else {
    if ( (data[9].missing != -1) && (data[9].fvalue < (float)-0.29118299484)) {
      if ( (data[3].missing != -1) && (data[3].fvalue < (float)0.015094771981)) {
        if ( (data[13].missing != -1) && (data[13].fvalue < (float)-0.32171311975)) {
          result[0] += -0.030449811;
        } else {
          result[0] += -0.054169573;
        }
      } else {
        if ( (data[14].missing != -1) && (data[14].fvalue < (float)-0.42288470268)) {
          if ( (data[1].missing != -1) && (data[1].fvalue < (float)-2.1008269787)) {
            result[0] += -0.01825289;
          } else {
            result[0] += -0.049489897;
          }
        } else {
          result[0] += 0.07313468;
        }
      }
    } else {
      if ( (data[5].missing != -1) && (data[5].fvalue < (float)-0.18760381639)) {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)0.63800871372)) {
          if ( (data[14].missing != -1) && (data[14].fvalue < (float)0.10415083915)) {
            if ( (data[13].missing != -1) && (data[13].fvalue < (float)0.31720897555)) {
              result[0] += -0.029055128;
            } else {
              result[0] += 0.03941737;
            }
          } else {
            if ( (data[16].missing != -1) && (data[16].fvalue < (float)0.015834810212)) {
              result[0] += 0.027623022;
            } else {
              result[0] += 0.072119564;
            }
          }
        } else {
          if ( (data[11].missing != -1) && (data[11].fvalue < (float)-0.26627296209)) {
            result[0] += 0.0047801007;
          } else {
            result[0] += -0.037491623;
          }
        }
      } else {
        if ( (data[13].missing != -1) && (data[13].fvalue < (float)0.86167395115)) {
          if ( (data[5].missing != -1) && (data[5].fvalue < (float)0.90941381454)) {
            result[0] += -0.050443854;
          } else {
            result[0] += -0.005351025;
          }
        } else {
          if ( (data[16].missing != -1) && (data[16].fvalue < (float)0.051316402853)) {
            result[0] += 0.06494759;
          } else {
            result[0] += -0.027505105;
          }
        }
      }
    }
  }
  if ( (data[0].missing != -1) && (data[0].fvalue < (float)-0.72903758287)) {
    if ( (data[8].missing != -1) && (data[8].fvalue < (float)-0.21625265479)) {
      if ( (data[10].missing != -1) && (data[10].fvalue < (float)0.2830029726)) {
        result[1] += 0.00040181572;
      } else {
        if ( (data[6].missing != -1) && (data[6].fvalue < (float)0.4216991365)) {
          if ( (data[0].missing != -1) && (data[0].fvalue < (float)-1.4581781626)) {
            result[1] += 0.05580647;
          } else {
            result[1] += -0.0051137335;
          }
        } else {
          if ( (data[10].missing != -1) && (data[10].fvalue < (float)1.9740229845)) {
            result[1] += 0.06355859;
          } else {
            result[1] += 0.024626357;
          }
        }
      }
    } else {
      if ( (data[1].missing != -1) && (data[1].fvalue < (float)-1.2382310629)) {
        result[1] += -0.042011414;
      } else {
        if ( (data[13].missing != -1) && (data[13].fvalue < (float)1.2444925308)) {
          if ( (data[10].missing != -1) && (data[10].fvalue < (float)1.2422872782)) {
            result[1] += -0.0346115;
          } else {
            result[1] += 0.020515103;
          }
        } else {
          if ( (data[16].missing != -1) && (data[16].fvalue < (float)0.030153848231)) {
            result[1] += 0.07122534;
          } else {
            result[1] += 0.014616162;
          }
        }
      }
    }
  } else {
    if ( (data[13].missing != -1) && (data[13].fvalue < (float)1.2953075171)) {
      if ( (data[8].missing != -1) && (data[8].fvalue < (float)0.85846698284)) {
        if ( (data[16].missing != -1) && (data[16].fvalue < (float)-0.080493971705)) {
          result[1] += -0.029422838;
        } else {
          result[1] += -0.05251897;
        }
      } else {
        result[1] += -0.029168231;
      }
    } else {
      result[1] += 0.011434375;
    }
  }
  if ( (data[3].missing != -1) && (data[3].fvalue < (float)0.080768875778)) {
    if ( (data[12].missing != -1) && (data[12].fvalue < (float)1.0508075953)) {
      if ( (data[3].missing != -1) && (data[3].fvalue < (float)-1.1657506227)) {
        result[2] += 0.062026817;
      } else {
        if ( (data[5].missing != -1) && (data[5].fvalue < (float)-0.323004812)) {
          if ( (data[7].missing != -1) && (data[7].fvalue < (float)0.017411684617)) {
            if ( (data[10].missing != -1) && (data[10].fvalue < (float)-0.89206194878)) {
              result[2] += 0.02542211;
            } else {
              if ( (data[11].missing != -1) && (data[11].fvalue < (float)-0.21912281215)) {
                result[2] += -0.070728175;
              } else {
                result[2] += -0.017269721;
              }
            }
          } else {
            if ( (data[5].missing != -1) && (data[5].fvalue < (float)-0.41432738304)) {
              result[2] += 0.054520804;
            } else {
              result[2] += -0.005504378;
            }
          }
        } else {
          if ( (data[11].missing != -1) && (data[11].fvalue < (float)-0.20037463307)) {
            if ( (data[8].missing != -1) && (data[8].fvalue < (float)-0.19620859623)) {
              if ( (data[13].missing != -1) && (data[13].fvalue < (float)1.0127772093)) {
                result[2] += 0.051821124;
              } else {
                result[2] += -0.012076004;
              }
            } else {
              if ( (data[11].missing != -1) && (data[11].fvalue < (float)-0.23627480865)) {
                result[2] += -0.03913226;
              } else {
                result[2] += 0.014822911;
              }
            }
          } else {
            if ( (data[7].missing != -1) && (data[7].fvalue < (float)-0.41575521231)) {
              if ( (data[10].missing != -1) && (data[10].fvalue < (float)-0.72088116407)) {
                result[2] += 0.056489147;
              } else {
                result[2] += -0.00027471143;
              }
            } else {
              result[2] += 0.0623872;
            }
          }
        }
      }
    } else {
      if ( (data[10].missing != -1) && (data[10].fvalue < (float)-1.4239641428)) {
        result[2] += 0.0127332285;
      } else {
        if ( (data[16].missing != -1) && (data[16].fvalue < (float)0.021485496312)) {
          result[2] += -0.018101135;
        } else {
          result[2] += -0.05297975;
        }
      }
    }
  } else {
    if ( (data[5].missing != -1) && (data[5].fvalue < (float)0.37600171566)) {
      if ( (data[8].missing != -1) && (data[8].fvalue < (float)-0.10686820745)) {
        if ( (data[13].missing != -1) && (data[13].fvalue < (float)-0.049550849944)) {
          result[2] += 0.020873917;
        } else {
          if ( (data[5].missing != -1) && (data[5].fvalue < (float)-0.40884578228)) {
            result[2] += 0.0021766308;
          } else {
            if ( (data[8].missing != -1) && (data[8].fvalue < (float)-0.18658703566)) {
              result[2] += -0.054879207;
            } else {
              result[2] += -0.0016463235;
            }
          }
        }
      } else {
        result[2] += -0.0546017;
      }
    } else {
      if ( (data[10].missing != -1) && (data[10].fvalue < (float)0.41789460182)) {
        result[2] += 0.04289369;
      } else {
        if ( (data[11].missing != -1) && (data[11].fvalue < (float)-0.16165800393)) {
          result[2] += 0.00019243473;
        } else {
          result[2] += -0.040873926;
        }
      }
    }
  }
  if ( (data[8].missing != -1) && (data[8].fvalue < (float)-0.20063112676)) {
    if ( (data[6].missing != -1) && (data[6].fvalue < (float)-0.33870640397)) {
      if ( (data[3].missing != -1) && (data[3].fvalue < (float)-0.21026010811)) {
        result[3] += -0.040074293;
      } else {
        result[3] += 0.046217687;
      }
    } else {
      if ( (data[11].missing != -1) && (data[11].fvalue < (float)-0.24950000644)) {
        if ( (data[16].missing != -1) && (data[16].fvalue < (float)0.0013157817302)) {
          if ( (data[0].missing != -1) && (data[0].fvalue < (float)-0.11693918705)) {
            result[3] += -0.05133791;
          } else {
            result[3] += -0.028283058;
          }
        } else {
          if ( (data[10].missing != -1) && (data[10].fvalue < (float)0.26540723443)) {
            result[3] += -0.046868168;
          } else {
            if ( (data[7].missing != -1) && (data[7].fvalue < (float)1.1074665785)) {
              result[3] += 0.04099198;
            } else {
              result[3] += -0.0039621256;
            }
          }
        }
      } else {
        result[3] += -0.053421844;
      }
    }
  } else {
    if ( (data[10].missing != -1) && (data[10].fvalue < (float)-0.39829662442)) {
      if ( (data[8].missing != -1) && (data[8].fvalue < (float)0.011566273868)) {
        if ( (data[12].missing != -1) && (data[12].fvalue < (float)1.0508075953)) {
          if ( (data[13].missing != -1) && (data[13].fvalue < (float)-0.11498435587)) {
            result[3] += -0.05240911;
          } else {
            result[3] += -0.028971417;
          }
        } else {
          result[3] += 0.0042611673;
        }
      } else {
        result[3] += 0.03760117;
      }
    } else {
      if ( (data[5].missing != -1) && (data[5].fvalue < (float)-0.48074766994)) {
        if ( (data[11].missing != -1) && (data[11].fvalue < (float)-0.18861956894)) {
          result[3] += -0.049261212;
        } else {
          result[3] += -0.0016064685;
        }
      } else {
        if ( (data[2].missing != -1) && (data[2].fvalue < (float)0.005992370192)) {
          result[3] += 0.076023154;
        } else {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)1.4000630379)) {
            if ( (data[14].missing != -1) && (data[14].fvalue < (float)0.13486784697)) {
              if ( (data[9].missing != -1) && (data[9].fvalue < (float)-0.87846332788)) {
                result[3] += -0.0006972953;
              } else {
                result[3] += 0.04118749;
              }
            } else {
              if ( (data[10].missing != -1) && (data[10].fvalue < (float)-0.18654736876)) {
                result[3] += 0.05027159;
              } else {
                result[3] += -0.03486042;
              }
            }
          } else {
            if ( (data[8].missing != -1) && (data[8].fvalue < (float)0.22672767937)) {
              result[3] += 0.02884006;
            } else {
              result[3] += 0.064645804;
            }
          }
        }
      }
    }
  }
  if ( (data[9].missing != -1) && (data[9].fvalue < (float)-0.23011678457)) {
    if ( (data[8].missing != -1) && (data[8].fvalue < (float)-0.15919555724)) {
      if ( (data[6].missing != -1) && (data[6].fvalue < (float)-0.99000537395)) {
        result[0] += -0.00015163055;
      } else {
        if ( (data[5].missing != -1) && (data[5].fvalue < (float)0.49404135346)) {
          if ( (data[5].missing != -1) && (data[5].fvalue < (float)-0.50142669678)) {
            result[0] += -0.018147718;
          } else {
            if ( (data[15].missing != -1) && (data[15].fvalue < (float)-1.7114901543)) {
              result[0] += -0.028577495;
            } else {
              result[0] += -0.053659488;
            }
          }
        } else {
          result[0] += -0.008071466;
        }
      }
    } else {
      result[0] += 0.012221206;
    }
  } else {
    if ( (data[5].missing != -1) && (data[5].fvalue < (float)-0.48074766994)) {
      if ( (data[3].missing != -1) && (data[3].fvalue < (float)-0.8880417943)) {
        result[0] += -0.0020570748;
      } else {
        if ( (data[5].missing != -1) && (data[5].fvalue < (float)-0.67105346918)) {
          if ( (data[5].missing != -1) && (data[5].fvalue < (float)-0.7584643364)) {
            result[0] += 0.055512637;
          } else {
            result[0] += 0.019855466;
          }
        } else {
          result[0] += 0.067733735;
        }
      }
    } else {
      if ( (data[11].missing != -1) && (data[11].fvalue < (float)-0.23627480865)) {
        if ( (data[8].missing != -1) && (data[8].fvalue < (float)-0.21821188927)) {
          result[0] += -0.010955206;
        } else {
          if ( (data[10].missing != -1) && (data[10].fvalue < (float)-1.2233704329)) {
            result[0] += 0.013739376;
          } else {
            if ( (data[12].missing != -1) && (data[12].fvalue < (float)-0.278218925)) {
              result[0] += 0.03186937;
            } else {
              result[0] += 0.076054715;
            }
          }
        }
      } else {
        if ( (data[7].missing != -1) && (data[7].fvalue < (float)-0.52645915747)) {
          if ( (data[7].missing != -1) && (data[7].fvalue < (float)-1.4372395277)) {
            result[0] += -0.031727582;
          } else {
            if ( (data[10].missing != -1) && (data[10].fvalue < (float)-0.75739496946)) {
              if ( (data[16].missing != -1) && (data[16].fvalue < (float)0.021485496312)) {
                result[0] += -0.045055952;
              } else {
                result[0] += 0.02715995;
              }
            } else {
              if ( (data[11].missing != -1) && (data[11].fvalue < (float)0.00019615572819)) {
                result[0] += 0.0600694;
              } else {
                result[0] += 0.02710223;
              }
            }
          }
        } else {
          if ( (data[13].missing != -1) && (data[13].fvalue < (float)0.97630155087)) {
            if ( (data[5].missing != -1) && (data[5].fvalue < (float)-0.27472487092)) {
              if ( (data[7].missing != -1) && (data[7].fvalue < (float)-0.22810104489)) {
                result[0] += 0.039324723;
              } else {
                result[0] += -0.016823297;
              }
            } else {
              if ( (data[9].missing != -1) && (data[9].fvalue < (float)0.4173142314)) {
                result[0] += -0.054127026;
              } else {
                result[0] += -0.015611376;
              }
            }
          } else {
            result[0] += 0.045506738;
          }
        }
      }
    }
  }
  if ( (data[0].missing != -1) && (data[0].fvalue < (float)-1.2417032719)) {
    if ( (data[8].missing != -1) && (data[8].fvalue < (float)-0.21625265479)) {
      if ( (data[8].missing != -1) && (data[8].fvalue < (float)-0.21940748394)) {
        result[1] += 0.0642791;
      } else {
        if ( (data[11].missing != -1) && (data[11].fvalue < (float)-0.26674380898)) {
          result[1] += 0.007735979;
        } else {
          result[1] += 0.056473386;
        }
      }
    } else {
      if ( (data[11].missing != -1) && (data[11].fvalue < (float)-0.25700798631)) {
        result[1] += -0.037050266;
      } else {
        result[1] += 0.023124753;
      }
    }
  } else {
    if ( (data[13].missing != -1) && (data[13].fvalue < (float)1.0023117065)) {
      if ( (data[8].missing != -1) && (data[8].fvalue < (float)0.7459179759)) {
        if ( (data[16].missing != -1) && (data[16].fvalue < (float)-0.076920159161)) {
          result[1] += -0.0299851;
        } else {
          result[1] += -0.05071361;
        }
      } else {
        result[1] += -0.028980577;
      }
    } else {
      if ( (data[7].missing != -1) && (data[7].fvalue < (float)1.5187627077)) {
        if ( (data[8].missing != -1) && (data[8].fvalue < (float)-0.20033873618)) {
          if ( (data[7].missing != -1) && (data[7].fvalue < (float)0.37159153819)) {
            result[1] += 0.022330346;
          } else {
            if ( (data[13].missing != -1) && (data[13].fvalue < (float)1.5052392483)) {
              result[1] += 0.07509057;
            } else {
              result[1] += 0.039212786;
            }
          }
        } else {
          result[1] += -0.027620647;
        }
      } else {
        result[1] += -0.040922876;
      }
    }
  }
  if ( (data[3].missing != -1) && (data[3].fvalue < (float)0.19738391042)) {
    if ( (data[7].missing != -1) && (data[7].fvalue < (float)-0.6713218689)) {
      if ( (data[6].missing != -1) && (data[6].fvalue < (float)-0.39624726772)) {
        if ( (data[0].missing != -1) && (data[0].fvalue < (float)0.8779335022)) {
          result[2] += -0.057936497;
        } else {
          result[2] += -0.022968544;
        }
      } else {
        if ( (data[12].missing != -1) && (data[12].fvalue < (float)0.99250650406)) {
          if ( (data[11].missing != -1) && (data[11].fvalue < (float)-0.17039236426)) {
            result[2] += 0.012170083;
          } else {
            result[2] += 0.063170575;
          }
        } else {
          if ( (data[11].missing != -1) && (data[11].fvalue < (float)-0.18427316844)) {
            result[2] += -0.053934164;
          } else {
            result[2] += 0.015381648;
          }
        }
      }
    } else {
      if ( (data[3].missing != -1) && (data[3].fvalue < (float)-1.0088604689)) {
        if ( (data[0].missing != -1) && (data[0].fvalue < (float)0.10080797225)) {
          result[2] += 0.062401075;
        } else {
          if ( (data[14].missing != -1) && (data[14].fvalue < (float)0.45792663097)) {
            result[2] += -0.013917334;
          } else {
            if ( (data[16].missing != -1) && (data[16].fvalue < (float)0.023408813402)) {
              result[2] += 0.06098516;
            } else {
              result[2] += 0.024631293;
            }
          }
        }
      } else {
        if ( (data[5].missing != -1) && (data[5].fvalue < (float)-0.045041881502)) {
          if ( (data[7].missing != -1) && (data[7].fvalue < (float)-0.32512119412)) {
            if ( (data[10].missing != -1) && (data[10].fvalue < (float)-0.8168155551)) {
              result[2] += 0.025670191;
            } else {
              result[2] += -0.051129848;
            }
          } else {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)-0.31944227219)) {
              if ( (data[11].missing != -1) && (data[11].fvalue < (float)-0.26018977165)) {
                result[2] += -0.001737326;
              } else {
                result[2] += 0.04545353;
              }
            } else {
              if ( (data[16].missing != -1) && (data[16].fvalue < (float)0.022231683135)) {
                result[2] += -0.031185502;
              } else {
                result[2] += 0.037194494;
              }
            }
          }
        } else {
          if ( (data[0].missing != -1) && (data[0].fvalue < (float)-0.41554325819)) {
            result[2] += -0.007199257;
          } else {
            if ( (data[7].missing != -1) && (data[7].fvalue < (float)-0.52645915747)) {
              result[2] += 0.009423099;
            } else {
              if ( (data[13].missing != -1) && (data[13].fvalue < (float)-0.72119164467)) {
                result[2] += 0.037077483;
              } else {
                result[2] += 0.06404866;
              }
            }
          }
        }
      }
    }
  } else {
    if ( (data[5].missing != -1) && (data[5].fvalue < (float)2.770565033)) {
      if ( (data[11].missing != -1) && (data[11].fvalue < (float)-0.27120104432)) {
        if ( (data[8].missing != -1) && (data[8].fvalue < (float)-0.22037357092)) {
          result[2] += -0.033427726;
        } else {
          result[2] += 0.0032154508;
        }
      } else {
        if ( (data[3].missing != -1) && (data[3].fvalue < (float)0.35766488314)) {
          if ( (data[8].missing != -1) && (data[8].fvalue < (float)-0.10686820745)) {
            result[2] += 0.008519764;
          } else {
            result[2] += -0.03731991;
          }
        } else {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)-0.29118299484)) {
            if ( (data[10].missing != -1) && (data[10].fvalue < (float)1.0253105164)) {
              result[2] += 0.00052889733;
            } else {
              result[2] += -0.052076515;
            }
          } else {
            result[2] += -0.054461867;
          }
        }
      }
    } else {
      result[2] += 0.02148176;
    }
  }
  if ( (data[8].missing != -1) && (data[8].fvalue < (float)-0.20999103785)) {
    if ( (data[12].missing != -1) && (data[12].fvalue < (float)-1.4625700712)) {
      result[3] += -0.010609784;
    } else {
      if ( (data[13].missing != -1) && (data[13].fvalue < (float)0.21936330199)) {
        if ( (data[12].missing != -1) && (data[12].fvalue < (float)-0.033750686795)) {
          result[3] += 0.00023252769;
        } else {
          result[3] += -0.047879938;
        }
      } else {
        result[3] += -0.05080871;
      }
    }
  } else {
    if ( (data[10].missing != -1) && (data[10].fvalue < (float)0.3943721056)) {
      if ( (data[1].missing != -1) && (data[1].fvalue < (float)-1.4659063816)) {
        if ( (data[3].missing != -1) && (data[3].fvalue < (float)0.22197172046)) {
          result[3] += -0.00022430264;
        } else {
          result[3] += 0.068090916;
        }
      } else {
        if ( (data[12].missing != -1) && (data[12].fvalue < (float)1.020488739)) {
          if ( (data[1].missing != -1) && (data[1].fvalue < (float)0.43742504716)) {
            result[3] += -0.052320458;
          } else {
            if ( (data[8].missing != -1) && (data[8].fvalue < (float)0.011566273868)) {
              if ( (data[10].missing != -1) && (data[10].fvalue < (float)-0.39254391193)) {
                result[3] += -0.044182118;
              } else {
                result[3] += -0.013394812;
              }
            } else {
              result[3] += 0.0070876963;
            }
          }
        } else {
          if ( (data[11].missing != -1) && (data[11].fvalue < (float)-0.2043402344)) {
            result[3] += -0.05067883;
          } else {
            if ( (data[6].missing != -1) && (data[6].fvalue < (float)-0.024934647605)) {
              result[3] += 0.06827942;
            } else {
              result[3] += -0.010996572;
            }
          }
        }
      }
    } else {
      if ( (data[12].missing != -1) && (data[12].fvalue < (float)0.9569453001)) {
        if ( (data[5].missing != -1) && (data[5].fvalue < (float)-0.39605548978)) {
          result[3] += -0.036506917;
        } else {
          if ( (data[8].missing != -1) && (data[8].fvalue < (float)0.12710408866)) {
            if ( (data[13].missing != -1) && (data[13].fvalue < (float)1.1907502413)) {
              if ( (data[3].missing != -1) && (data[3].fvalue < (float)0.66696953773)) {
                result[3] += 0.013846627;
              } else {
                result[3] += 0.058429696;
              }
            } else {
              result[3] += -0.000902191;
            }
          } else {
            result[3] += -0.011704877;
          }
        }
      } else {
        result[3] += 0.060031928;
      }
    }
  }
  if ( (data[9].missing != -1) && (data[9].fvalue < (float)-0.084286130965)) {
    if ( (data[6].missing != -1) && (data[6].fvalue < (float)-0.71604603529)) {
      if ( (data[6].missing != -1) && (data[6].fvalue < (float)-1.0408135653)) {
        result[0] += -0.009680335;
      } else {
        result[0] += 0.041701045;
      }
    } else {
      if ( (data[5].missing != -1) && (data[5].fvalue < (float)-0.52645909786)) {
        result[0] += 0.015274443;
      } else {
        if ( (data[16].missing != -1) && (data[16].fvalue < (float)0.063959240913)) {
          if ( (data[11].missing != -1) && (data[11].fvalue < (float)-0.23818291724)) {
            result[0] += -0.052788366;
          } else {
            if ( (data[12].missing != -1) && (data[12].fvalue < (float)-0.42817589641)) {
              result[0] += -0.003925718;
            } else {
              result[0] += -0.043633547;
            }
          }
        } else {
          result[0] += -0.011780488;
        }
      }
    }
  } else {
    if ( (data[5].missing != -1) && (data[5].fvalue < (float)-0.38476032019)) {
      if ( (data[11].missing != -1) && (data[11].fvalue < (float)-0.25700798631)) {
        result[0] += 0.06375096;
      } else {
        if ( (data[10].missing != -1) && (data[10].fvalue < (float)-0.85419273376)) {
          result[0] += -0.04221024;
        } else {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)0.905631423)) {
            if ( (data[5].missing != -1) && (data[5].fvalue < (float)-0.47404417396)) {
              result[0] += 0.058347043;
            } else {
              if ( (data[10].missing != -1) && (data[10].fvalue < (float)-0.20835523307)) {
                result[0] += 0.0027704334;
              } else {
                result[0] += 0.052617896;
              }
            }
          } else {
            result[0] += -0.0071188645;
          }
        }
      }
    } else {
      if ( (data[11].missing != -1) && (data[11].fvalue < (float)-0.21514505148)) {
        if ( (data[8].missing != -1) && (data[8].fvalue < (float)-0.18866866827)) {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)-0.5254278779)) {
            result[0] += -0.026214976;
          } else {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)0.22197172046)) {
              result[0] += 0.031271037;
            } else {
              result[0] += -0.0063225627;
            }
          }
        } else {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)-0.67488336563)) {
            result[0] += 0.07788531;
          } else {
            result[0] += 0.04141518;
          }
        }
      } else {
        if ( (data[6].missing != -1) && (data[6].fvalue < (float)0.902148664)) {
          if ( (data[11].missing != -1) && (data[11].fvalue < (float)0.35976424813)) {
            if ( (data[0].missing != -1) && (data[0].fvalue < (float)0.91816103458)) {
              if ( (data[5].missing != -1) && (data[5].fvalue < (float)-0.29404851794)) {
                result[0] += -0.010409045;
              } else {
                result[0] += -0.05262295;
              }
            } else {
              result[0] += 0.0018032404;
            }
          } else {
            if ( (data[7].missing != -1) && (data[7].fvalue < (float)-1.0147081614)) {
              result[0] += -0.036489207;
            } else {
              if ( (data[6].missing != -1) && (data[6].fvalue < (float)-0.53989446163)) {
                result[0] += 0.06687414;
              } else {
                result[0] += 0.01703392;
              }
            }
          }
        } else {
          if ( (data[5].missing != -1) && (data[5].fvalue < (float)1.667165041)) {
            result[0] += 0.047961738;
          } else {
            result[0] += -0.007887087;
          }
        }
      }
    }
  }
  if ( (data[0].missing != -1) && (data[0].fvalue < (float)-0.72903758287)) {
    if ( (data[8].missing != -1) && (data[8].fvalue < (float)-0.21625265479)) {
      if ( (data[0].missing != -1) && (data[0].fvalue < (float)-1.4190087318)) {
        result[1] += 0.062492695;
      } else {
        if ( (data[13].missing != -1) && (data[13].fvalue < (float)1.0127772093)) {
          result[1] += -0.03111263;
        } else {
          if ( (data[16].missing != -1) && (data[16].fvalue < (float)-0.0053107207641)) {
            result[1] += 0.0574052;
          } else {
            result[1] += 0.010150185;
          }
        }
      }
    } else {
      if ( (data[11].missing != -1) && (data[11].fvalue < (float)-0.26094642282)) {
        result[1] += -0.046397332;
      } else {
        if ( (data[13].missing != -1) && (data[13].fvalue < (float)1.0546414852)) {
          result[1] += -0.023936426;
        } else {
          if ( (data[11].missing != -1) && (data[11].fvalue < (float)-0.24631793797)) {
            result[1] += 0.054375716;
          } else {
            result[1] += 0.000100904224;
          }
        }
      }
    }
  } else {
    if ( (data[13].missing != -1) && (data[13].fvalue < (float)1.1907502413)) {
      if ( (data[8].missing != -1) && (data[8].fvalue < (float)-0.21754899621)) {
        result[1] += -0.02857089;
      } else {
        if ( (data[16].missing != -1) && (data[16].fvalue < (float)-0.083572477102)) {
          result[1] += -0.029140046;
        } else {
          if ( (data[8].missing != -1) && (data[8].fvalue < (float)0.67834442854)) {
            result[1] += -0.05161163;
          } else {
            result[1] += -0.030457456;
          }
        }
      }
    } else {
      result[1] += -0.011898162;
    }
  }
  if ( (data[3].missing != -1) && (data[3].fvalue < (float)-0.23574270308)) {
    if ( (data[6].missing != -1) && (data[6].fvalue < (float)-0.85984605551)) {
      if ( (data[8].missing != -1) && (data[8].fvalue < (float)-0.18555359542)) {
        if ( (data[7].missing != -1) && (data[7].fvalue < (float)-0.36191350222)) {
          result[2] += -0.0047041927;
        } else {
          result[2] += 0.045955103;
        }
      } else {
        result[2] += -0.045433506;
      }
    } else {
      if ( (data[16].missing != -1) && (data[16].fvalue < (float)0.039527323097)) {
        if ( (data[16].missing != -1) && (data[16].fvalue < (float)-0.019200904295)) {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)-1.3735567331)) {
            if ( (data[8].missing != -1) && (data[8].fvalue < (float)-0.21416629851)) {
              result[2] += 0.056967176;
            } else {
              result[2] += 0.030586591;
            }
          } else {
            if ( (data[5].missing != -1) && (data[5].fvalue < (float)-0.25001698732)) {
              result[2] += -0.03093319;
            } else {
              result[2] += 0.013570047;
            }
          }
        } else {
          if ( (data[16].missing != -1) && (data[16].fvalue < (float)0.003278326476)) {
            result[2] += 0.06148369;
          } else {
            if ( (data[16].missing != -1) && (data[16].fvalue < (float)0.0056078946218)) {
              result[2] += -0.0022547483;
            } else {
              if ( (data[0].missing != -1) && (data[0].fvalue < (float)0.50772362947)) {
                result[2] += 0.053177297;
              } else {
                result[2] += 0.01785938;
              }
            }
          }
        }
      } else {
        if ( (data[7].missing != -1) && (data[7].fvalue < (float)-0.40445777774)) {
          if ( (data[5].missing != -1) && (data[5].fvalue < (float)0.35202333331)) {
            result[2] += -0.051945865;
          } else {
            result[2] += 0.035835918;
          }
        } else {
          result[2] += 0.051712465;
        }
      }
    }
  } else {
    if ( (data[5].missing != -1) && (data[5].fvalue < (float)0.07551728934)) {
      if ( (data[8].missing != -1) && (data[8].fvalue < (float)-0.2076972276)) {
        if ( (data[0].missing != -1) && (data[0].fvalue < (float)-1.1717795134)) {
          if ( (data[5].missing != -1) && (data[5].fvalue < (float)-0.39324355125)) {
            result[2] += 0.0018465938;
          } else {
            result[2] += -0.050979495;
          }
        } else {
          result[2] += 0.040730648;
        }
      } else {
        if ( (data[5].missing != -1) && (data[5].fvalue < (float)-0.14828489721)) {
          if ( (data[16].missing != -1) && (data[16].fvalue < (float)0.045002944767)) {
            result[2] += -0.054599244;
          } else {
            result[2] += -0.029846767;
          }
        } else {
          if ( (data[5].missing != -1) && (data[5].fvalue < (float)-0.093005672097)) {
            result[2] += -0.001046512;
          } else {
            result[2] += -0.05479188;
          }
        }
      }
    } else {
      if ( (data[10].missing != -1) && (data[10].fvalue < (float)0.3943721056)) {
        if ( (data[8].missing != -1) && (data[8].fvalue < (float)-0.0026854926255)) {
          if ( (data[11].missing != -1) && (data[11].fvalue < (float)-0.15352447331)) {
            result[2] += 0.0047132582;
          } else {
            result[2] += 0.069930635;
          }
        } else {
          result[2] += -0.02055347;
        }
      } else {
        if ( (data[6].missing != -1) && (data[6].fvalue < (float)1.3929610252)) {
          if ( (data[12].missing != -1) && (data[12].fvalue < (float)-0.22976674139)) {
            result[2] += -0.059356954;
          } else {
            result[2] += -0.029973565;
          }
        } else {
          if ( (data[11].missing != -1) && (data[11].fvalue < (float)-0.22773696482)) {
            result[2] += 0.0391355;
          } else {
            result[2] += -0.0020322632;
          }
        }
      }
    }
  }
  if ( (data[8].missing != -1) && (data[8].fvalue < (float)-0.19386467338)) {
    if ( (data[3].missing != -1) && (data[3].fvalue < (float)-0.13882735372)) {
      if ( (data[8].missing != -1) && (data[8].fvalue < (float)-0.20474259555)) {
        result[3] += -0.05188724;
      } else {
        result[3] += -0.03268067;
      }
    } else {
      if ( (data[7].missing != -1) && (data[7].fvalue < (float)1.3343400955)) {
        if ( (data[6].missing != -1) && (data[6].fvalue < (float)-0.34593945742)) {
          result[3] += 0.062061626;
        } else {
          if ( (data[14].missing != -1) && (data[14].fvalue < (float)-1.1276538372)) {
            result[3] += 0.047066715;
          } else {
            if ( (data[8].missing != -1) && (data[8].fvalue < (float)-0.20999103785)) {
              result[3] += -0.050902285;
            } else {
              result[3] += -0.00088572374;
            }
          }
        }
      } else {
        result[3] += -0.047577605;
      }
    }
  } else {
    if ( (data[0].missing != -1) && (data[0].fvalue < (float)0.12998342514)) {
      if ( (data[2].missing != -1) && (data[2].fvalue < (float)-0.069487594068)) {
        result[3] += 0.08636809;
      } else {
        if ( (data[10].missing != -1) && (data[10].fvalue < (float)-0.044407144189)) {
          result[3] += -0.019377196;
        } else {
          if ( (data[13].missing != -1) && (data[13].fvalue < (float)0.31720897555)) {
            if ( (data[8].missing != -1) && (data[8].fvalue < (float)-0.14603298903)) {
              result[3] += 0.073937014;
            } else {
              result[3] += 0.038179785;
            }
          } else {
            if ( (data[5].missing != -1) && (data[5].fvalue < (float)-0.067341715097)) {
              result[3] += -0.016504133;
            } else {
              result[3] += 0.036910035;
            }
          }
        }
      }
    } else {
      if ( (data[12].missing != -1) && (data[12].fvalue < (float)0.99250650406)) {
        if ( (data[16].missing != -1) && (data[16].fvalue < (float)0.057731293142)) {
          if ( (data[8].missing != -1) && (data[8].fvalue < (float)-0.12956127524)) {
            result[3] += -0.051018722;
          } else {
            if ( (data[0].missing != -1) && (data[0].fvalue < (float)0.8779335022)) {
              if ( (data[7].missing != -1) && (data[7].fvalue < (float)-0.68664479256)) {
                result[3] += 0.04260929;
              } else {
                result[3] += -0.02087812;
              }
            } else {
              if ( (data[12].missing != -1) && (data[12].fvalue < (float)0.61849540472)) {
                result[3] += -0.05578829;
              } else {
                result[3] += -0.020856664;
              }
            }
          }
        } else {
          result[3] += 0.021829022;
        }
      } else {
        if ( (data[11].missing != -1) && (data[11].fvalue < (float)-0.073542796075)) {
          if ( (data[10].missing != -1) && (data[10].fvalue < (float)-0.70290791988)) {
            result[3] += 0.0072996574;
          } else {
            result[3] += -0.049524352;
          }
        } else {
          if ( (data[5].missing != -1) && (data[5].fvalue < (float)0.42740702629)) {
            if ( (data[14].missing != -1) && (data[14].fvalue < (float)1.0973778963)) {
              result[3] += 0.08915659;
            } else {
              result[3] += 0.035143066;
            }
          } else {
            result[3] += 0.012957498;
          }
        }
      }
    }
  }
  if ( (data[9].missing != -1) && (data[9].fvalue < (float)-0.25189942122)) {
    if ( (data[6].missing != -1) && (data[6].fvalue < (float)-0.77784711123)) {
      if ( (data[7].missing != -1) && (data[7].fvalue < (float)0.11927641928)) {
        result[0] += 0.03278056;
      } else {
        result[0] += -0.02374661;
      }
    } else {
      if ( (data[8].missing != -1) && (data[8].fvalue < (float)-0.20325836539)) {
        if ( (data[15].missing != -1) && (data[15].fvalue < (float)-1.6580876112)) {
          result[0] += -0.028167719;
        } else {
          result[0] += -0.04976459;
        }
      } else {
        if ( (data[3].missing != -1) && (data[3].fvalue < (float)0.15496069193)) {
          result[0] += -0.04425629;
        } else {
          result[0] += 0.015507743;
        }
      }
    }
  } else {
    if ( (data[5].missing != -1) && (data[5].fvalue < (float)-0.48074766994)) {
      if ( (data[10].missing != -1) && (data[10].fvalue < (float)-0.89206194878)) {
        result[0] += 0.0028103788;
      } else {
        if ( (data[3].missing != -1) && (data[3].fvalue < (float)0.905631423)) {
          result[0] += 0.05769993;
        } else {
          result[0] += 0.005093335;
        }
      }
    } else {
      if ( (data[16].missing != -1) && (data[16].fvalue < (float)0.026114549488)) {
        if ( (data[2].missing != -1) && (data[2].fvalue < (float)0.09942278266)) {
          if ( (data[11].missing != -1) && (data[11].fvalue < (float)-0.15529032052)) {
            result[0] += -0.023868065;
          } else {
            result[0] += -0.062069952;
          }
        } else {
          if ( (data[5].missing != -1) && (data[5].fvalue < (float)0.14037305117)) {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)-0.94150280952)) {
              result[0] += -0.02834407;
            } else {
              if ( (data[7].missing != -1) && (data[7].fvalue < (float)-0.46015933156)) {
                result[0] += 0.045486543;
              } else {
                result[0] += 0.0076240413;
              }
            }
          } else {
            if ( (data[6].missing != -1) && (data[6].fvalue < (float)0.80245423317)) {
              result[0] += -0.05168588;
            } else {
              result[0] += 0.009073649;
            }
          }
        }
      } else {
        if ( (data[5].missing != -1) && (data[5].fvalue < (float)2.1140592098)) {
          if ( (data[13].missing != -1) && (data[13].fvalue < (float)0.68191283941)) {
            if ( (data[7].missing != -1) && (data[7].fvalue < (float)-0.27611738443)) {
              if ( (data[7].missing != -1) && (data[7].fvalue < (float)-0.98458909988)) {
                result[0] += 0.008202895;
              } else {
                result[0] += 0.046638247;
              }
            } else {
              result[0] += -0.016202284;
            }
          } else {
            result[0] += 0.07108464;
          }
        } else {
          result[0] += -0.023960974;
        }
      }
    }
  }
  if ( (data[0].missing != -1) && (data[0].fvalue < (float)-0.72903758287)) {
    if ( (data[8].missing != -1) && (data[8].fvalue < (float)-0.21379387379)) {
      if ( (data[0].missing != -1) && (data[0].fvalue < (float)-1.4317775965)) {
        if ( (data[10].missing != -1) && (data[10].fvalue < (float)2.0270805359)) {
          result[1] += 0.05757154;
        } else {
          result[1] += 0.025019718;
        }
      } else {
        if ( (data[13].missing != -1) && (data[13].fvalue < (float)1.0023117065)) {
          result[1] += -0.034031566;
        } else {
          if ( (data[11].missing != -1) && (data[11].fvalue < (float)-0.26641893387)) {
            result[1] += -6.916678e-05;
          } else {
            if ( (data[15].missing != -1) && (data[15].fvalue < (float)-1.1132361889)) {
              result[1] += 0.03559456;
            } else {
              result[1] += 0.07158319;
            }
          }
        }
      }
    } else {
      if ( (data[5].missing != -1) && (data[5].fvalue < (float)0.37600171566)) {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)-1.2842303514)) {
          result[1] += 0.01021682;
        } else {
          result[1] += -0.041792292;
        }
      } else {
        result[1] += 0.028405974;
      }
    }
  } else {
    if ( (data[5].missing != -1) && (data[5].fvalue < (float)2.770565033)) {
      if ( (data[9].missing != -1) && (data[9].fvalue < (float)-0.012810664251)) {
        if ( (data[5].missing != -1) && (data[5].fvalue < (float)-0.14628712833)) {
          if ( (data[15].missing != -1) && (data[15].fvalue < (float)0.41556563973)) {
            result[1] += -0.051098537;
          } else {
            result[1] += -0.028024813;
          }
        } else {
          if ( (data[5].missing != -1) && (data[5].fvalue < (float)0.016682459041)) {
            result[1] += 0.0042099725;
          } else {
            result[1] += -0.03927156;
          }
        }
      } else {
        if ( (data[8].missing != -1) && (data[8].fvalue < (float)0.65596228838)) {
          result[1] += -0.052369464;
        } else {
          result[1] += -0.029379595;
        }
      }
    } else {
      result[1] += 0.006483619;
    }
  }
  if ( (data[3].missing != -1) && (data[3].fvalue < (float)0.046019136906)) {
    if ( (data[12].missing != -1) && (data[12].fvalue < (float)1.0508075953)) {
      if ( (data[10].missing != -1) && (data[10].fvalue < (float)-0.40548467636)) {
        if ( (data[16].missing != -1) && (data[16].fvalue < (float)0.040303114802)) {
          if ( (data[11].missing != -1) && (data[11].fvalue < (float)-0.21764399111)) {
            if ( (data[8].missing != -1) && (data[8].fvalue < (float)-0.18396270275)) {
              if ( (data[10].missing != -1) && (data[10].fvalue < (float)-0.8168155551)) {
                result[2] += 0.055788953;
              } else {
                result[2] += 0.019332038;
              }
            } else {
              if ( (data[6].missing != -1) && (data[6].fvalue < (float)-0.30391672254)) {
                result[2] += -0.058086444;
              } else {
                result[2] += -0.004826404;
              }
            }
          } else {
            if ( (data[5].missing != -1) && (data[5].fvalue < (float)-0.36462178826)) {
              result[2] += 0.030415762;
            } else {
              if ( (data[8].missing != -1) && (data[8].fvalue < (float)-0.19121129811)) {
                result[2] += 0.036755275;
              } else {
                result[2] += 0.06670678;
              }
            }
          }
        } else {
          if ( (data[5].missing != -1) && (data[5].fvalue < (float)-0.045041881502)) {
            result[2] += -0.028964808;
          } else {
            result[2] += 0.037125222;
          }
        }
      } else {
        if ( (data[7].missing != -1) && (data[7].fvalue < (float)-0.36191350222)) {
          result[2] += -0.035971113;
        } else {
          if ( (data[13].missing != -1) && (data[13].fvalue < (float)1.0956714153)) {
            if ( (data[2].missing != -1) && (data[2].fvalue < (float)0.13006652892)) {
              result[2] += -0.003752121;
            } else {
              if ( (data[3].missing != -1) && (data[3].fvalue < (float)-0.25331288576)) {
                result[2] += 0.06303237;
              } else {
                result[2] += 0.022513498;
              }
            }
          } else {
            if ( (data[12].missing != -1) && (data[12].fvalue < (float)-0.38744193316)) {
              result[2] += 0.024643922;
            } else {
              result[2] += -0.03588042;
            }
          }
        }
      }
    } else {
      if ( (data[5].missing != -1) && (data[5].fvalue < (float)-0.434255898)) {
        result[2] += -0.048800662;
      } else {
        if ( (data[3].missing != -1) && (data[3].fvalue < (float)-0.74387270212)) {
          result[2] += 0.025055844;
        } else {
          result[2] += -0.025890365;
        }
      }
    }
  } else {
    if ( (data[5].missing != -1) && (data[5].fvalue < (float)2.770565033)) {
      if ( (data[13].missing != -1) && (data[13].fvalue < (float)0.77784532309)) {
        if ( (data[7].missing != -1) && (data[7].fvalue < (float)-0.62278866768)) {
          result[2] += -0.052274194;
        } else {
          if ( (data[5].missing != -1) && (data[5].fvalue < (float)-0.24522577226)) {
            if ( (data[6].missing != -1) && (data[6].fvalue < (float)-0.0047599058598)) {
              result[2] += -0.049667742;
            } else {
              result[2] += -0.014682541;
            }
          } else {
            if ( (data[8].missing != -1) && (data[8].fvalue < (float)-0.18555359542)) {
              result[2] += 0.050640155;
            } else {
              if ( (data[10].missing != -1) && (data[10].fvalue < (float)0.09049295634)) {
                result[2] += 0.029761115;
              } else {
                result[2] += -0.033541877;
              }
            }
          }
        }
      } else {
        result[2] += -0.054796483;
      }
    } else {
      if ( (data[16].missing != -1) && (data[16].fvalue < (float)0.075354173779)) {
        result[2] += 0.042014252;
      } else {
        result[2] += -0.015369989;
      }
    }
  }
  if ( (data[3].missing != -1) && (data[3].fvalue < (float)-0.28086575866)) {
    if ( (data[8].missing != -1) && (data[8].fvalue < (float)0.011566273868)) {
      if ( (data[2].missing != -1) && (data[2].fvalue < (float)-0.093078397214)) {
        result[3] += 0.0045161885;
      } else {
        if ( (data[5].missing != -1) && (data[5].fvalue < (float)-0.50142669678)) {
          result[3] += -0.018851032;
        } else {
          if ( (data[10].missing != -1) && (data[10].fvalue < (float)-0.27807244658)) {
            result[3] += -0.049643464;
          } else {
            result[3] += -0.028282395;
          }
        }
      }
    } else {
      result[3] += 0.042424563;
    }
  } else {
    if ( (data[7].missing != -1) && (data[7].fvalue < (float)1.4132658243)) {
      if ( (data[6].missing != -1) && (data[6].fvalue < (float)1.0815649033)) {
        if ( (data[5].missing != -1) && (data[5].fvalue < (float)-0.47404417396)) {
          if ( (data[11].missing != -1) && (data[11].fvalue < (float)-0.17124177516)) {
            result[3] += -0.049410887;
          } else {
            result[3] += 0.007747487;
          }
        } else {
          if ( (data[2].missing != -1) && (data[2].fvalue < (float)-0.27207258344)) {
            if ( (data[16].missing != -1) && (data[16].fvalue < (float)0.027447698638)) {
              result[3] += 0.09005823;
            } else {
              result[3] += 0.040811524;
            }
          } else {
            if ( (data[8].missing != -1) && (data[8].fvalue < (float)-0.21849969029)) {
              result[3] += -0.030094538;
            } else {
              if ( (data[15].missing != -1) && (data[15].fvalue < (float)-0.60108989477)) {
                result[3] += 0.05088336;
              } else {
                result[3] += 0.011574938;
              }
            }
          }
        }
      } else {
        if ( (data[6].missing != -1) && (data[6].fvalue < (float)1.5168052912)) {
          result[3] += -0.053336587;
        } else {
          result[3] += -0.00028470025;
        }
      }
    } else {
      if ( (data[16].missing != -1) && (data[16].fvalue < (float)0.023775557056)) {
        result[3] += -0.050156463;
      } else {
        result[3] += -0.014147535;
      }
    }
  }
  if ( (data[9].missing != -1) && (data[9].fvalue < (float)-0.2431563288)) {
    if ( (data[6].missing != -1) && (data[6].fvalue < (float)-0.85984605551)) {
      if ( (data[5].missing != -1) && (data[5].fvalue < (float)-0.37114152312)) {
        result[0] += 0.023342839;
      } else {
        result[0] += -0.007967475;
      }
    } else {
      if ( (data[8].missing != -1) && (data[8].fvalue < (float)-0.17319056392)) {
        if ( (data[16].missing != -1) && (data[16].fvalue < (float)0.018835080788)) {
          if ( (data[1].missing != -1) && (data[1].fvalue < (float)-0.0079344278201)) {
            result[0] += -0.020627035;
          } else {
            result[0] += -0.05137368;
          }
        } else {
          if ( (data[16].missing != -1) && (data[16].fvalue < (float)0.035433422774)) {
            result[0] += 0.0033746844;
          } else {
            if ( (data[11].missing != -1) && (data[11].fvalue < (float)-0.23459285498)) {
              result[0] += -0.014581114;
            } else {
              result[0] += -0.051154096;
            }
          }
        }
      } else {
        result[0] += 0.0008001471;
      }
    }
  } else {
    if ( (data[5].missing != -1) && (data[5].fvalue < (float)-0.0057680280879)) {
      if ( (data[12].missing != -1) && (data[12].fvalue < (float)-0.11233115941)) {
        if ( (data[3].missing != -1) && (data[3].fvalue < (float)-0.14372131228)) {
          result[0] += -0.04648795;
        } else {
          if ( (data[2].missing != -1) && (data[2].fvalue < (float)0.18482021987)) {
            result[0] += -0.026926404;
          } else {
            if ( (data[5].missing != -1) && (data[5].fvalue < (float)-0.30293393135)) {
              if ( (data[6].missing != -1) && (data[6].fvalue < (float)-0.68742364645)) {
                result[0] += 0.023042215;
              } else {
                result[0] += 0.0639306;
              }
            } else {
              result[0] += -0.0036116398;
            }
          }
        }
      } else {
        if ( (data[11].missing != -1) && (data[11].fvalue < (float)-0.21514505148)) {
          if ( (data[10].missing != -1) && (data[10].fvalue < (float)-1.2233704329)) {
            result[0] += 0.02275866;
          } else {
            if ( (data[2].missing != -1) && (data[2].fvalue < (float)-0.12937602401)) {
              result[0] += 0.035846874;
            } else {
              result[0] += 0.071119994;
            }
          }
        } else {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)-0.82810521126)) {
            result[0] += -0.05045717;
          } else {
            if ( (data[12].missing != -1) && (data[12].fvalue < (float)0.54590326548)) {
              if ( (data[7].missing != -1) && (data[7].fvalue < (float)-0.4675784409)) {
                result[0] += 0.06066394;
              } else {
                result[0] += 0.02142847;
              }
            } else {
              if ( (data[6].missing != -1) && (data[6].fvalue < (float)-0.3284959197)) {
                result[0] += -0.010513261;
              } else {
                result[0] += 0.047078393;
              }
            }
          }
        }
      }
    } else {
      if ( (data[6].missing != -1) && (data[6].fvalue < (float)1.6842880249)) {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)1.2356156111)) {
          if ( (data[6].missing != -1) && (data[6].fvalue < (float)0.91162836552)) {
            if ( (data[6].missing != -1) && (data[6].fvalue < (float)0.041582621634)) {
              result[0] += -0.0025246579;
            } else {
              result[0] += -0.055788994;
            }
          } else {
            if ( (data[5].missing != -1) && (data[5].fvalue < (float)1.667165041)) {
              result[0] += 0.0101642115;
            } else {
              result[0] += -0.041176617;
            }
          }
        } else {
          if ( (data[11].missing != -1) && (data[11].fvalue < (float)0.17148371041)) {
            result[0] += 0.07049214;
          } else {
            result[0] += -0.02876558;
          }
        }
      } else {
        result[0] += 0.052262932;
      }
    }
  }
  if ( (data[0].missing != -1) && (data[0].fvalue < (float)-0.42872259021)) {
    if ( (data[6].missing != -1) && (data[6].fvalue < (float)0.041582621634)) {
      if ( (data[13].missing != -1) && (data[13].fvalue < (float)0.92155778408)) {
        result[1] += -0.05365886;
      } else {
        if ( (data[0].missing != -1) && (data[0].fvalue < (float)-1.3415445089)) {
          if ( (data[8].missing != -1) && (data[8].fvalue < (float)-0.2195726186)) {
            result[1] += 0.052326765;
          } else {
            result[1] += 0.014174341;
          }
        } else {
          result[1] += -0.016959941;
        }
      }
    } else {
      if ( (data[13].missing != -1) && (data[13].fvalue < (float)1.9595717192)) {
        if ( (data[13].missing != -1) && (data[13].fvalue < (float)0.98732662201)) {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)1.2915084362)) {
            result[1] += -0.01504987;
          } else {
            if ( (data[10].missing != -1) && (data[10].fvalue < (float)1.7807122469)) {
              result[1] += 0.062409867;
            } else {
              result[1] += 0.027006725;
            }
          }
        } else {
          if ( (data[5].missing != -1) && (data[5].fvalue < (float)-0.38476032019)) {
            result[1] += 0.009407076;
          } else {
            if ( (data[0].missing != -1) && (data[0].fvalue < (float)-0.84336972237)) {
              result[1] += 0.061494123;
            } else {
              result[1] += 0.024971185;
            }
          }
        }
      } else {
        result[1] += -0.021424394;
      }
    }
  } else {
    if ( (data[16].missing != -1) && (data[16].fvalue < (float)-0.076920159161)) {
      result[1] += -0.028702348;
    } else {
      if ( (data[14].missing != -1) && (data[14].fvalue < (float)1.0648896694)) {
        result[1] += -0.052803695;
      } else {
        result[1] += -0.0280107;
      }
    }
  }
  if ( (data[3].missing != -1) && (data[3].fvalue < (float)0.046019136906)) {
    if ( (data[3].missing != -1) && (data[3].fvalue < (float)-1.1763842106)) {
      if ( (data[7].missing != -1) && (data[7].fvalue < (float)-0.75742077827)) {
        result[2] += -0.016275812;
      } else {
        result[2] += 0.055047106;
      }
    } else {
      if ( (data[5].missing != -1) && (data[5].fvalue < (float)-0.323004812)) {
        if ( (data[14].missing != -1) && (data[14].fvalue < (float)0.20521055162)) {
          if ( (data[5].missing != -1) && (data[5].fvalue < (float)-0.44419804215)) {
            result[2] += 0.05160394;
          } else {
            result[2] += -0.01656506;
          }
        } else {
          if ( (data[11].missing != -1) && (data[11].fvalue < (float)-0.25888600945)) {
            result[2] += -0.07001767;
          } else {
            if ( (data[10].missing != -1) && (data[10].fvalue < (float)-0.89206194878)) {
              result[2] += 0.014153694;
            } else {
              if ( (data[7].missing != -1) && (data[7].fvalue < (float)-0.47102257609)) {
                result[2] += -0.05315804;
              } else {
                result[2] += -0.0024439474;
              }
            }
          }
        }
      } else {
        if ( (data[12].missing != -1) && (data[12].fvalue < (float)0.11260662228)) {
          if ( (data[13].missing != -1) && (data[13].fvalue < (float)0.79729151726)) {
            if ( (data[5].missing != -1) && (data[5].fvalue < (float)-0.096374280751)) {
              if ( (data[12].missing != -1) && (data[12].fvalue < (float)-0.096406295896)) {
                result[2] += 0.047998324;
              } else {
                result[2] += -0.025232954;
              }
            } else {
              result[2] += 0.054673474;
            }
          } else {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)-0.36298695207)) {
              result[2] += 0.025720304;
            } else {
              result[2] += -0.014212057;
            }
          }
        } else {
          if ( (data[11].missing != -1) && (data[11].fvalue < (float)-0.18233262002)) {
            if ( (data[10].missing != -1) && (data[10].fvalue < (float)-0.87539976835)) {
              if ( (data[8].missing != -1) && (data[8].fvalue < (float)-0.18396270275)) {
                result[2] += 0.03525583;
              } else {
                result[2] += -0.023536555;
              }
            } else {
              result[2] += -0.035412237;
            }
          } else {
            if ( (data[10].missing != -1) && (data[10].fvalue < (float)-0.61503177881)) {
              result[2] += 0.05099718;
            } else {
              result[2] += -0.01119691;
            }
          }
        }
      }
    }
  } else {
    if ( (data[5].missing != -1) && (data[5].fvalue < (float)0.64061391354)) {
      if ( (data[8].missing != -1) && (data[8].fvalue < (float)-0.10686820745)) {
        if ( (data[10].missing != -1) && (data[10].fvalue < (float)0.018758390099)) {
          result[2] += 0.03052769;
        } else {
          if ( (data[11].missing != -1) && (data[11].fvalue < (float)-0.27120104432)) {
            result[2] += -0.009564324;
          } else {
            if ( (data[10].missing != -1) && (data[10].fvalue < (float)0.44645428658)) {
              result[2] += -0.01933532;
            } else {
              if ( (data[10].missing != -1) && (data[10].fvalue < (float)1.551840663)) {
                result[2] += -0.05362553;
              } else {
                result[2] += -0.02941679;
              }
            }
          }
        }
      } else {
        result[2] += -0.050781965;
      }
    } else {
      if ( (data[3].missing != -1) && (data[3].fvalue < (float)1.1059601307)) {
        if ( (data[11].missing != -1) && (data[11].fvalue < (float)-0.12864370644)) {
          result[2] += 0.006754789;
        } else {
          result[2] += 0.04880917;
        }
      } else {
        result[2] += -0.04243691;
      }
    }
  }
  if ( (data[8].missing != -1) && (data[8].fvalue < (float)-0.21442578733)) {
    if ( (data[3].missing != -1) && (data[3].fvalue < (float)1.276345253)) {
      result[3] += -0.048622545;
    } else {
      result[3] += -0.008559749;
    }
  } else {
    if ( (data[10].missing != -1) && (data[10].fvalue < (float)0.17146204412)) {
      if ( (data[1].missing != -1) && (data[1].fvalue < (float)-1.332406044)) {
        result[3] += 0.031136204;
      } else {
        if ( (data[12].missing != -1) && (data[12].fvalue < (float)0.99250650406)) {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)-0.47115305066)) {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)-1.0088604689)) {
              result[3] += -0.030446721;
            } else {
              result[3] += 0.029952494;
            }
          } else {
            if ( (data[16].missing != -1) && (data[16].fvalue < (float)0.045002944767)) {
              if ( (data[5].missing != -1) && (data[5].fvalue < (float)-0.30477491021)) {
                result[3] += -0.021900088;
              } else {
                result[3] += -0.052597106;
              }
            } else {
              result[3] += -0.007336834;
            }
          }
        } else {
          if ( (data[13].missing != -1) && (data[13].fvalue < (float)-1.1107548475)) {
            if ( (data[8].missing != -1) && (data[8].fvalue < (float)0.036357682198)) {
              result[3] += -0.0035446198;
            } else {
              result[3] += -0.04187146;
            }
          } else {
            result[3] += 0.058374316;
          }
        }
      }
    } else {
      if ( (data[6].missing != -1) && (data[6].fvalue < (float)1.0815649033)) {
        if ( (data[2].missing != -1) && (data[2].fvalue < (float)0.038101356477)) {
          if ( (data[7].missing != -1) && (data[7].fvalue < (float)0.042801488191)) {
            result[3] += 0.07485916;
          } else {
            result[3] += 0.035291355;
          }
        } else {
          if ( (data[12].missing != -1) && (data[12].fvalue < (float)0.98061102629)) {
            if ( (data[11].missing != -1) && (data[11].fvalue < (float)-0.1759417206)) {
              if ( (data[13].missing != -1) && (data[13].fvalue < (float)0.43640583754)) {
                result[3] += 0.063781135;
              } else {
                result[3] += 0.013980823;
              }
            } else {
              if ( (data[10].missing != -1) && (data[10].fvalue < (float)0.71433472633)) {
                result[3] += -0.04149865;
              } else {
                result[3] += 0.011631921;
              }
            }
          } else {
            result[3] += 0.04966082;
          }
        }
      } else {
        if ( (data[6].missing != -1) && (data[6].fvalue < (float)1.6329715252)) {
          result[3] += -0.041470688;
        } else {
          result[3] += 0.0052704904;
        }
      }
    }
  }
  if ( (data[9].missing != -1) && (data[9].fvalue < (float)-0.54771786928)) {
    if ( (data[8].missing != -1) && (data[8].fvalue < (float)-0.20207519829)) {
      if ( (data[6].missing != -1) && (data[6].fvalue < (float)-0.71604603529)) {
        result[0] += -0.0046743643;
      } else {
        result[0] += -0.052157838;
      }
    } else {
      if ( (data[3].missing != -1) && (data[3].fvalue < (float)0.15496069193)) {
        result[0] += -0.037980214;
      } else {
        result[0] += 0.03643137;
      }
    }
  } else {
    if ( (data[5].missing != -1) && (data[5].fvalue < (float)-0.35539877415)) {
      if ( (data[10].missing != -1) && (data[10].fvalue < (float)-1.2046103477)) {
        result[0] += -0.03567208;
      } else {
        if ( (data[3].missing != -1) && (data[3].fvalue < (float)0.905631423)) {
          if ( (data[15].missing != -1) && (data[15].fvalue < (float)0.20022596419)) {
            result[0] += 0.014026153;
          } else {
            if ( (data[10].missing != -1) && (data[10].fvalue < (float)-0.85419273376)) {
              result[0] += 0.022739034;
            } else {
              if ( (data[8].missing != -1) && (data[8].fvalue < (float)-0.11255250871)) {
                result[0] += 0.06750997;
              } else {
                result[0] += 0.04748256;
              }
            }
          }
        } else {
          result[0] += -0.0019001488;
        }
      }
    } else {
      if ( (data[14].missing != -1) && (data[14].fvalue < (float)0.77326214314)) {
        if ( (data[13].missing != -1) && (data[13].fvalue < (float)0.98732662201)) {
          if ( (data[5].missing != -1) && (data[5].fvalue < (float)-0.1428437233)) {
            if ( (data[5].missing != -1) && (data[5].fvalue < (float)-0.21281275153)) {
              if ( (data[11].missing != -1) && (data[11].fvalue < (float)-0.13807588816)) {
                result[0] += -0.038105145;
              } else {
                result[0] += 0.037065793;
              }
            } else {
              result[0] += 0.05731486;
            }
          } else {
            if ( (data[16].missing != -1) && (data[16].fvalue < (float)0.076959848404)) {
              if ( (data[7].missing != -1) && (data[7].fvalue < (float)-0.0094966925681)) {
                result[0] += -0.048341956;
              } else {
                result[0] += -0.022265783;
              }
            } else {
              result[0] += 0.0042562685;
            }
          }
        } else {
          if ( (data[12].missing != -1) && (data[12].fvalue < (float)-1.1332252026)) {
            result[0] += -0.021043347;
          } else {
            result[0] += 0.06685879;
          }
        }
      } else {
        if ( (data[7].missing != -1) && (data[7].fvalue < (float)-1.3269523382)) {
          result[0] += -0.03148727;
        } else {
          if ( (data[11].missing != -1) && (data[11].fvalue < (float)-0.16323727369)) {
            result[0] += 0.058326703;
          } else {
            if ( (data[8].missing != -1) && (data[8].fvalue < (float)-0.0026854926255)) {
              result[0] += -0.02499052;
            } else {
              result[0] += 0.035798553;
            }
          }
        }
      }
    }
  }
  if ( (data[0].missing != -1) && (data[0].fvalue < (float)-0.42872259021)) {
    if ( (data[0].missing != -1) && (data[0].fvalue < (float)-1.3415445089)) {
      if ( (data[3].missing != -1) && (data[3].fvalue < (float)1.3708487749)) {
        if ( (data[5].missing != -1) && (data[5].fvalue < (float)-0.3588539362)) {
          result[1] += 0.033264827;
        } else {
          result[1] += 0.06099204;
        }
      } else {
        if ( (data[6].missing != -1) && (data[6].fvalue < (float)0.68587446213)) {
          result[1] += -0.0045404914;
        } else {
          result[1] += 0.04762831;
        }
      }
    } else {
      if ( (data[13].missing != -1) && (data[13].fvalue < (float)1.0310770273)) {
        if ( (data[3].missing != -1) && (data[3].fvalue < (float)0.29908499122)) {
          result[1] += -0.01372733;
        } else {
          result[1] += -0.05400191;
        }
      } else {
        if ( (data[8].missing != -1) && (data[8].fvalue < (float)-0.21338579059)) {
          if ( (data[5].missing != -1) && (data[5].fvalue < (float)-0.32606995106)) {
            result[1] += 0.0067797066;
          } else {
            result[1] += 0.059022695;
          }
        } else {
          if ( (data[13].missing != -1) && (data[13].fvalue < (float)1.412607789)) {
            result[1] += 0.03721531;
          } else {
            result[1] += -0.035969336;
          }
        }
      }
    }
  } else {
    if ( (data[8].missing != -1) && (data[8].fvalue < (float)-0.19492897391)) {
      if ( (data[15].missing != -1) && (data[15].fvalue < (float)0.33075129986)) {
        result[1] += -0.049360145;
      } else {
        result[1] += -0.01959291;
      }
    } else {
      result[1] += -0.052360017;
    }
  }
  if ( (data[3].missing != -1) && (data[3].fvalue < (float)0.19738391042)) {
    if ( (data[3].missing != -1) && (data[3].fvalue < (float)-1.2579658031)) {
      if ( (data[8].missing != -1) && (data[8].fvalue < (float)-0.18918262422)) {
        result[2] += 0.05738854;
      } else {
        result[2] += 0.01532805;
      }
    } else {
      if ( (data[12].missing != -1) && (data[12].fvalue < (float)0.5944904089)) {
        if ( (data[5].missing != -1) && (data[5].fvalue < (float)-0.323004812)) {
          if ( (data[1].missing != -1) && (data[1].fvalue < (float)-1.0143922567)) {
            result[2] += 0.039895307;
          } else {
            if ( (data[10].missing != -1) && (data[10].fvalue < (float)-0.71496868134)) {
              result[2] += 0.014375276;
            } else {
              if ( (data[16].missing != -1) && (data[16].fvalue < (float)0.020611567423)) {
                result[2] += -0.050773293;
              } else {
                result[2] += 0.004354544;
              }
            }
          }
        } else {
          if ( (data[0].missing != -1) && (data[0].fvalue < (float)-0.41554325819)) {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)-0.31944227219)) {
              result[2] += 0.04526107;
            } else {
              if ( (data[10].missing != -1) && (data[10].fvalue < (float)0.47851505876)) {
                result[2] += -0.053185772;
              } else {
                result[2] += 0.0025632752;
              }
            }
          } else {
            if ( (data[12].missing != -1) && (data[12].fvalue < (float)-0.027997098863)) {
              if ( (data[0].missing != -1) && (data[0].fvalue < (float)0.4889344871)) {
                result[2] += 0.060590293;
              } else {
                result[2] += 0.022951948;
              }
            } else {
              if ( (data[5].missing != -1) && (data[5].fvalue < (float)-0.11917228997)) {
                result[2] += -0.012799156;
              } else {
                result[2] += 0.042282563;
              }
            }
          }
        }
      } else {
        if ( (data[16].missing != -1) && (data[16].fvalue < (float)0.040303114802)) {
          if ( (data[11].missing != -1) && (data[11].fvalue < (float)-0.25888600945)) {
            result[2] += -0.057257053;
          } else {
            if ( (data[10].missing != -1) && (data[10].fvalue < (float)-0.89206194878)) {
              result[2] += 0.052362807;
            } else {
              result[2] += -0.02362633;
            }
          }
        } else {
          result[2] += -0.05131687;
        }
      }
    }
  } else {
    if ( (data[5].missing != -1) && (data[5].fvalue < (float)1.667165041)) {
      if ( (data[13].missing != -1) && (data[13].fvalue < (float)0.90779399872)) {
        if ( (data[8].missing != -1) && (data[8].fvalue < (float)-0.10686820745)) {
          if ( (data[16].missing != -1) && (data[16].fvalue < (float)0.026114549488)) {
            if ( (data[5].missing != -1) && (data[5].fvalue < (float)-0.25318676233)) {
              result[2] += -0.019976724;
            } else {
              result[2] += 0.051318534;
            }
          } else {
            result[2] += -0.043505706;
          }
        } else {
          result[2] += -0.049020912;
        }
      } else {
        result[2] += -0.052164424;
      }
    } else {
      if ( (data[10].missing != -1) && (data[10].fvalue < (float)0.79747533798)) {
        result[2] += 0.034467258;
      } else {
        result[2] += -0.027062863;
      }
    }
  }
  if ( (data[8].missing != -1) && (data[8].fvalue < (float)-0.20063112676)) {
    if ( (data[10].missing != -1) && (data[10].fvalue < (float)0.17146204412)) {
      if ( (data[9].missing != -1) && (data[9].fvalue < (float)-0.52676534653)) {
        if ( (data[11].missing != -1) && (data[11].fvalue < (float)-0.26087924838)) {
          result[3] += -0.0123246005;
        } else {
          result[3] += -0.045583326;
        }
      } else {
        result[3] += -0.051695473;
      }
    } else {
      if ( (data[6].missing != -1) && (data[6].fvalue < (float)-0.33870640397)) {
        result[3] += 0.03282282;
      } else {
        if ( (data[8].missing != -1) && (data[8].fvalue < (float)-0.21470879018)) {
          if ( (data[5].missing != -1) && (data[5].fvalue < (float)-0.15679863095)) {
            result[3] += -0.04895846;
          } else {
            result[3] += -0.012185884;
          }
        } else {
          if ( (data[11].missing != -1) && (data[11].fvalue < (float)-0.25058192015)) {
            result[3] += 0.028165808;
          } else {
            result[3] += -0.037124954;
          }
        }
      }
    }
  } else {
    if ( (data[3].missing != -1) && (data[3].fvalue < (float)0.84174287319)) {
      if ( (data[4].missing != -1) && (data[4].fvalue < (float)-1.5712811947)) {
        result[3] += 0.057207473;
      } else {
        if ( (data[13].missing != -1) && (data[13].fvalue < (float)0.79729151726)) {
          if ( (data[12].missing != -1) && (data[12].fvalue < (float)0.64476305246)) {
            if ( (data[10].missing != -1) && (data[10].fvalue < (float)-0.46583351493)) {
              result[3] += -0.05036188;
            } else {
              if ( (data[10].missing != -1) && (data[10].fvalue < (float)0.29595884681)) {
                result[3] += 0.0029054773;
              } else {
                result[3] += -0.04991112;
              }
            }
          } else {
            if ( (data[11].missing != -1) && (data[11].fvalue < (float)-0.2367080003)) {
              result[3] += -0.045829684;
            } else {
              if ( (data[9].missing != -1) && (data[9].fvalue < (float)1.1172224283)) {
                result[3] += 0.04747651;
              } else {
                result[3] += -0.020695575;
              }
            }
          }
        } else {
          result[3] += 0.03646136;
        }
      }
    } else {
      if ( (data[6].missing != -1) && (data[6].fvalue < (float)-0.54653578997)) {
        if ( (data[12].missing != -1) && (data[12].fvalue < (float)0.9569453001)) {
          if ( (data[7].missing != -1) && (data[7].fvalue < (float)0.11927641928)) {
            result[3] += -0.004700545;
          } else {
            result[3] += 0.04982931;
          }
        } else {
          result[3] += 0.061067134;
        }
      } else {
        if ( (data[13].missing != -1) && (data[13].fvalue < (float)0.38713166118)) {
          result[3] += -0.016774727;
        } else {
          result[3] += 0.03166317;
        }
      }
    }
  }
  if ( (data[9].missing != -1) && (data[9].fvalue < (float)-0.54771786928)) {
    if ( (data[5].missing != -1) && (data[5].fvalue < (float)-0.43106788397)) {
      result[0] += 0.004015697;
    } else {
      if ( (data[16].missing != -1) && (data[16].fvalue < (float)0.047710336745)) {
        result[0] += -0.045206275;
      } else {
        result[0] += -0.014757608;
      }
    }
  } else {
    if ( (data[3].missing != -1) && (data[3].fvalue < (float)-1.1763842106)) {
      result[0] += -0.04638758;
    } else {
      if ( (data[11].missing != -1) && (data[11].fvalue < (float)-0.25357052684)) {
        if ( (data[0].missing != -1) && (data[0].fvalue < (float)-1.2690514326)) {
          result[0] += 0.0034989405;
        } else {
          if ( (data[11].missing != -1) && (data[11].fvalue < (float)-0.2615224123)) {
            result[0] += 0.06838724;
          } else {
            if ( (data[8].missing != -1) && (data[8].fvalue < (float)-0.18658703566)) {
              result[0] += 0.0053093247;
            } else {
              result[0] += 0.06867679;
            }
          }
        }
      } else {
        if ( (data[7].missing != -1) && (data[7].fvalue < (float)-0.49739542603)) {
          if ( (data[10].missing != -1) && (data[10].fvalue < (float)-0.97513496876)) {
            if ( (data[16].missing != -1) && (data[16].fvalue < (float)0.037433069199)) {
              result[0] += -0.053585302;
            } else {
              result[0] += 0.026945129;
            }
          } else {
            if ( (data[11].missing != -1) && (data[11].fvalue < (float)-0.16889058053)) {
              if ( (data[3].missing != -1) && (data[3].fvalue < (float)-0.29025861621)) {
                result[0] += 0.07030033;
              } else {
                result[0] += 0.04205701;
              }
            } else {
              if ( (data[1].missing != -1) && (data[1].fvalue < (float)-0.091976709664)) {
                result[0] += 0.057342853;
              } else {
                result[0] += 0.0033917527;
              }
            }
          }
        } else {
          if ( (data[5].missing != -1) && (data[5].fvalue < (float)-0.41925215721)) {
            result[0] += 0.04139121;
          } else {
            if ( (data[13].missing != -1) && (data[13].fvalue < (float)0.98732662201)) {
              if ( (data[14].missing != -1) && (data[14].fvalue < (float)0.5324190259)) {
                result[0] += -0.020496288;
              } else {
                result[0] += -0.058744367;
              }
            } else {
              if ( (data[16].missing != -1) && (data[16].fvalue < (float)0.047710336745)) {
                result[0] += 0.06301012;
              } else {
                result[0] += -0.011224363;
              }
            }
          }
        }
      }
    }
  }
  if ( (data[0].missing != -1) && (data[0].fvalue < (float)-0.72903758287)) {
    if ( (data[16].missing != -1) && (data[16].fvalue < (float)0.0042847408913)) {
      if ( (data[5].missing != -1) && (data[5].fvalue < (float)-0.41068267822)) {
        result[1] += 0.012719144;
      } else {
        if ( (data[0].missing != -1) && (data[0].fvalue < (float)-1.4190087318)) {
          result[1] += 0.057123717;
        } else {
          result[1] += 0.020604787;
        }
      }
    } else {
      if ( (data[6].missing != -1) && (data[6].fvalue < (float)0.18741211295)) {
        result[1] += -0.05167502;
      } else {
        if ( (data[13].missing != -1) && (data[13].fvalue < (float)1.6964927912)) {
          if ( (data[5].missing != -1) && (data[5].fvalue < (float)0.37600171566)) {
            if ( (data[5].missing != -1) && (data[5].fvalue < (float)-0.17693051696)) {
              result[1] += 0.030225608;
            } else {
              result[1] += -0.022810811;
            }
          } else {
            if ( (data[12].missing != -1) && (data[12].fvalue < (float)-1.3175876141)) {
              result[1] += 0.022158414;
            } else {
              result[1] += 0.06376121;
            }
          }
        } else {
          result[1] += -0.027007705;
        }
      }
    }
  } else {
    if ( (data[13].missing != -1) && (data[13].fvalue < (float)1.1907502413)) {
      if ( (data[9].missing != -1) && (data[9].fvalue < (float)-0.012810664251)) {
        if ( (data[12].missing != -1) && (data[12].fvalue < (float)0.26557740569)) {
          if ( (data[1].missing != -1) && (data[1].fvalue < (float)-0.091976709664)) {
            result[1] += -0.027719444;
          } else {
            result[1] += -0.049582284;
          }
        } else {
          result[1] += -0.01718526;
        }
      } else {
        if ( (data[15].missing != -1) && (data[15].fvalue < (float)1.2198802233)) {
          result[1] += -0.051522274;
        } else {
          result[1] += -0.027611265;
        }
      }
    } else {
      result[1] += -0.0015083522;
    }
  }
  if ( (data[3].missing != -1) && (data[3].fvalue < (float)0.19738391042)) {
    if ( (data[7].missing != -1) && (data[7].fvalue < (float)-0.44216892123)) {
      if ( (data[16].missing != -1) && (data[16].fvalue < (float)0.040303114802)) {
        if ( (data[6].missing != -1) && (data[6].fvalue < (float)-0.25756847858)) {
          if ( (data[10].missing != -1) && (data[10].fvalue < (float)-0.78995537758)) {
            if ( (data[12].missing != -1) && (data[12].fvalue < (float)1.0508075953)) {
              result[2] += 0.032493394;
            } else {
              result[2] += -0.039622113;
            }
          } else {
            result[2] += -0.04693016;
          }
        } else {
          if ( (data[11].missing != -1) && (data[11].fvalue < (float)-0.17039236426)) {
            if ( (data[10].missing != -1) && (data[10].fvalue < (float)-1.0384379625)) {
              result[2] += 0.043829802;
            } else {
              result[2] += -0.018597154;
            }
          } else {
            result[2] += 0.05808971;
          }
        }
      } else {
        if ( (data[5].missing != -1) && (data[5].fvalue < (float)0.20715114474)) {
          result[2] += -0.054959424;
        } else {
          result[2] += -0.00016106575;
        }
      }
    } else {
      if ( (data[0].missing != -1) && (data[0].fvalue < (float)-0.41554325819)) {
        if ( (data[3].missing != -1) && (data[3].fvalue < (float)-0.31944227219)) {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)-1.227191925)) {
            result[2] += -0.0122664645;
          } else {
            result[2] += 0.06086528;
          }
        } else {
          if ( (data[10].missing != -1) && (data[10].fvalue < (float)0.57694214582)) {
            result[2] += -0.051915497;
          } else {
            result[2] += 0.013443592;
          }
        }
      } else {
        if ( (data[6].missing != -1) && (data[6].fvalue < (float)0.14617690444)) {
          if ( (data[10].missing != -1) && (data[10].fvalue < (float)-0.46583351493)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)-0.54771786928)) {
              result[2] += 0.055071533;
            } else {
              if ( (data[11].missing != -1) && (data[11].fvalue < (float)-0.23699438572)) {
                result[2] += -0.034781404;
              } else {
                result[2] += 0.042528942;
              }
            }
          } else {
            if ( (data[7].missing != -1) && (data[7].fvalue < (float)-0.15793018043)) {
              result[2] += -0.018449476;
            } else {
              result[2] += 0.016476505;
            }
          }
        } else {
          if ( (data[7].missing != -1) && (data[7].fvalue < (float)-0.32512119412)) {
            result[2] += 0.02592956;
          } else {
            if ( (data[13].missing != -1) && (data[13].fvalue < (float)-0.64628189802)) {
              result[2] += 0.028126795;
            } else {
              result[2] += 0.057669718;
            }
          }
        }
      }
    }
  } else {
    if ( (data[6].missing != -1) && (data[6].fvalue < (float)1.5472633839)) {
      if ( (data[5].missing != -1) && (data[5].fvalue < (float)-0.24164952338)) {
        if ( (data[5].missing != -1) && (data[5].fvalue < (float)-0.50142669678)) {
          result[2] += -0.02356134;
        } else {
          result[2] += -0.05121736;
        }
      } else {
        if ( (data[3].missing != -1) && (data[3].fvalue < (float)1.0523011684)) {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)-0.29118299484)) {
            result[2] += 0.030360563;
          } else {
            if ( (data[11].missing != -1) && (data[11].fvalue < (float)-0.027360389009)) {
              result[2] += -0.043876667;
            } else {
              result[2] += 0.014016377;
            }
          }
        } else {
          result[2] += -0.05036494;
        }
      }
    } else {
      if ( (data[10].missing != -1) && (data[10].fvalue < (float)0.79747533798)) {
        result[2] += 0.034326565;
      } else {
        result[2] += -0.009112384;
      }
    }
  }
  if ( (data[3].missing != -1) && (data[3].fvalue < (float)-0.23574270308)) {
    if ( (data[8].missing != -1) && (data[8].fvalue < (float)0.011566273868)) {
      if ( (data[9].missing != -1) && (data[9].fvalue < (float)-0.91897934675)) {
        result[3] += -0.009259923;
      } else {
        if ( (data[8].missing != -1) && (data[8].fvalue < (float)-0.12956127524)) {
          if ( (data[5].missing != -1) && (data[5].fvalue < (float)-0.45429927111)) {
            result[3] += -0.024442082;
          } else {
            result[3] += -0.051713374;
          }
        } else {
          result[3] += -0.018917806;
        }
      }
    } else {
      result[3] += 0.041873943;
    }
  } else {
    if ( (data[7].missing != -1) && (data[7].fvalue < (float)1.4132658243)) {
      if ( (data[6].missing != -1) && (data[6].fvalue < (float)1.0815649033)) {
        if ( (data[2].missing != -1) && (data[2].fvalue < (float)-0.27207258344)) {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)1.1898226738)) {
            result[3] += 0.07562171;
          } else {
            result[3] += 0.024813881;
          }
        } else {
          if ( (data[1].missing != -1) && (data[1].fvalue < (float)-1.2598539591)) {
            if ( (data[12].missing != -1) && (data[12].fvalue < (float)-0.86229199171)) {
              result[3] += 0.06484364;
            } else {
              result[3] += 0.01344679;
            }
          } else {
            if ( (data[1].missing != -1) && (data[1].fvalue < (float)-0.0079344278201)) {
              result[3] += -0.04209018;
            } else {
              if ( (data[16].missing != -1) && (data[16].fvalue < (float)0.053103368729)) {
                result[3] += 0.0050223707;
              } else {
                result[3] += 0.050258912;
              }
            }
          }
        }
      } else {
        if ( (data[5].missing != -1) && (data[5].fvalue < (float)2.3154711723)) {
          result[3] += -0.04377809;
        } else {
          result[3] += 0.00039141864;
        }
      }
    } else {
      if ( (data[13].missing != -1) && (data[13].fvalue < (float)0.94390970469)) {
        result[3] += -0.026942596;
      } else {
        result[3] += -0.049782597;
      }
    }
  }
  if ( (data[0].missing != -1) && (data[0].fvalue < (float)0.12998342514)) {
    if ( (data[3].missing != -1) && (data[3].fvalue < (float)-0.33466351032)) {
      if ( (data[6].missing != -1) && (data[6].fvalue < (float)-0.5930570364)) {
        result[0] += -0.008116662;
      } else {
        result[0] += -0.052900787;
      }
    } else {
      if ( (data[3].missing != -1) && (data[3].fvalue < (float)0.54964464903)) {
        if ( (data[14].missing != -1) && (data[14].fvalue < (float)-2.0797002316)) {
          result[0] += 0.067201525;
        } else {
          if ( (data[5].missing != -1) && (data[5].fvalue < (float)-0.33703631163)) {
            result[0] += 0.03125113;
          } else {
            if ( (data[6].missing != -1) && (data[6].fvalue < (float)0.56968641281)) {
              result[0] += -0.050120484;
            } else {
              result[0] += 0.0097394055;
            }
          }
        }
      } else {
        if ( (data[8].missing != -1) && (data[8].fvalue < (float)-0.16773824394)) {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)-0.012810664251)) {
            result[0] += -0.04773967;
          } else {
            result[0] += -0.012375169;
          }
        } else {
          result[0] += 0.010130189;
        }
      }
    }
  } else {
    if ( (data[3].missing != -1) && (data[3].fvalue < (float)-1.2806309462)) {
      result[0] += -0.05068752;
    } else {
      if ( (data[11].missing != -1) && (data[11].fvalue < (float)-0.23699438572)) {
        if ( (data[1].missing != -1) && (data[1].fvalue < (float)-0.55968827009)) {
          result[0] += 0.023528036;
        } else {
          if ( (data[10].missing != -1) && (data[10].fvalue < (float)-0.82406896353)) {
            if ( (data[12].missing != -1) && (data[12].fvalue < (float)0.98061102629)) {
              result[0] += 0.011205459;
            } else {
              result[0] += 0.06866911;
            }
          } else {
            if ( (data[7].missing != -1) && (data[7].fvalue < (float)-0.75742077827)) {
              result[0] += 0.04729762;
            } else {
              result[0] += 0.0822156;
            }
          }
        }
      } else {
        if ( (data[3].missing != -1) && (data[3].fvalue < (float)-0.14372131228)) {
          if ( (data[16].missing != -1) && (data[16].fvalue < (float)0.040853574872)) {
            if ( (data[12].missing != -1) && (data[12].fvalue < (float)0.53372818232)) {
              if ( (data[12].missing != -1) && (data[12].fvalue < (float)0.15007823706)) {
                result[0] += -0.030898675;
              } else {
                result[0] += 0.026972527;
              }
            } else {
              result[0] += -0.05094515;
            }
          } else {
            if ( (data[16].missing != -1) && (data[16].fvalue < (float)0.062331173569)) {
              result[0] += 0.056438025;
            } else {
              result[0] += 0.0069940696;
            }
          }
        } else {
          if ( (data[11].missing != -1) && (data[11].fvalue < (float)2.1478612423)) {
            if ( (data[5].missing != -1) && (data[5].fvalue < (float)0.07551728934)) {
              if ( (data[2].missing != -1) && (data[2].fvalue < (float)-0.069487594068)) {
                result[0] += 0.0009835445;
              } else {
                result[0] += 0.047531217;
              }
            } else {
              if ( (data[9].missing != -1) && (data[9].fvalue < (float)1.1172224283)) {
                result[0] += -0.03236353;
              } else {
                result[0] += 0.03170867;
              }
            }
          } else {
            result[0] += -0.029709715;
          }
        }
      }
    }
  }
  if ( (data[0].missing != -1) && (data[0].fvalue < (float)-0.72903758287)) {
    if ( (data[8].missing != -1) && (data[8].fvalue < (float)-0.21625265479)) {
      if ( (data[0].missing != -1) && (data[0].fvalue < (float)-1.4190087318)) {
        if ( (data[10].missing != -1) && (data[10].fvalue < (float)1.9740229845)) {
          result[1] += 0.05566385;
        } else {
          result[1] += 0.019679807;
        }
      } else {
        if ( (data[3].missing != -1) && (data[3].fvalue < (float)0.15496069193)) {
          result[1] += 0.048143983;
        } else {
          if ( (data[6].missing != -1) && (data[6].fvalue < (float)0.56968641281)) {
            result[1] += -0.036418434;
          } else {
            result[1] += 0.016529983;
          }
        }
      }
    } else {
      if ( (data[10].missing != -1) && (data[10].fvalue < (float)1.6442323923)) {
        if ( (data[11].missing != -1) && (data[11].fvalue < (float)-0.1723369211)) {
          if ( (data[0].missing != -1) && (data[0].fvalue < (float)-1.3338936567)) {
            result[1] += 0.021557845;
          } else {
            if ( (data[15].missing != -1) && (data[15].fvalue < (float)-0.56099760532)) {
              result[1] += -0.04274762;
            } else {
              result[1] += 0.005741934;
            }
          }
        } else {
          result[1] += 0.043008044;
        }
      } else {
        result[1] += -0.052194733;
      }
    }
  } else {
    if ( (data[13].missing != -1) && (data[13].fvalue < (float)1.2953075171)) {
      if ( (data[9].missing != -1) && (data[9].fvalue < (float)-0.012810664251)) {
        if ( (data[12].missing != -1) && (data[12].fvalue < (float)0.26557740569)) {
          if ( (data[1].missing != -1) && (data[1].fvalue < (float)-0.32800993323)) {
            result[1] += -0.02767232;
          } else {
            result[1] += -0.049112987;
          }
        } else {
          result[1] += -0.018546348;
        }
      } else {
        if ( (data[15].missing != -1) && (data[15].fvalue < (float)1.2198802233)) {
          result[1] += -0.051351406;
        } else {
          result[1] += -0.028409425;
        }
      }
    } else {
      result[1] += -0.002358087;
    }
  }
  if ( (data[3].missing != -1) && (data[3].fvalue < (float)0.19738391042)) {
    if ( (data[3].missing != -1) && (data[3].fvalue < (float)-0.95868659019)) {
      if ( (data[8].missing != -1) && (data[8].fvalue < (float)-0.16880448163)) {
        if ( (data[10].missing != -1) && (data[10].fvalue < (float)-0.79976952076)) {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)0.026954747736)) {
            result[2] += 0.05481528;
          } else {
            result[2] += 0.024919605;
          }
        } else {
          if ( (data[7].missing != -1) && (data[7].fvalue < (float)-0.098863959312)) {
            result[2] += -0.014631984;
          } else {
            result[2] += 0.049575306;
          }
        }
      } else {
        result[2] += -0.0013113137;
      }
    } else {
      if ( (data[5].missing != -1) && (data[5].fvalue < (float)-0.13766139746)) {
        if ( (data[11].missing != -1) && (data[11].fvalue < (float)-0.25845351815)) {
          if ( (data[8].missing != -1) && (data[8].fvalue < (float)-0.21569140255)) {
            result[2] += -0.017038424;
          } else {
            result[2] += -0.06599855;
          }
        } else {
          if ( (data[12].missing != -1) && (data[12].fvalue < (float)-0.033750686795)) {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)-0.31944227219)) {
              result[2] += 0.05990407;
            } else {
              result[2] += -0.015509369;
            }
          } else {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)0.6549052)) {
              if ( (data[3].missing != -1) && (data[3].fvalue < (float)-0.48395431042)) {
                result[2] += -0.019470725;
              } else {
                result[2] += -0.051898707;
              }
            } else {
              result[2] += 0.0042488505;
            }
          }
        }
      } else {
        if ( (data[11].missing != -1) && (data[11].fvalue < (float)-0.18233262002)) {
          if ( (data[12].missing != -1) && (data[12].fvalue < (float)0.36614254117)) {
            if ( (data[13].missing != -1) && (data[13].fvalue < (float)1.0310770273)) {
              if ( (data[5].missing != -1) && (data[5].fvalue < (float)-0.045041881502)) {
                result[2] += 0.018041171;
              } else {
                result[2] += 0.049892552;
              }
            } else {
              result[2] += -0.017539086;
            }
          } else {
            result[2] += -0.038137823;
          }
        } else {
          if ( (data[8].missing != -1) && (data[8].fvalue < (float)0.045544706285)) {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)-0.38037589192)) {
              if ( (data[8].missing != -1) && (data[8].fvalue < (float)-0.14253479242)) {
                result[2] += 0.052646156;
              } else {
                result[2] += 0.01383303;
              }
            } else {
              result[2] += 0.058562707;
            }
          } else {
            result[2] += 0.0085351495;
          }
        }
      }
    }
  } else {
    if ( (data[6].missing != -1) && (data[6].fvalue < (float)1.5472633839)) {
      if ( (data[13].missing != -1) && (data[13].fvalue < (float)0.98732662201)) {
        if ( (data[7].missing != -1) && (data[7].fvalue < (float)-0.62278866768)) {
          result[2] += -0.049621973;
        } else {
          if ( (data[12].missing != -1) && (data[12].fvalue < (float)-1.168685317)) {
            result[2] += -0.04649494;
          } else {
            if ( (data[0].missing != -1) && (data[0].fvalue < (float)-0.72903758287)) {
              result[2] += 0.038635083;
            } else {
              if ( (data[5].missing != -1) && (data[5].fvalue < (float)-0.13195152581)) {
                result[2] += -0.047431357;
              } else {
                result[2] += 0.012587356;
              }
            }
          }
        }
      } else {
        result[2] += -0.052170057;
      }
    } else {
      result[2] += 0.014542351;
    }
  }
  if ( (data[10].missing != -1) && (data[10].fvalue < (float)-0.44024544954)) {
    if ( (data[12].missing != -1) && (data[12].fvalue < (float)0.64476305246)) {
      if ( (data[10].missing != -1) && (data[10].fvalue < (float)-0.62923032045)) {
        result[3] += -0.04982024;
      } else {
        result[3] += -0.025232507;
      }
    } else {
      if ( (data[11].missing != -1) && (data[11].fvalue < (float)-0.2367080003)) {
        result[3] += -0.048192706;
      } else {
        if ( (data[3].missing != -1) && (data[3].fvalue < (float)-0.84289908409)) {
          result[3] += 0.06684278;
        } else {
          result[3] += -0.004803851;
        }
      }
    }
  } else {
    if ( (data[13].missing != -1) && (data[13].fvalue < (float)0.98732662201)) {
      if ( (data[2].missing != -1) && (data[2].fvalue < (float)-0.069487594068)) {
        if ( (data[6].missing != -1) && (data[6].fvalue < (float)-0.024934647605)) {
          result[3] += 0.06661167;
        } else {
          result[3] += 0.016658232;
        }
      } else {
        if ( (data[15].missing != -1) && (data[15].fvalue < (float)-0.60108989477)) {
          if ( (data[7].missing != -1) && (data[7].fvalue < (float)1.1951078176)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)-0.0675939098)) {
              if ( (data[9].missing != -1) && (data[9].fvalue < (float)-0.61510449648)) {
                result[3] += 0.032097977;
              } else {
                result[3] += 0.07041751;
              }
            } else {
              result[3] += 0.012987663;
            }
          } else {
            result[3] += -0.015603343;
          }
        } else {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)1.0671726465)) {
            if ( (data[10].missing != -1) && (data[10].fvalue < (float)-0.2608923018)) {
              result[3] += 0.032429405;
            } else {
              if ( (data[5].missing != -1) && (data[5].fvalue < (float)-0.0057680280879)) {
                result[3] += -0.04525746;
              } else {
                result[3] += -0.008115775;
              }
            }
          } else {
            if ( (data[14].missing != -1) && (data[14].fvalue < (float)0.90477436781)) {
              result[3] += 0.05417205;
            } else {
              if ( (data[11].missing != -1) && (data[11].fvalue < (float)1.734384656)) {
                result[3] += -0.028233072;
              } else {
                result[3] += 0.054153897;
              }
            }
          }
        }
      }
    } else {
      if ( (data[12].missing != -1) && (data[12].fvalue < (float)-0.31976079941)) {
        if ( (data[10].missing != -1) && (data[10].fvalue < (float)1.5083014965)) {
          result[3] += -0.046165988;
        } else {
          result[3] += -0.0156177925;
        }
      } else {
        result[3] += 0.031108787;
      }
    }
  }
  if ( (data[0].missing != -1) && (data[0].fvalue < (float)0.13511149585)) {
    if ( (data[3].missing != -1) && (data[3].fvalue < (float)-0.49645930529)) {
      if ( (data[9].missing != -1) && (data[9].fvalue < (float)-0.91897934675)) {
        result[0] += -0.017725682;
      } else {
        result[0] += -0.05324238;
      }
    } else {
      if ( (data[3].missing != -1) && (data[3].fvalue < (float)1.1343532801)) {
        if ( (data[12].missing != -1) && (data[12].fvalue < (float)-1.2861771584)) {
          if ( (data[0].missing != -1) && (data[0].fvalue < (float)-1.2690514326)) {
            result[0] += 0.0040786327;
          } else {
            result[0] += 0.057641547;
          }
        } else {
          if ( (data[7].missing != -1) && (data[7].fvalue < (float)0.18711844087)) {
            result[0] += 0.049013965;
          } else {
            if ( (data[0].missing != -1) && (data[0].fvalue < (float)-0.88791364431)) {
              result[0] += -0.041563645;
            } else {
              if ( (data[0].missing != -1) && (data[0].fvalue < (float)-0.50663286448)) {
                result[0] += 0.021558393;
              } else {
                result[0] += -0.029328102;
              }
            }
          }
        }
      } else {
        if ( (data[0].missing != -1) && (data[0].fvalue < (float)-1.6992857456)) {
          result[0] += -0.020130662;
        } else {
          result[0] += -0.052568555;
        }
      }
    }
  } else {
    if ( (data[11].missing != -1) && (data[11].fvalue < (float)-0.23627480865)) {
      if ( (data[3].missing != -1) && (data[3].fvalue < (float)-1.1763842106)) {
        result[0] += -0.009277407;
      } else {
        if ( (data[13].missing != -1) && (data[13].fvalue < (float)-0.66813719273)) {
          if ( (data[12].missing != -1) && (data[12].fvalue < (float)1.020488739)) {
            if ( (data[10].missing != -1) && (data[10].fvalue < (float)-0.89206194878)) {
              result[0] += -0.002161982;
            } else {
              result[0] += 0.03800703;
            }
          } else {
            result[0] += 0.057836782;
          }
        } else {
          result[0] += 0.089042954;
        }
      }
    } else {
      if ( (data[10].missing != -1) && (data[10].fvalue < (float)-0.85419273376)) {
        if ( (data[10].missing != -1) && (data[10].fvalue < (float)-0.99737215042)) {
          if ( (data[5].missing != -1) && (data[5].fvalue < (float)-0.10935657471)) {
            result[0] += -0.054755855;
          } else {
            result[0] += -0.028692875;
          }
        } else {
          result[0] += -0.012726818;
        }
      } else {
        if ( (data[8].missing != -1) && (data[8].fvalue < (float)-0.15449695289)) {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)0.23856493831)) {
            result[0] += 3.787928e-05;
          } else {
            result[0] += -0.03437912;
          }
        } else {
          if ( (data[11].missing != -1) && (data[11].fvalue < (float)2.1478612423)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)0.94407975674)) {
              if ( (data[1].missing != -1) && (data[1].fvalue < (float)0.43742504716)) {
                result[0] += 0.051551927;
              } else {
                result[0] += -0.010556965;
              }
            } else {
              if ( (data[11].missing != -1) && (data[11].fvalue < (float)0.083271808922)) {
                result[0] += 0.055837393;
              } else {
                result[0] += 0.02153618;
              }
            }
          } else {
            result[0] += -0.026189229;
          }
        }
      }
    }
  }
  if ( (data[0].missing != -1) && (data[0].fvalue < (float)-0.42872259021)) {
    if ( (data[8].missing != -1) && (data[8].fvalue < (float)-0.21625265479)) {
      if ( (data[10].missing != -1) && (data[10].fvalue < (float)0.18442307413)) {
        result[1] += -0.011947208;
      } else {
        if ( (data[3].missing != -1) && (data[3].fvalue < (float)0.32902181149)) {
          result[1] += 0.022896849;
        } else {
          if ( (data[0].missing != -1) && (data[0].fvalue < (float)-1.7827031612)) {
            result[1] += 0.0231648;
          } else {
            result[1] += 0.055176158;
          }
        }
      }
    } else {
      if ( (data[11].missing != -1) && (data[11].fvalue < (float)-0.25357052684)) {
        result[1] += -0.044244442;
      } else {
        if ( (data[8].missing != -1) && (data[8].fvalue < (float)-0.20142486691)) {
          if ( (data[10].missing != -1) && (data[10].fvalue < (float)0.77467292547)) {
            result[1] += 0.070562325;
          } else {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)1.1233414412)) {
              result[1] += -0.023683608;
            } else {
              result[1] += 0.02548485;
            }
          }
        } else {
          if ( (data[10].missing != -1) && (data[10].fvalue < (float)1.2422872782)) {
            result[1] += -0.033290982;
          } else {
            result[1] += 0.018078437;
          }
        }
      }
    }
  } else {
    if ( (data[9].missing != -1) && (data[9].fvalue < (float)-0.48621019721)) {
      result[1] += -0.027824108;
    } else {
      if ( (data[0].missing != -1) && (data[0].fvalue < (float)1.4854047298)) {
        result[1] += -0.051824223;
      } else {
        result[1] += -0.027356535;
      }
    }
  }
  if ( (data[3].missing != -1) && (data[3].fvalue < (float)-0.165521577)) {
    if ( (data[9].missing != -1) && (data[9].fvalue < (float)-1.2174545527)) {
      result[2] += -0.033818137;
    } else {
      if ( (data[0].missing != -1) && (data[0].fvalue < (float)0.10080797225)) {
        if ( (data[8].missing != -1) && (data[8].fvalue < (float)-0.18186333776)) {
          if ( (data[7].missing != -1) && (data[7].fvalue < (float)-0.32047480345)) {
            result[2] += 0.022432344;
          } else {
            result[2] += 0.057457358;
          }
        } else {
          result[2] += -0.0035407858;
        }
      } else {
        if ( (data[11].missing != -1) && (data[11].fvalue < (float)-0.21514505148)) {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)-1.3735567331)) {
            result[2] += 0.05303135;
          } else {
            if ( (data[8].missing != -1) && (data[8].fvalue < (float)-0.18555359542)) {
              if ( (data[13].missing != -1) && (data[13].fvalue < (float)-0.55282837152)) {
                result[2] += 0.011281971;
              } else {
                result[2] += -0.03385008;
              }
            } else {
              if ( (data[13].missing != -1) && (data[13].fvalue < (float)-1.2693741322)) {
                result[2] += -0.028535455;
              } else {
                result[2] += -0.064241104;
              }
            }
          }
        } else {
          if ( (data[5].missing != -1) && (data[5].fvalue < (float)-0.41925215721)) {
            result[2] += -0.01691525;
          } else {
            if ( (data[7].missing != -1) && (data[7].fvalue < (float)-0.19368056953)) {
              if ( (data[16].missing != -1) && (data[16].fvalue < (float)0.040303114802)) {
                result[2] += 0.055200305;
              } else {
                result[2] += 0.007540773;
              }
            } else {
              result[2] += 0.005008239;
            }
          }
        }
      }
    }
  } else {
    if ( (data[5].missing != -1) && (data[5].fvalue < (float)-0.14828489721)) {
      if ( (data[8].missing != -1) && (data[8].fvalue < (float)-0.2151389569)) {
        if ( (data[13].missing != -1) && (data[13].fvalue < (float)0.90779399872)) {
          result[2] += 0.028905956;
        } else {
          result[2] += -0.038753852;
        }
      } else {
        if ( (data[16].missing != -1) && (data[16].fvalue < (float)0.045002944767)) {
          result[2] += -0.05323097;
        } else {
          result[2] += -0.030406198;
        }
      }
    } else {
      if ( (data[9].missing != -1) && (data[9].fvalue < (float)1.3016400337)) {
        if ( (data[0].missing != -1) && (data[0].fvalue < (float)-1.0319960117)) {
          result[2] += -0.03900354;
        } else {
          if ( (data[8].missing != -1) && (data[8].fvalue < (float)0.061431489885)) {
            if ( (data[13].missing != -1) && (data[13].fvalue < (float)1.0127772093)) {
              if ( (data[12].missing != -1) && (data[12].fvalue < (float)-0.045185387135)) {
                result[2] += 0.05093003;
              } else {
                result[2] += 0.010060786;
              }
            } else {
              result[2] += 0.0028339403;
            }
          } else {
            result[2] += -0.023251204;
          }
        }
      } else {
        result[2] += -0.050042372;
      }
    }
  }
  if ( (data[8].missing != -1) && (data[8].fvalue < (float)-0.20063112676)) {
    if ( (data[11].missing != -1) && (data[11].fvalue < (float)-0.24950000644)) {
      if ( (data[16].missing != -1) && (data[16].fvalue < (float)0.0040734801441)) {
        if ( (data[11].missing != -1) && (data[11].fvalue < (float)-0.26474907994)) {
          result[3] += -0.04435838;
        } else {
          result[3] += -0.013582716;
        }
      } else {
        if ( (data[10].missing != -1) && (data[10].fvalue < (float)0.26540723443)) {
          result[3] += -0.03474089;
        } else {
          result[3] += 0.039578393;
        }
      }
    } else {
      if ( (data[11].missing != -1) && (data[11].fvalue < (float)-0.20860290527)) {
        result[3] += -0.055546504;
      } else {
        result[3] += -0.023177523;
      }
    }
  } else {
    if ( (data[1].missing != -1) && (data[1].fvalue < (float)-1.332406044)) {
      if ( (data[2].missing != -1) && (data[2].fvalue < (float)0.023060614243)) {
        result[3] += 0.06887866;
      } else {
        if ( (data[3].missing != -1) && (data[3].fvalue < (float)0.28629669547)) {
          result[3] += -0.0066561736;
        } else {
          result[3] += 0.04791933;
        }
      }
    } else {
      if ( (data[3].missing != -1) && (data[3].fvalue < (float)1.2488398552)) {
        if ( (data[12].missing != -1) && (data[12].fvalue < (float)0.99250650406)) {
          if ( (data[13].missing != -1) && (data[13].fvalue < (float)0.2598875165)) {
            if ( (data[14].missing != -1) && (data[14].fvalue < (float)0.76945388317)) {
              if ( (data[12].missing != -1) && (data[12].fvalue < (float)0.32130610943)) {
                result[3] += -0.031626422;
              } else {
                result[3] += 0.0140523035;
              }
            } else {
              result[3] += -0.05285096;
            }
          } else {
            if ( (data[10].missing != -1) && (data[10].fvalue < (float)1.1176512241)) {
              if ( (data[5].missing != -1) && (data[5].fvalue < (float)0.47671183944)) {
                result[3] += 0.04193726;
              } else {
                result[3] += -0.0032793113;
              }
            } else {
              result[3] += -0.034153286;
            }
          }
        } else {
          if ( (data[11].missing != -1) && (data[11].fvalue < (float)-0.2367080003)) {
            result[3] += -0.04498895;
          } else {
            if ( (data[6].missing != -1) && (data[6].fvalue < (float)0.10018060356)) {
              if ( (data[8].missing != -1) && (data[8].fvalue < (float)0.2481738627)) {
                result[3] += 0.07163535;
              } else {
                result[3] += 0.02511851;
              }
            } else {
              result[3] += -0.008258319;
            }
          }
        }
      } else {
        if ( (data[8].missing != -1) && (data[8].fvalue < (float)0.32684010267)) {
          result[3] += 0.014481398;
        } else {
          result[3] += 0.059321176;
        }
      }
    }
  }
  if ( (data[5].missing != -1) && (data[5].fvalue < (float)-0.48074766994)) {
    if ( (data[8].missing != -1) && (data[8].fvalue < (float)-0.20911665261)) {
      result[0] += -0.016928403;
    } else {
      if ( (data[11].missing != -1) && (data[11].fvalue < (float)-0.22117689252)) {
        result[0] += 0.060926158;
      } else {
        if ( (data[12].missing != -1) && (data[12].fvalue < (float)0.56249433756)) {
          result[0] += 0.053607114;
        } else {
          if ( (data[1].missing != -1) && (data[1].fvalue < (float)0.13584434986)) {
            result[0] += 0.029957637;
          } else {
            result[0] += -0.024505673;
          }
        }
      }
    }
  } else {
    if ( (data[9].missing != -1) && (data[9].fvalue < (float)-0.53308588266)) {
      if ( (data[16].missing != -1) && (data[16].fvalue < (float)0.027447698638)) {
        if ( (data[0].missing != -1) && (data[0].fvalue < (float)-1.6734532118)) {
          result[0] += -0.013872676;
        } else {
          result[0] += -0.05059571;
        }
      } else {
        if ( (data[7].missing != -1) && (data[7].fvalue < (float)0.37159153819)) {
          result[0] += -0.019756192;
        } else {
          result[0] += 0.0009807502;
        }
      }
    } else {
      if ( (data[11].missing != -1) && (data[11].fvalue < (float)-0.26627296209)) {
        if ( (data[16].missing != -1) && (data[16].fvalue < (float)-0.0055110147223)) {
          result[0] += 0.003500696;
        } else {
          result[0] += 0.06640827;
        }
      } else {
        if ( (data[8].missing != -1) && (data[8].fvalue < (float)-0.17939275503)) {
          if ( (data[13].missing != -1) && (data[13].fvalue < (float)1.0127772093)) {
            if ( (data[12].missing != -1) && (data[12].fvalue < (float)0.57722508907)) {
              if ( (data[5].missing != -1) && (data[5].fvalue < (float)-0.096374280751)) {
                result[0] += -0.023733808;
              } else {
                result[0] += -0.0501871;
              }
            } else {
              result[0] += -0.004617576;
            }
          } else {
            if ( (data[15].missing != -1) && (data[15].fvalue < (float)-1.792111516)) {
              result[0] += -0.016205013;
            } else {
              result[0] += 0.019874169;
            }
          }
        } else {
          if ( (data[11].missing != -1) && (data[11].fvalue < (float)-0.22255906463)) {
            if ( (data[14].missing != -1) && (data[14].fvalue < (float)0.63119858503)) {
              result[0] += 0.07359566;
            } else {
              result[0] += 0.016130432;
            }
          } else {
            if ( (data[13].missing != -1) && (data[13].fvalue < (float)0.66503226757)) {
              if ( (data[8].missing != -1) && (data[8].fvalue < (float)0.078701905906)) {
                result[0] += -0.017654033;
              } else {
                result[0] += 0.010827898;
              }
            } else {
              result[0] += 0.046228893;
            }
          }
        }
      }
    }
  }
  if ( (data[0].missing != -1) && (data[0].fvalue < (float)-0.42872259021)) {
    if ( (data[8].missing != -1) && (data[8].fvalue < (float)-0.21625265479)) {
      if ( (data[14].missing != -1) && (data[14].fvalue < (float)-2.5253870487)) {
        result[1] += -0.019257782;
      } else {
        if ( (data[6].missing != -1) && (data[6].fvalue < (float)-0.20090486109)) {
          result[1] += 0.006817525;
        } else {
          if ( (data[0].missing != -1) && (data[0].fvalue < (float)-1.7827031612)) {
            result[1] += 0.019891953;
          } else {
            if ( (data[10].missing != -1) && (data[10].fvalue < (float)0.52504515648)) {
              result[1] += 0.021173408;
            } else {
              result[1] += 0.0537238;
            }
          }
        }
      }
    } else {
      if ( (data[11].missing != -1) && (data[11].fvalue < (float)-0.25357052684)) {
        result[1] += -0.039921753;
      } else {
        if ( (data[13].missing != -1) && (data[13].fvalue < (float)1.736979723)) {
          if ( (data[13].missing != -1) && (data[13].fvalue < (float)1.2953075171)) {
            if ( (data[11].missing != -1) && (data[11].fvalue < (float)-0.2043402344)) {
              result[1] += -0.023054823;
            } else {
              result[1] += 0.018240366;
            }
          } else {
            result[1] += 0.06026832;
          }
        } else {
          result[1] += -0.021289043;
        }
      }
    }
  } else {
    if ( (data[16].missing != -1) && (data[16].fvalue < (float)0.069090053439)) {
      if ( (data[15].missing != -1) && (data[15].fvalue < (float)1.195040226)) {
        if ( (data[8].missing != -1) && (data[8].fvalue < (float)-0.2151389569)) {
          result[1] += -0.027513018;
        } else {
          result[1] += -0.051094737;
        }
      } else {
        result[1] += -0.026953353;
      }
    } else {
      result[1] += -0.022443846;
    }
  }
  if ( (data[3].missing != -1) && (data[3].fvalue < (float)0.080768875778)) {
    if ( (data[6].missing != -1) && (data[6].fvalue < (float)-0.37641459703)) {
      if ( (data[8].missing != -1) && (data[8].fvalue < (float)-0.18801514804)) {
        if ( (data[10].missing != -1) && (data[10].fvalue < (float)-0.940084517)) {
          result[2] += 0.048538007;
        } else {
          result[2] += -0.007578162;
        }
      } else {
        if ( (data[5].missing != -1) && (data[5].fvalue < (float)-0.093005672097)) {
          if ( (data[11].missing != -1) && (data[11].fvalue < (float)-0.21637552977)) {
            result[2] += -0.05902446;
          } else {
            if ( (data[8].missing != -1) && (data[8].fvalue < (float)-0.042740665376)) {
              result[2] += -0.003656143;
            } else {
              result[2] += -0.051664185;
            }
          }
        } else {
          result[2] += 0.013418066;
        }
      }
    } else {
      if ( (data[12].missing != -1) && (data[12].fvalue < (float)1.0508075953)) {
        if ( (data[10].missing != -1) && (data[10].fvalue < (float)-0.40548467636)) {
          if ( (data[11].missing != -1) && (data[11].fvalue < (float)-0.17039236426)) {
            if ( (data[16].missing != -1) && (data[16].fvalue < (float)0.038849674165)) {
              if ( (data[10].missing != -1) && (data[10].fvalue < (float)-0.8168155551)) {
                result[2] += 0.043236457;
              } else {
                result[2] += 0.012419687;
              }
            } else {
              result[2] += -0.013536857;
            }
          } else {
            result[2] += 0.058769185;
          }
        } else {
          if ( (data[12].missing != -1) && (data[12].fvalue < (float)-0.033750686795)) {
            if ( (data[0].missing != -1) && (data[0].fvalue < (float)-0.36977395415)) {
              if ( (data[3].missing != -1) && (data[3].fvalue < (float)-0.41539546847)) {
                result[2] += 0.03537973;
              } else {
                result[2] += -0.007435925;
              }
            } else {
              result[2] += 0.05085507;
            }
          } else {
            result[2] += -0.03653721;
          }
        }
      } else {
        result[2] += -0.016491054;
      }
    }
  } else {
    if ( (data[5].missing != -1) && (data[5].fvalue < (float)3.1830465794)) {
      if ( (data[10].missing != -1) && (data[10].fvalue < (float)0.8628975153)) {
        if ( (data[8].missing != -1) && (data[8].fvalue < (float)-0.10686820745)) {
          if ( (data[13].missing != -1) && (data[13].fvalue < (float)0.61577022076)) {
            if ( (data[11].missing != -1) && (data[11].fvalue < (float)-0.21151523292)) {
              result[2] += 0.04060769;
            } else {
              result[2] += 0.008535517;
            }
          } else {
            result[2] += -0.022077417;
          }
        } else {
          if ( (data[5].missing != -1) && (data[5].fvalue < (float)0.13484111428)) {
            result[2] += -0.05102178;
          } else {
            result[2] += -0.021367414;
          }
        }
      } else {
        if ( (data[16].missing != -1) && (data[16].fvalue < (float)-0.018707942218)) {
          result[2] += -0.012372784;
        } else {
          result[2] += -0.052809;
        }
      }
    } else {
      result[2] += 0.014991122;
    }
  }
  if ( (data[8].missing != -1) && (data[8].fvalue < (float)-0.20063112676)) {
    if ( (data[10].missing != -1) && (data[10].fvalue < (float)0.74029392004)) {
      if ( (data[2].missing != -1) && (data[2].fvalue < (float)0.13006652892)) {
        result[3] += 0.0028401217;
      } else {
        if ( (data[8].missing != -1) && (data[8].fvalue < (float)-0.20639407635)) {
          result[3] += -0.04990786;
        } else {
          result[3] += -0.022999752;
        }
      }
    } else {
      if ( (data[16].missing != -1) && (data[16].fvalue < (float)0.0034450558014)) {
        result[3] += -0.03389053;
      } else {
        if ( (data[11].missing != -1) && (data[11].fvalue < (float)-0.26674380898)) {
          result[3] += 0.08203971;
        } else {
          if ( (data[0].missing != -1) && (data[0].fvalue < (float)-1.1880815029)) {
            result[3] += 0.017112296;
          } else {
            result[3] += -0.029986221;
          }
        }
      }
    }
  } else {
    if ( (data[1].missing != -1) && (data[1].fvalue < (float)-1.332406044)) {
      if ( (data[3].missing != -1) && (data[3].fvalue < (float)0.2672431469)) {
        result[3] += 0.022035776;
      } else {
        result[3] += 0.06330132;
      }
    } else {
      if ( (data[1].missing != -1) && (data[1].fvalue < (float)0.058750249445)) {
        if ( (data[2].missing != -1) && (data[2].fvalue < (float)-0.14570300281)) {
          result[3] += 0.011982516;
        } else {
          if ( (data[16].missing != -1) && (data[16].fvalue < (float)0.003763372777)) {
            result[3] += -0.018938428;
          } else {
            result[3] += -0.051545497;
          }
        }
      } else {
        if ( (data[11].missing != -1) && (data[11].fvalue < (float)-0.24779932201)) {
          result[3] += -0.043980677;
        } else {
          if ( (data[6].missing != -1) && (data[6].fvalue < (float)-0.90472733974)) {
            if ( (data[12].missing != -1) && (data[12].fvalue < (float)0.55062735081)) {
              result[3] += 0.007970456;
            } else {
              result[3] += 0.06045517;
            }
          } else {
            if ( (data[16].missing != -1) && (data[16].fvalue < (float)0.070572808385)) {
              if ( (data[9].missing != -1) && (data[9].fvalue < (float)0.4060946703)) {
                result[3] += 0.0132736;
              } else {
                result[3] += -0.0241614;
              }
            } else {
              if ( (data[6].missing != -1) && (data[6].fvalue < (float)1.009770751)) {
                result[3] += 0.063624084;
              } else {
                result[3] += 0.0045783888;
              }
            }
          }
        }
      }
    }
  }
  if ( (data[9].missing != -1) && (data[9].fvalue < (float)-0.1445838958)) {
    if ( (data[8].missing != -1) && (data[8].fvalue < (float)-0.20639407635)) {
      if ( (data[1].missing != -1) && (data[1].fvalue < (float)-1.0453500748)) {
        result[0] += -3.4861653e-06;
      } else {
        if ( (data[5].missing != -1) && (data[5].fvalue < (float)0.22934293747)) {
          result[0] += -0.05076663;
        } else {
          result[0] += -0.013818519;
        }
      }
    } else {
      if ( (data[10].missing != -1) && (data[10].fvalue < (float)-0.82406896353)) {
        result[0] += -0.047205314;
      } else {
        if ( (data[5].missing != -1) && (data[5].fvalue < (float)-0.33703631163)) {
          result[0] += 0.05097456;
        } else {
          if ( (data[5].missing != -1) && (data[5].fvalue < (float)-0.17693051696)) {
            result[0] += -0.046927672;
          } else {
            result[0] += 0.0072950134;
          }
        }
      }
    }
  } else {
    if ( (data[11].missing != -1) && (data[11].fvalue < (float)-0.21514505148)) {
      if ( (data[8].missing != -1) && (data[8].fvalue < (float)-0.18742009997)) {
        if ( (data[11].missing != -1) && (data[11].fvalue < (float)-0.26674380898)) {
          result[0] += 0.041771676;
        } else {
          if ( (data[5].missing != -1) && (data[5].fvalue < (float)-0.25515717268)) {
            result[0] += -0.03530385;
          } else {
            result[0] += 0.010190797;
          }
        }
      } else {
        if ( (data[6].missing != -1) && (data[6].fvalue < (float)0.088294439018)) {
          result[0] += 0.059126694;
        } else {
          result[0] += 0.033974923;
        }
      }
    } else {
      if ( (data[10].missing != -1) && (data[10].fvalue < (float)-0.74964094162)) {
        if ( (data[3].missing != -1) && (data[3].fvalue < (float)-0.82810521126)) {
          result[0] += -0.048230264;
        } else {
          result[0] += -0.009258763;
        }
      } else {
        if ( (data[7].missing != -1) && (data[7].fvalue < (float)-0.35935726762)) {
          if ( (data[7].missing != -1) && (data[7].fvalue < (float)-1.0330662727)) {
            if ( (data[6].missing != -1) && (data[6].fvalue < (float)-0.90472733974)) {
              result[0] += -0.03526603;
            } else {
              if ( (data[11].missing != -1) && (data[11].fvalue < (float)0.13876245916)) {
                result[0] += 0.037465554;
              } else {
                result[0] += -0.0010202763;
              }
            }
          } else {
            if ( (data[5].missing != -1) && (data[5].fvalue < (float)0.07551728934)) {
              if ( (data[13].missing != -1) && (data[13].fvalue < (float)-0.54132461548)) {
                result[0] += 0.032571223;
              } else {
                result[0] += 0.06292242;
              }
            } else {
              result[0] += 0.008203349;
            }
          }
        } else {
          if ( (data[10].missing != -1) && (data[10].fvalue < (float)-0.023404598236)) {
            result[0] += -0.03719866;
          } else {
            if ( (data[16].missing != -1) && (data[16].fvalue < (float)0.047710336745)) {
              if ( (data[16].missing != -1) && (data[16].fvalue < (float)0.031323723495)) {
                result[0] += -0.007269881;
              } else {
                result[0] += 0.053715374;
              }
            } else {
              result[0] += -0.022506213;
            }
          }
        }
      }
    }
  }
  if ( (data[0].missing != -1) && (data[0].fvalue < (float)-0.7787899375)) {
    if ( (data[16].missing != -1) && (data[16].fvalue < (float)0.0040734801441)) {
      if ( (data[5].missing != -1) && (data[5].fvalue < (float)-0.41068267822)) {
        result[1] += 0.0032496115;
      } else {
        if ( (data[5].missing != -1) && (data[5].fvalue < (float)-0.24164952338)) {
          if ( (data[16].missing != -1) && (data[16].fvalue < (float)-0.0053107207641)) {
            result[1] += 0.058720738;
          } else {
            result[1] += 0.032943763;
          }
        } else {
          result[1] += 0.0116668185;
        }
      }
    } else {
      if ( (data[5].missing != -1) && (data[5].fvalue < (float)0.37600171566)) {
        if ( (data[11].missing != -1) && (data[11].fvalue < (float)-0.24807538092)) {
          if ( (data[8].missing != -1) && (data[8].fvalue < (float)-0.21679787338)) {
            result[1] += -0.015957804;
          } else {
            result[1] += -0.059417773;
          }
        } else {
          result[1] += 0.004794145;
        }
      } else {
        if ( (data[15].missing != -1) && (data[15].fvalue < (float)-1.388064146)) {
          result[1] += -0.0029934477;
        } else {
          result[1] += 0.069726385;
        }
      }
    }
  } else {
    if ( (data[13].missing != -1) && (data[13].fvalue < (float)1.1907502413)) {
      if ( (data[3].missing != -1) && (data[3].fvalue < (float)-1.1986523867)) {
        result[1] += -0.027614722;
      } else {
        if ( (data[0].missing != -1) && (data[0].fvalue < (float)1.4633027315)) {
          if ( (data[16].missing != -1) && (data[16].fvalue < (float)0.065039761364)) {
            result[1] += -0.051113624;
          } else {
            result[1] += -0.027937809;
          }
        } else {
          result[1] += -0.027209694;
        }
      }
    } else {
      result[1] += -0.0022984652;
    }
  }
  if ( (data[10].missing != -1) && (data[10].fvalue < (float)-0.023404598236)) {
    if ( (data[7].missing != -1) && (data[7].fvalue < (float)-0.74306476116)) {
      if ( (data[13].missing != -1) && (data[13].fvalue < (float)-1.3687721491)) {
        if ( (data[12].missing != -1) && (data[12].fvalue < (float)1.155277133)) {
          result[2] += 0.056974888;
        } else {
          result[2] += -0.022627529;
        }
      } else {
        if ( (data[5].missing != -1) && (data[5].fvalue < (float)-0.061238311231)) {
          result[2] += -0.046137646;
        } else {
          result[2] += -0.0032400035;
        }
      }
    } else {
      if ( (data[16].missing != -1) && (data[16].fvalue < (float)0.055454473943)) {
        if ( (data[3].missing != -1) && (data[3].fvalue < (float)-1.1657506227)) {
          if ( (data[7].missing != -1) && (data[7].fvalue < (float)-0.20919252932)) {
            result[2] += 0.054589897;
          } else {
            result[2] += 0.029739304;
          }
        } else {
          if ( (data[5].missing != -1) && (data[5].fvalue < (float)-0.13766139746)) {
            if ( (data[7].missing != -1) && (data[7].fvalue < (float)-0.32512119412)) {
              if ( (data[10].missing != -1) && (data[10].fvalue < (float)-0.8168155551)) {
                result[2] += 0.0052539706;
              } else {
                result[2] += -0.04917038;
              }
            } else {
              if ( (data[11].missing != -1) && (data[11].fvalue < (float)-0.25583276153)) {
                result[2] += -0.011925768;
              } else {
                result[2] += 0.03162067;
              }
            }
          } else {
            if ( (data[14].missing != -1) && (data[14].fvalue < (float)0.41728976369)) {
              if ( (data[12].missing != -1) && (data[12].fvalue < (float)-0.18233750761)) {
                result[2] += 0.04523881;
              } else {
                result[2] += -0.0070055425;
              }
            } else {
              result[2] += 0.05423037;
            }
          }
        }
      } else {
        result[2] += -0.017126782;
      }
    }
  } else {
    if ( (data[6].missing != -1) && (data[6].fvalue < (float)1.4937204123)) {
      if ( (data[6].missing != -1) && (data[6].fvalue < (float)0.80960536003)) {
        if ( (data[6].missing != -1) && (data[6].fvalue < (float)-0.077276788652)) {
          if ( (data[13].missing != -1) && (data[13].fvalue < (float)0.57195323706)) {
            result[2] += -0.05341763;
          } else {
            result[2] += -0.005247626;
          }
        } else {
          if ( (data[13].missing != -1) && (data[13].fvalue < (float)0.77784532309)) {
            if ( (data[12].missing != -1) && (data[12].fvalue < (float)-0.82209986448)) {
              result[2] += 0.060712706;
            } else {
              result[2] += -0.007316787;
            }
          } else {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)-0.13882735372)) {
              result[2] += 0.0055296794;
            } else {
              if ( (data[3].missing != -1) && (data[3].fvalue < (float)0.88894993067)) {
                result[2] += -0.052870538;
              } else {
                result[2] += -0.011418214;
              }
            }
          }
        }
      } else {
        if ( (data[11].missing != -1) && (data[11].fvalue < (float)-0.17039236426)) {
          result[2] += -0.061040044;
        } else {
          result[2] += -0.018899895;
        }
      }
    } else {
      if ( (data[8].missing != -1) && (data[8].fvalue < (float)-0.20525918901)) {
        result[2] += 0.04237057;
      } else {
        result[2] += -0.01859612;
      }
    }
  }
  if ( (data[10].missing != -1) && (data[10].fvalue < (float)-0.39829662442)) {
    if ( (data[12].missing != -1) && (data[12].fvalue < (float)0.68646353483)) {
      if ( (data[8].missing != -1) && (data[8].fvalue < (float)-0.21104866266)) {
        result[3] += -0.026643256;
      } else {
        result[3] += -0.050256867;
      }
    } else {
      if ( (data[11].missing != -1) && (data[11].fvalue < (float)-0.2367080003)) {
        result[3] += -0.046154406;
      } else {
        if ( (data[13].missing != -1) && (data[13].fvalue < (float)-1.3687721491)) {
          result[3] += -0.0060303435;
        } else {
          result[3] += 0.050642293;
        }
      }
    }
  } else {
    if ( (data[5].missing != -1) && (data[5].fvalue < (float)-0.47590339184)) {
      if ( (data[11].missing != -1) && (data[11].fvalue < (float)-0.1723369211)) {
        result[3] += -0.04862979;
      } else {
        result[3] += -0.010790755;
      }
    } else {
      if ( (data[7].missing != -1) && (data[7].fvalue < (float)1.4132658243)) {
        if ( (data[6].missing != -1) && (data[6].fvalue < (float)1.009770751)) {
          if ( (data[2].missing != -1) && (data[2].fvalue < (float)-0.27207258344)) {
            result[3] += 0.063936576;
          } else {
            if ( (data[12].missing != -1) && (data[12].fvalue < (float)-0.89306592941)) {
              if ( (data[0].missing != -1) && (data[0].fvalue < (float)-1.4190087318)) {
                result[3] += 0.00019983189;
              } else {
                result[3] += 0.054093193;
              }
            } else {
              if ( (data[16].missing != -1) && (data[16].fvalue < (float)0.045002944767)) {
                result[3] += -0.0032413776;
              } else {
                result[3] += 0.033779394;
              }
            }
          }
        } else {
          if ( (data[16].missing != -1) && (data[16].fvalue < (float)0.0526355654)) {
            result[3] += -0.049839523;
          } else {
            result[3] += 0.016858352;
          }
        }
      } else {
        if ( (data[3].missing != -1) && (data[3].fvalue < (float)1.1697295904)) {
          result[3] += -0.046873398;
        } else {
          result[3] += -0.017555635;
        }
      }
    }
  }
  if ( (data[9].missing != -1) && (data[9].fvalue < (float)-0.54771786928)) {
    if ( (data[6].missing != -1) && (data[6].fvalue < (float)-0.77784711123)) {
      result[0] += -0.0011977825;
    } else {
      if ( (data[8].missing != -1) && (data[8].fvalue < (float)-0.20263934135)) {
        if ( (data[7].missing != -1) && (data[7].fvalue < (float)1.3507721424)) {
          result[0] += -0.050221242;
        } else {
          result[0] += -0.027108235;
        }
      } else {
        result[0] += -0.017532123;
      }
    }
  } else {
    if ( (data[3].missing != -1) && (data[3].fvalue < (float)-1.2579658031)) {
      result[0] += -0.048468422;
    } else {
      if ( (data[11].missing != -1) && (data[11].fvalue < (float)-0.23136755824)) {
        if ( (data[0].missing != -1) && (data[0].fvalue < (float)-0.65837663412)) {
          if ( (data[8].missing != -1) && (data[8].fvalue < (float)-0.21809193492)) {
            result[0] += -0.026503643;
          } else {
            result[0] += 0.015059645;
          }
        } else {
          if ( (data[8].missing != -1) && (data[8].fvalue < (float)-0.18801514804)) {
            if ( (data[10].missing != -1) && (data[10].fvalue < (float)-0.89206194878)) {
              result[0] += -0.005776225;
            } else {
              result[0] += 0.052645594;
            }
          } else {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)0.58306658268)) {
              result[0] += 0.08132849;
            } else {
              result[0] += 0.04601531;
            }
          }
        }
      } else {
        if ( (data[8].missing != -1) && (data[8].fvalue < (float)-0.16569210589)) {
          if ( (data[5].missing != -1) && (data[5].fvalue < (float)-0.31484144926)) {
            result[0] += 0.013084583;
          } else {
            if ( (data[8].missing != -1) && (data[8].fvalue < (float)-0.20588018)) {
              result[0] += 0.009224426;
            } else {
              result[0] += -0.052927744;
            }
          }
        } else {
          if ( (data[6].missing != -1) && (data[6].fvalue < (float)0.89328426123)) {
            if ( (data[5].missing != -1) && (data[5].fvalue < (float)0.07551728934)) {
              if ( (data[2].missing != -1) && (data[2].fvalue < (float)-0.069487594068)) {
                result[0] += -0.031699292;
              } else {
                result[0] += 0.021308279;
              }
            } else {
              if ( (data[16].missing != -1) && (data[16].fvalue < (float)0.021745100617)) {
                result[0] += -0.049658112;
              } else {
                result[0] += 0.0007788886;
              }
            }
          } else {
            if ( (data[13].missing != -1) && (data[13].fvalue < (float)-0.52175492048)) {
              result[0] += 0.06838783;
            } else {
              result[0] += 0.012964142;
            }
          }
        }
      }
    }
  }
  if ( (data[0].missing != -1) && (data[0].fvalue < (float)-0.72903758287)) {
    if ( (data[8].missing != -1) && (data[8].fvalue < (float)-0.21968281269)) {
      if ( (data[3].missing != -1) && (data[3].fvalue < (float)0.56793439388)) {
        result[1] += 0.02796628;
      } else {
        result[1] += 0.05504021;
      }
    } else {
      if ( (data[13].missing != -1) && (data[13].fvalue < (float)1.9595717192)) {
        if ( (data[6].missing != -1) && (data[6].fvalue < (float)0.18741211295)) {
          if ( (data[13].missing != -1) && (data[13].fvalue < (float)1.3539172411)) {
            result[1] += -0.03191165;
          } else {
            result[1] += 0.017174087;
          }
        } else {
          if ( (data[12].missing != -1) && (data[12].fvalue < (float)-1.2760870457)) {
            if ( (data[11].missing != -1) && (data[11].fvalue < (float)-0.25399804115)) {
              result[1] += -0.020347351;
            } else {
              result[1] += 0.021898918;
            }
          } else {
            if ( (data[15].missing != -1) && (data[15].fvalue < (float)-1.0156856775)) {
              result[1] += 0.059136372;
            } else {
              result[1] += 0.014016591;
            }
          }
        }
      } else {
        result[1] += -0.04466208;
      }
    }
  } else {
    if ( (data[16].missing != -1) && (data[16].fvalue < (float)0.062331173569)) {
      if ( (data[3].missing != -1) && (data[3].fvalue < (float)-1.1986523867)) {
        result[1] += -0.027034674;
      } else {
        if ( (data[1].missing != -1) && (data[1].fvalue < (float)-0.043292935938)) {
          if ( (data[8].missing != -1) && (data[8].fvalue < (float)-0.10686820745)) {
            result[1] += -0.046408303;
          } else {
            result[1] += -0.010244776;
          }
        } else {
          result[1] += -0.05086143;
        }
      }
    } else {
      if ( (data[8].missing != -1) && (data[8].fvalue < (float)-0.18742009997)) {
        result[1] += 0.027678898;
      } else {
        result[1] += -0.045437027;
      }
    }
  }
  if ( (data[3].missing != -1) && (data[3].fvalue < (float)0.046019136906)) {
    if ( (data[3].missing != -1) && (data[3].fvalue < (float)-1.2579658031)) {
      if ( (data[8].missing != -1) && (data[8].fvalue < (float)-0.19121129811)) {
        result[2] += 0.05173366;
      } else {
        result[2] += 0.008380393;
      }
    } else {
      if ( (data[11].missing != -1) && (data[11].fvalue < (float)-0.21514505148)) {
        if ( (data[12].missing != -1) && (data[12].fvalue < (float)0.15007823706)) {
          if ( (data[16].missing != -1) && (data[16].fvalue < (float)0.0056078946218)) {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)-0.8327895999)) {
              result[2] += 0.03610353;
            } else {
              if ( (data[6].missing != -1) && (data[6].fvalue < (float)-0.077276788652)) {
                result[2] += -0.0502627;
              } else {
                result[2] += -0.010499666;
              }
            }
          } else {
            if ( (data[15].missing != -1) && (data[15].fvalue < (float)-0.27798226476)) {
              result[2] += 0.06700588;
            } else {
              if ( (data[3].missing != -1) && (data[3].fvalue < (float)-0.53306043148)) {
                result[2] += 0.03591171;
              } else {
                result[2] += -0.0136344675;
              }
            }
          }
        } else {
          if ( (data[1].missing != -1) && (data[1].fvalue < (float)-0.30632683635)) {
            result[2] += 0.0059419055;
          } else {
            if ( (data[10].missing != -1) && (data[10].fvalue < (float)-0.89955693483)) {
              result[2] += -0.02249423;
            } else {
              result[2] += -0.059564967;
            }
          }
        }
      } else {
        if ( (data[5].missing != -1) && (data[5].fvalue < (float)0.14037305117)) {
          if ( (data[16].missing != -1) && (data[16].fvalue < (float)0.010555835441)) {
            if ( (data[6].missing != -1) && (data[6].fvalue < (float)-0.62424135208)) {
              result[2] += 0.0073446953;
            } else {
              result[2] += 0.051513918;
            }
          } else {
            if ( (data[5].missing != -1) && (data[5].fvalue < (float)-0.22246353328)) {
              result[2] += 0.017589001;
            } else {
              result[2] += -0.038325515;
            }
          }
        } else {
          if ( (data[6].missing != -1) && (data[6].fvalue < (float)1.182049036)) {
            result[2] += 0.061205536;
          } else {
            result[2] += 0.024720585;
          }
        }
      }
    }
  } else {
    if ( (data[5].missing != -1) && (data[5].fvalue < (float)-0.24164952338)) {
      if ( (data[6].missing != -1) && (data[6].fvalue < (float)0.17723160982)) {
        result[2] += -0.050400455;
      } else {
        result[2] += -0.01726955;
      }
    } else {
      if ( (data[7].missing != -1) && (data[7].fvalue < (float)1.0182756186)) {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)0.94407975674)) {
          if ( (data[13].missing != -1) && (data[13].fvalue < (float)-0.0002682065242)) {
            result[2] += 0.057911158;
          } else {
            if ( (data[7].missing != -1) && (data[7].fvalue < (float)0.67131799459)) {
              if ( (data[6].missing != -1) && (data[6].fvalue < (float)0.83127039671)) {
                result[2] += -0.0038172863;
              } else {
                result[2] += -0.023552286;
              }
            } else {
              result[2] += 0.025016127;
            }
          }
        } else {
          if ( (data[7].missing != -1) && (data[7].fvalue < (float)-0.62278866768)) {
            result[2] += -0.048311345;
          } else {
            result[2] += -0.01479975;
          }
        }
      } else {
        result[2] += -0.04366664;
      }
    }
  }
  if ( (data[10].missing != -1) && (data[10].fvalue < (float)0.72595649958)) {
    if ( (data[6].missing != -1) && (data[6].fvalue < (float)0.32220888138)) {
      if ( (data[2].missing != -1) && (data[2].fvalue < (float)-0.27207258344)) {
        result[3] += 0.056408156;
      } else {
        if ( (data[7].missing != -1) && (data[7].fvalue < (float)-1.3104422092)) {
          result[3] += 0.028170958;
        } else {
          if ( (data[14].missing != -1) && (data[14].fvalue < (float)0.13486784697)) {
            if ( (data[13].missing != -1) && (data[13].fvalue < (float)0.30374440551)) {
              if ( (data[13].missing != -1) && (data[13].fvalue < (float)-0.15258552134)) {
                result[3] += 0.053187914;
              } else {
                result[3] += 0.01713433;
              }
            } else {
              if ( (data[9].missing != -1) && (data[9].fvalue < (float)-0.13449221849)) {
                result[3] += 0.005465695;
              } else {
                result[3] += -0.03655289;
              }
            }
          } else {
            if ( (data[8].missing != -1) && (data[8].fvalue < (float)-0.12956127524)) {
              if ( (data[8].missing != -1) && (data[8].fvalue < (float)-0.20802885294)) {
                result[3] += -0.02726358;
              } else {
                result[3] += -0.04940274;
              }
            } else {
              if ( (data[10].missing != -1) && (data[10].fvalue < (float)-0.2608923018)) {
                result[3] += 0.01923257;
              } else {
                result[3] += -0.040866617;
              }
            }
          }
        }
      }
    } else {
      if ( (data[16].missing != -1) && (data[16].fvalue < (float)0.026114549488)) {
        result[3] += -0.050695993;
      } else {
        if ( (data[6].missing != -1) && (data[6].fvalue < (float)0.87583655119)) {
          result[3] += 0.01858661;
        } else {
          result[3] += -0.0440447;
        }
      }
    }
  } else {
    if ( (data[8].missing != -1) && (data[8].fvalue < (float)-0.21964873374)) {
      result[3] += -0.044725295;
    } else {
      if ( (data[6].missing != -1) && (data[6].fvalue < (float)-0.50929665565)) {
        if ( (data[16].missing != -1) && (data[16].fvalue < (float)0.015151453204)) {
          result[3] += 0.03230038;
        } else {
          result[3] += 0.06290298;
        }
      } else {
        if ( (data[5].missing != -1) && (data[5].fvalue < (float)-0.16096504033)) {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)0.93932986259)) {
            result[3] += -0.04949551;
          } else {
            result[3] += 0.00069178565;
          }
        } else {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)-0.91897934675)) {
            result[3] += 0.07202555;
          } else {
            if ( (data[7].missing != -1) && (data[7].fvalue < (float)0.61500769854)) {
              result[3] += 0.033555012;
            } else {
              result[3] += -0.017521782;
            }
          }
        }
      }
    }
  }
  if ( (data[9].missing != -1) && (data[9].fvalue < (float)-0.084286130965)) {
    if ( (data[6].missing != -1) && (data[6].fvalue < (float)-0.77784711123)) {
      if ( (data[7].missing != -1) && (data[7].fvalue < (float)0.18004330993)) {
        result[0] += 0.038111255;
      } else {
        result[0] += -0.01595529;
      }
    } else {
      if ( (data[13].missing != -1) && (data[13].fvalue < (float)0.079274237156)) {
        result[0] += -0.051897414;
      } else {
        if ( (data[0].missing != -1) && (data[0].fvalue < (float)-0.88791364431)) {
          if ( (data[10].missing != -1) && (data[10].fvalue < (float)1.551840663)) {
            result[0] += -0.047984596;
          } else {
            result[0] += -0.013416764;
          }
        } else {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)0.030459327623)) {
            if ( (data[14].missing != -1) && (data[14].fvalue < (float)0.19025203586)) {
              result[0] += -0.045743242;
            } else {
              result[0] += -0.0042731063;
            }
          } else {
            result[0] += 0.041696973;
          }
        }
      }
    }
  } else {
    if ( (data[11].missing != -1) && (data[11].fvalue < (float)-0.21514505148)) {
      if ( (data[8].missing != -1) && (data[8].fvalue < (float)-0.21849969029)) {
        result[0] += -0.014000693;
      } else {
        if ( (data[11].missing != -1) && (data[11].fvalue < (float)-0.2615224123)) {
          result[0] += 0.061392095;
        } else {
          if ( (data[8].missing != -1) && (data[8].fvalue < (float)-0.16773824394)) {
            if ( (data[5].missing != -1) && (data[5].fvalue < (float)-0.16096504033)) {
              result[0] += -0.01723758;
            } else {
              result[0] += 0.034485042;
            }
          } else {
            result[0] += 0.05016398;
          }
        }
      }
    } else {
      if ( (data[1].missing != -1) && (data[1].fvalue < (float)0.058750249445)) {
        if ( (data[1].missing != -1) && (data[1].fvalue < (float)-1.0453500748)) {
          result[0] += -0.010336499;
        } else {
          if ( (data[5].missing != -1) && (data[5].fvalue < (float)-0.40884578228)) {
            result[0] += 0.055548586;
          } else {
            result[0] += 0.021233518;
          }
        }
      } else {
        if ( (data[3].missing != -1) && (data[3].fvalue < (float)0.2672431469)) {
          if ( (data[0].missing != -1) && (data[0].fvalue < (float)0.68037927151)) {
            if ( (data[0].missing != -1) && (data[0].fvalue < (float)0.52133196592)) {
              result[0] += -0.017622583;
            } else {
              result[0] += 0.028282901;
            }
          } else {
            if ( (data[6].missing != -1) && (data[6].fvalue < (float)0.25082111359)) {
              if ( (data[7].missing != -1) && (data[7].fvalue < (float)-0.91147071123)) {
                result[0] += -0.07911878;
              } else {
                result[0] += -0.03311303;
              }
            } else {
              result[0] += -0.008733668;
            }
          }
        } else {
          if ( (data[6].missing != -1) && (data[6].fvalue < (float)-0.90994179249)) {
            result[0] += -0.030328924;
          } else {
            if ( (data[16].missing != -1) && (data[16].fvalue < (float)0.061377741396)) {
              if ( (data[10].missing != -1) && (data[10].fvalue < (float)0.53875249624)) {
                result[0] += 0.02586999;
              } else {
                result[0] += 0.06358674;
              }
            } else {
              result[0] += -0.019997668;
            }
          }
        }
      }
    }
  }
  if ( (data[8].missing != -1) && (data[8].fvalue < (float)-0.21625265479)) {
    if ( (data[10].missing != -1) && (data[10].fvalue < (float)0.18442307413)) {
      result[1] += -0.019939896;
    } else {
      if ( (data[10].missing != -1) && (data[10].fvalue < (float)1.9377174377)) {
        if ( (data[0].missing != -1) && (data[0].fvalue < (float)-1.4190087318)) {
          result[1] += 0.054054696;
        } else {
          if ( (data[15].missing != -1) && (data[15].fvalue < (float)-1.1674845219)) {
            result[1] += -0.007303825;
          } else {
            result[1] += 0.04551008;
          }
        }
      } else {
        result[1] += 0.0015838025;
      }
    }
  } else {
    if ( (data[14].missing != -1) && (data[14].fvalue < (float)-0.60067504644)) {
      if ( (data[11].missing != -1) && (data[11].fvalue < (float)-0.23246327043)) {
        if ( (data[11].missing != -1) && (data[11].fvalue < (float)-0.25399804115)) {
          result[1] += -0.049445022;
        } else {
          result[1] += -0.018773954;
        }
      } else {
        if ( (data[14].missing != -1) && (data[14].fvalue < (float)-1.1134285927)) {
          result[1] += -0.0064605377;
        } else {
          result[1] += 0.053781517;
        }
      }
    } else {
      if ( (data[12].missing != -1) && (data[12].fvalue < (float)0.48020774126)) {
        result[1] += -0.0488122;
      } else {
        if ( (data[13].missing != -1) && (data[13].fvalue < (float)-0.86564141512)) {
          result[1] += -0.04753369;
        } else {
          result[1] += -0.004735886;
        }
      }
    }
  }
  if ( (data[3].missing != -1) && (data[3].fvalue < (float)0.046019136906)) {
    if ( (data[3].missing != -1) && (data[3].fvalue < (float)-1.2235993147)) {
      if ( (data[8].missing != -1) && (data[8].fvalue < (float)-0.18918262422)) {
        result[2] += 0.055577654;
      } else {
        result[2] += 0.0045238254;
      }
    } else {
      if ( (data[11].missing != -1) && (data[11].fvalue < (float)-0.21514505148)) {
        if ( (data[7].missing != -1) && (data[7].fvalue < (float)-0.32512119412)) {
          if ( (data[1].missing != -1) && (data[1].fvalue < (float)-0.48555460572)) {
            result[2] += 0.012202459;
          } else {
            if ( (data[10].missing != -1) && (data[10].fvalue < (float)-1.0384379625)) {
              result[2] += -0.015776275;
            } else {
              result[2] += -0.0597609;
            }
          }
        } else {
          if ( (data[6].missing != -1) && (data[6].fvalue < (float)-0.40938580036)) {
            result[2] += -0.020607255;
          } else {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)-0.40506112576)) {
              if ( (data[16].missing != -1) && (data[16].fvalue < (float)-0.0085348961875)) {
                result[2] += 0.011060467;
              } else {
                result[2] += 0.0564509;
              }
            } else {
              result[2] += -0.008482392;
            }
          }
        }
      } else {
        if ( (data[16].missing != -1) && (data[16].fvalue < (float)0.0093680135906)) {
          if ( (data[6].missing != -1) && (data[6].fvalue < (float)-0.62424135208)) {
            result[2] += 0.01039538;
          } else {
            result[2] += 0.050984055;
          }
        } else {
          if ( (data[5].missing != -1) && (data[5].fvalue < (float)0.14037305117)) {
            if ( (data[5].missing != -1) && (data[5].fvalue < (float)-0.21281275153)) {
              if ( (data[8].missing != -1) && (data[8].fvalue < (float)-0.13294763863)) {
                result[2] += 0.04390205;
              } else {
                result[2] += -0.02012641;
              }
            } else {
              result[2] += -0.033229586;
            }
          } else {
            if ( (data[6].missing != -1) && (data[6].fvalue < (float)1.1539894342)) {
              result[2] += 0.05212441;
            } else {
              result[2] += 0.002858328;
            }
          }
        }
      }
    }
  } else {
    if ( (data[12].missing != -1) && (data[12].fvalue < (float)0.26557740569)) {
      if ( (data[13].missing != -1) && (data[13].fvalue < (float)-0.0002682065242)) {
        if ( (data[6].missing != -1) && (data[6].fvalue < (float)-0.2139275521)) {
          result[2] += -0.018824292;
        } else {
          result[2] += 0.042590413;
        }
      } else {
        if ( (data[6].missing != -1) && (data[6].fvalue < (float)1.5168052912)) {
          if ( (data[13].missing != -1) && (data[13].fvalue < (float)0.61577022076)) {
            if ( (data[6].missing != -1) && (data[6].fvalue < (float)0.067600421607)) {
              result[2] += -0.040155526;
            } else {
              result[2] += 0.020094616;
            }
          } else {
            if ( (data[0].missing != -1) && (data[0].fvalue < (float)-1.645892024)) {
              result[2] += -0.011762431;
            } else {
              result[2] += -0.053198267;
            }
          }
        } else {
          result[2] += 0.012552636;
        }
      }
    } else {
      result[2] += -0.04918107;
    }
  }
  if ( (data[10].missing != -1) && (data[10].fvalue < (float)-0.40548467636)) {
    if ( (data[12].missing != -1) && (data[12].fvalue < (float)0.91569340229)) {
      if ( (data[13].missing != -1) && (data[13].fvalue < (float)-0.14236406982)) {
        result[3] += -0.049751926;
      } else {
        result[3] += -0.023565663;
      }
    } else {
      if ( (data[11].missing != -1) && (data[11].fvalue < (float)-0.2043402344)) {
        result[3] += -0.03534568;
      } else {
        result[3] += 0.03514984;
      }
    }
  } else {
    if ( (data[8].missing != -1) && (data[8].fvalue < (float)-0.21855989099)) {
      result[3] += -0.03924868;
    } else {
      if ( (data[2].missing != -1) && (data[2].fvalue < (float)-0.069487594068)) {
        if ( (data[16].missing != -1) && (data[16].fvalue < (float)0.015151453204)) {
          result[3] += -0.0018953579;
        } else {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)0.077612012625)) {
            result[3] += 0.06829935;
          } else {
            result[3] += 0.024036003;
          }
        }
      } else {
        if ( (data[3].missing != -1) && (data[3].fvalue < (float)1.2488398552)) {
          if ( (data[11].missing != -1) && (data[11].fvalue < (float)-0.26536142826)) {
            result[3] += 0.027818395;
          } else {
            if ( (data[12].missing != -1) && (data[12].fvalue < (float)-0.79302626848)) {
              if ( (data[6].missing != -1) && (data[6].fvalue < (float)-0.22760552168)) {
                result[3] += 0.048836317;
              } else {
                result[3] += -0.018274782;
              }
            } else {
              if ( (data[5].missing != -1) && (data[5].fvalue < (float)-0.067341715097)) {
                result[3] += -0.031241274;
              } else {
                result[3] += 0.007260983;
              }
            }
          }
        } else {
          if ( (data[13].missing != -1) && (data[13].fvalue < (float)0.84097009897)) {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)1.761461854)) {
              result[3] += 0.05090269;
            } else {
              result[3] += 0.016233692;
            }
          } else {
            result[3] += -0.003163869;
          }
        }
      }
    }
  }
  if ( (data[9].missing != -1) && (data[9].fvalue < (float)-0.25189942122)) {
    if ( (data[7].missing != -1) && (data[7].fvalue < (float)-0.36191350222)) {
      result[0] += 0.016981833;
    } else {
      if ( (data[12].missing != -1) && (data[12].fvalue < (float)-0.1466383189)) {
        if ( (data[7].missing != -1) && (data[7].fvalue < (float)0.5574285388)) {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)0.097445912659)) {
            result[0] += -0.0122474115;
          } else {
            result[0] += 0.04256272;
          }
        } else {
          if ( (data[13].missing != -1) && (data[13].fvalue < (float)1.0878903866)) {
            result[0] += -0.049086895;
          } else {
            result[0] += -0.017668063;
          }
        }
      } else {
        result[0] += -0.05030634;
      }
    }
  } else {
    if ( (data[11].missing != -1) && (data[11].fvalue < (float)-0.22255906463)) {
      if ( (data[8].missing != -1) && (data[8].fvalue < (float)-0.21849969029)) {
        result[0] += -0.016961925;
      } else {
        if ( (data[11].missing != -1) && (data[11].fvalue < (float)-0.2615224123)) {
          result[0] += 0.061531432;
        } else {
          if ( (data[8].missing != -1) && (data[8].fvalue < (float)-0.18658703566)) {
            if ( (data[7].missing != -1) && (data[7].fvalue < (float)0.0079784486443)) {
              result[0] += -0.02489878;
            } else {
              result[0] += 0.02532511;
            }
          } else {
            if ( (data[13].missing != -1) && (data[13].fvalue < (float)-1.1283231974)) {
              result[0] += 0.028958132;
            } else {
              result[0] += 0.062803835;
            }
          }
        }
      }
    } else {
      if ( (data[10].missing != -1) && (data[10].fvalue < (float)-0.83907783031)) {
        if ( (data[6].missing != -1) && (data[6].fvalue < (float)-0.024934647605)) {
          result[0] += -0.051293373;
        } else {
          result[0] += -0.014385435;
        }
      } else {
        if ( (data[1].missing != -1) && (data[1].fvalue < (float)-0.091976709664)) {
          if ( (data[7].missing != -1) && (data[7].fvalue < (float)-0.27611738443)) {
            result[0] += 0.050060786;
          } else {
            result[0] += -0.006143645;
          }
        } else {
          if ( (data[5].missing != -1) && (data[5].fvalue < (float)1.667165041)) {
            if ( (data[6].missing != -1) && (data[6].fvalue < (float)0.91162836552)) {
              if ( (data[3].missing != -1) && (data[3].fvalue < (float)0.19738391042)) {
                result[0] += -0.020137874;
              } else {
                result[0] += 0.0127963815;
              }
            } else {
              result[0] += 0.0575278;
            }
          } else {
            result[0] += -0.036360074;
          }
        }
      }
    }
  }
  if ( (data[0].missing != -1) && (data[0].fvalue < (float)-0.42872259021)) {
    if ( (data[13].missing != -1) && (data[13].fvalue < (float)1.9595717192)) {
      if ( (data[8].missing != -1) && (data[8].fvalue < (float)-0.21939170361)) {
        if ( (data[13].missing != -1) && (data[13].fvalue < (float)0.90779399872)) {
          result[1] += 0.018471422;
        } else {
          result[1] += 0.04915623;
        }
      } else {
        if ( (data[6].missing != -1) && (data[6].fvalue < (float)0.010675780475)) {
          if ( (data[0].missing != -1) && (data[0].fvalue < (float)-1.3415445089)) {
            result[1] += 0.018783828;
          } else {
            result[1] += -0.040970456;
          }
        } else {
          if ( (data[11].missing != -1) && (data[11].fvalue < (float)-0.24950000644)) {
            if ( (data[16].missing != -1) && (data[16].fvalue < (float)-0.0004766578495)) {
              result[1] += 0.03415198;
            } else {
              if ( (data[6].missing != -1) && (data[6].fvalue < (float)0.68587446213)) {
                result[1] += -0.035020918;
              } else {
                result[1] += 0.0008541594;
              }
            }
          } else {
            if ( (data[12].missing != -1) && (data[12].fvalue < (float)-1.3514335155)) {
              result[1] += 0.011581123;
            } else {
              result[1] += 0.04956546;
            }
          }
        }
      }
    } else {
      result[1] += -0.04469419;
    }
  } else {
    if ( (data[16].missing != -1) && (data[16].fvalue < (float)0.069090053439)) {
      if ( (data[0].missing != -1) && (data[0].fvalue < (float)1.3682339191)) {
        result[1] += -0.050620716;
      } else {
        result[1] += -0.026712207;
      }
    } else {
      result[1] += -0.016984817;
    }
  }
  if ( (data[3].missing != -1) && (data[3].fvalue < (float)0.015094771981)) {
    if ( (data[3].missing != -1) && (data[3].fvalue < (float)-1.1763842106)) {
      if ( (data[8].missing != -1) && (data[8].fvalue < (float)-0.18701218069)) {
        if ( (data[7].missing != -1) && (data[7].fvalue < (float)-0.21360145509)) {
          result[2] += 0.055187494;
        } else {
          result[2] += 0.030083572;
        }
      } else {
        result[2] += 0.004868013;
      }
    } else {
      if ( (data[5].missing != -1) && (data[5].fvalue < (float)-0.323004812)) {
        if ( (data[7].missing != -1) && (data[7].fvalue < (float)0.11007474363)) {
          if ( (data[10].missing != -1) && (data[10].fvalue < (float)-0.89206194878)) {
            result[2] += -0.00042356993;
          } else {
            if ( (data[15].missing != -1) && (data[15].fvalue < (float)0.3859231174)) {
              result[2] += -0.022183102;
            } else {
              result[2] += -0.05241443;
            }
          }
        } else {
          result[2] += 0.026431475;
        }
      } else {
        if ( (data[11].missing != -1) && (data[11].fvalue < (float)-0.18233262002)) {
          if ( (data[12].missing != -1) && (data[12].fvalue < (float)0.37799793482)) {
            if ( (data[8].missing != -1) && (data[8].fvalue < (float)-0.19521571696)) {
              if ( (data[13].missing != -1) && (data[13].fvalue < (float)0.94390970469)) {
                result[2] += 0.04677571;
              } else {
                result[2] += -0.0073332684;
              }
            } else {
              if ( (data[11].missing != -1) && (data[11].fvalue < (float)-0.22773696482)) {
                result[2] += -0.036607772;
              } else {
                result[2] += 0.022280792;
              }
            }
          } else {
            if ( (data[10].missing != -1) && (data[10].fvalue < (float)-1.0932078362)) {
              result[2] += 0.0044463384;
            } else {
              result[2] += -0.053578664;
            }
          }
        } else {
          if ( (data[11].missing != -1) && (data[11].fvalue < (float)0.21334011853)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)-0.16379767656)) {
              result[2] += 0.01920962;
            } else {
              result[2] += 0.054334827;
            }
          } else {
            result[2] += 0.009776599;
          }
        }
      }
    }
  } else {
    if ( (data[5].missing != -1) && (data[5].fvalue < (float)-0.24164952338)) {
      if ( (data[9].missing != -1) && (data[9].fvalue < (float)-1.2174545527)) {
        result[2] += -0.010712158;
      } else {
        if ( (data[13].missing != -1) && (data[13].fvalue < (float)-0.77699404955)) {
          result[2] += -0.027769094;
        } else {
          result[2] += -0.05022334;
        }
      }
    } else {
      if ( (data[9].missing != -1) && (data[9].fvalue < (float)0.94407975674)) {
        if ( (data[0].missing != -1) && (data[0].fvalue < (float)-1.1717795134)) {
          result[2] += -0.045623727;
        } else {
          if ( (data[13].missing != -1) && (data[13].fvalue < (float)1.0127772093)) {
            if ( (data[12].missing != -1) && (data[12].fvalue < (float)-0.84665316343)) {
              result[2] += 0.07758223;
            } else {
              if ( (data[3].missing != -1) && (data[3].fvalue < (float)0.1855404079)) {
                result[2] += 0.037265234;
              } else {
                result[2] += -0.00032039394;
              }
            }
          } else {
            result[2] += -0.011029251;
          }
        }
      } else {
        if ( (data[5].missing != -1) && (data[5].fvalue < (float)0.6877835989)) {
          result[2] += -0.049681548;
        } else {
          result[2] += -0.025088912;
        }
      }
    }
  }
  if ( (data[8].missing != -1) && (data[8].fvalue < (float)-0.20063112676)) {
    if ( (data[11].missing != -1) && (data[11].fvalue < (float)-0.26094642282)) {
      if ( (data[16].missing != -1) && (data[16].fvalue < (float)0.0042847408913)) {
        if ( (data[0].missing != -1) && (data[0].fvalue < (float)-1.4190087318)) {
          result[3] += -0.045075767;
        } else {
          result[3] += -0.014733923;
        }
      } else {
        if ( (data[0].missing != -1) && (data[0].fvalue < (float)-1.1880815029)) {
          result[3] += 0.04583783;
        } else {
          result[3] += 0.002924244;
        }
      }
    } else {
      if ( (data[0].missing != -1) && (data[0].fvalue < (float)-1.2417032719)) {
        result[3] += -0.012002887;
      } else {
        if ( (data[16].missing != -1) && (data[16].fvalue < (float)0.015151453204)) {
          result[3] += -0.024009412;
        } else {
          result[3] += -0.056574147;
        }
      }
    }
  } else {
    if ( (data[0].missing != -1) && (data[0].fvalue < (float)0.12998342514)) {
      if ( (data[7].missing != -1) && (data[7].fvalue < (float)-0.1410703212)) {
        result[3] += 0.06747141;
      } else {
        if ( (data[3].missing != -1) && (data[3].fvalue < (float)0.2037332952)) {
          if ( (data[13].missing != -1) && (data[13].fvalue < (float)0.76375257969)) {
            result[3] += -0.038579606;
          } else {
            result[3] += 0.023308557;
          }
        } else {
          if ( (data[13].missing != -1) && (data[13].fvalue < (float)0.85409128666)) {
            if ( (data[11].missing != -1) && (data[11].fvalue < (float)-0.21637552977)) {
              result[3] += 0.024669562;
            } else {
              result[3] += 0.06267357;
            }
          } else {
            result[3] += -0.0056963237;
          }
        }
      }
    } else {
      if ( (data[11].missing != -1) && (data[11].fvalue < (float)-0.2367080003)) {
        result[3] += -0.045666877;
      } else {
        if ( (data[12].missing != -1) && (data[12].fvalue < (float)0.56249433756)) {
          if ( (data[2].missing != -1) && (data[2].fvalue < (float)0.023060614243)) {
            result[3] += 0.024697294;
          } else {
            if ( (data[5].missing != -1) && (data[5].fvalue < (float)1.3265975714)) {
              if ( (data[13].missing != -1) && (data[13].fvalue < (float)-0.51422560215)) {
                result[3] += -0.016461154;
              } else {
                result[3] += -0.04876957;
              }
            } else {
              result[3] += 0.0048663835;
            }
          }
        } else {
          if ( (data[6].missing != -1) && (data[6].fvalue < (float)0.15546032786)) {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)0.030459327623)) {
              result[3] += 0.05748077;
            } else {
              if ( (data[11].missing != -1) && (data[11].fvalue < (float)1.4288539886)) {
                result[3] += -0.019407209;
              } else {
                result[3] += 0.05278374;
              }
            }
          } else {
            result[3] += -0.011245267;
          }
        }
      }
    }
  }
  if ( (data[9].missing != -1) && (data[9].fvalue < (float)-0.25189942122)) {
    if ( (data[1].missing != -1) && (data[1].fvalue < (float)-1.8063256741)) {
      result[0] += 0.01567688;
    } else {
      if ( (data[16].missing != -1) && (data[16].fvalue < (float)0.012412802316)) {
        if ( (data[13].missing != -1) && (data[13].fvalue < (float)1.1625643969)) {
          result[0] += -0.050113957;
        } else {
          result[0] += -0.028366683;
        }
      } else {
        if ( (data[3].missing != -1) && (data[3].fvalue < (float)0.66696953773)) {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)0.015094771981)) {
            result[0] += -0.024269355;
          } else {
            result[0] += 0.03988973;
          }
        } else {
          result[0] += -0.047509495;
        }
      }
    }
  } else {
    if ( (data[5].missing != -1) && (data[5].fvalue < (float)-0.48074766994)) {
      if ( (data[10].missing != -1) && (data[10].fvalue < (float)-1.0384379625)) {
        result[0] += 0.0002214569;
      } else {
        if ( (data[3].missing != -1) && (data[3].fvalue < (float)0.84174287319)) {
          result[0] += 0.04914459;
        } else {
          result[0] += 0.0013415377;
        }
      }
    } else {
      if ( (data[6].missing != -1) && (data[6].fvalue < (float)1.6329715252)) {
        if ( (data[2].missing != -1) && (data[2].fvalue < (float)0.038101356477)) {
          if ( (data[6].missing != -1) && (data[6].fvalue < (float)0.025687811896)) {
            result[0] += -0.048534676;
          } else {
            result[0] += 0.018888446;
          }
        } else {
          if ( (data[6].missing != -1) && (data[6].fvalue < (float)0.030263820663)) {
            if ( (data[11].missing != -1) && (data[11].fvalue < (float)-0.21151523292)) {
              if ( (data[12].missing != -1) && (data[12].fvalue < (float)-0.41419374943)) {
                result[0] += 0.010209939;
              } else {
                result[0] += 0.06554794;
              }
            } else {
              if ( (data[13].missing != -1) && (data[13].fvalue < (float)-0.72119164467)) {
                result[0] += -0.028628707;
              } else {
                result[0] += 0.024406405;
              }
            }
          } else {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)1.2356156111)) {
              if ( (data[5].missing != -1) && (data[5].fvalue < (float)-0.061238311231)) {
                result[0] += 0.0140428515;
              } else {
                result[0] += -0.027542138;
              }
            } else {
              result[0] += 0.023833415;
            }
          }
        }
      } else {
        result[0] += 0.054523803;
      }
    }
  }
  if ( (data[0].missing != -1) && (data[0].fvalue < (float)-0.42872259021)) {
    if ( (data[0].missing != -1) && (data[0].fvalue < (float)-1.4317775965)) {
      if ( (data[5].missing != -1) && (data[5].fvalue < (float)-0.41068267822)) {
        result[1] += -0.012627198;
      } else {
        result[1] += 0.054066397;
      }
    } else {
      if ( (data[5].missing != -1) && (data[5].fvalue < (float)0.22934293747)) {
        if ( (data[10].missing != -1) && (data[10].fvalue < (float)0.72595649958)) {
          if ( (data[13].missing != -1) && (data[13].fvalue < (float)0.93093466759)) {
            result[1] += -0.017650595;
          } else {
            if ( (data[10].missing != -1) && (data[10].fvalue < (float)0.14474117756)) {
              result[1] += -0.0035962872;
            } else {
              result[1] += 0.045078512;
            }
          }
        } else {
          if ( (data[6].missing != -1) && (data[6].fvalue < (float)0.4216991365)) {
            result[1] += -0.05405551;
          } else {
            result[1] += -0.008439131;
          }
        }
      } else {
        if ( (data[11].missing != -1) && (data[11].fvalue < (float)-0.21674728394)) {
          result[1] += 0.0032926041;
        } else {
          result[1] += 0.054564185;
        }
      }
    }
  } else {
    if ( (data[6].missing != -1) && (data[6].fvalue < (float)0.12343075126)) {
      result[1] += -0.049914435;
    } else {
      if ( (data[6].missing != -1) && (data[6].fvalue < (float)0.49683484435)) {
        result[1] += 0.00610019;
      } else {
        result[1] += -0.04164524;
      }
    }
  }
  if ( (data[8].missing != -1) && (data[8].fvalue < (float)0.011566273868)) {
    if ( (data[10].missing != -1) && (data[10].fvalue < (float)0.49240323901)) {
      if ( (data[3].missing != -1) && (data[3].fvalue < (float)-1.3735567331)) {
        result[2] += 0.046819765;
      } else {
        if ( (data[5].missing != -1) && (data[5].fvalue < (float)-0.019165378064)) {
          if ( (data[13].missing != -1) && (data[13].fvalue < (float)-1.4362953901)) {
            result[2] += -0.046513084;
          } else {
            if ( (data[11].missing != -1) && (data[11].fvalue < (float)-0.25399804115)) {
              if ( (data[6].missing != -1) && (data[6].fvalue < (float)0.31093731523)) {
                result[2] += -0.03056368;
              } else {
                result[2] += 0.033613198;
              }
            } else {
              if ( (data[8].missing != -1) && (data[8].fvalue < (float)-0.18555359542)) {
                result[2] += 0.037711583;
              } else {
                result[2] += -0.004116207;
              }
            }
          }
        } else {
          if ( (data[13].missing != -1) && (data[13].fvalue < (float)0.76375257969)) {
            if ( (data[13].missing != -1) && (data[13].fvalue < (float)0.020154384896)) {
              if ( (data[6].missing != -1) && (data[6].fvalue < (float)0.64755177498)) {
                result[2] += 0.0436603;
              } else {
                result[2] += 0.005096802;
              }
            } else {
              result[2] += 0.057490375;
            }
          } else {
            result[2] += -0.008968891;
          }
        }
      }
    } else {
      if ( (data[5].missing != -1) && (data[5].fvalue < (float)-0.39324355125)) {
        result[2] += 0.023374533;
      } else {
        if ( (data[0].missing != -1) && (data[0].fvalue < (float)-1.1717795134)) {
          result[2] += -0.048472118;
        } else {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)0.87656605244)) {
            if ( (data[14].missing != -1) && (data[14].fvalue < (float)-0.17553567886)) {
              result[2] += -0.041004088;
            } else {
              result[2] += -0.010764479;
            }
          } else {
            result[2] += 0.018530186;
          }
        }
      }
    }
  } else {
    if ( (data[9].missing != -1) && (data[9].fvalue < (float)0.71858865023)) {
      result[2] += -0.022235006;
    } else {
      result[2] += -0.050457623;
    }
  }
  if ( (data[2].missing != -1) && (data[2].fvalue < (float)0.13540814817)) {
    if ( (data[6].missing != -1) && (data[6].fvalue < (float)-0.024934647605)) {
      if ( (data[9].missing != -1) && (data[9].fvalue < (float)0.99281823635)) {
        if ( (data[7].missing != -1) && (data[7].fvalue < (float)-0.20919252932)) {
          result[3] += 0.02414945;
        } else {
          result[3] += 0.060551673;
        }
      } else {
        result[3] += 0.022161772;
      }
    } else {
      if ( (data[13].missing != -1) && (data[13].fvalue < (float)0.020154384896)) {
        result[3] += -0.037580963;
      } else {
        result[3] += 0.012609354;
      }
    }
  } else {
    if ( (data[7].missing != -1) && (data[7].fvalue < (float)-0.94923579693)) {
      if ( (data[13].missing != -1) && (data[13].fvalue < (float)-1.0194351673)) {
        if ( (data[10].missing != -1) && (data[10].fvalue < (float)-0.70290791988)) {
          result[3] += 0.023302058;
        } else {
          result[3] += -0.029884253;
        }
      } else {
        if ( (data[12].missing != -1) && (data[12].fvalue < (float)0.98061102629)) {
          result[3] += 0.007249386;
        } else {
          result[3] += 0.062174994;
        }
      }
    } else {
      if ( (data[10].missing != -1) && (data[10].fvalue < (float)-0.39829662442)) {
        if ( (data[12].missing != -1) && (data[12].fvalue < (float)0.64476305246)) {
          result[3] += -0.04888339;
        } else {
          result[3] += -0.021236889;
        }
      } else {
        if ( (data[5].missing != -1) && (data[5].fvalue < (float)-0.44998666644)) {
          result[3] += -0.049712118;
        } else {
          if ( (data[7].missing != -1) && (data[7].fvalue < (float)1.4132658243)) {
            if ( (data[15].missing != -1) && (data[15].fvalue < (float)-0.60108989477)) {
              if ( (data[5].missing != -1) && (data[5].fvalue < (float)0.0089093819261)) {
                result[3] += 0.0386311;
              } else {
                result[3] += -0.023981497;
              }
            } else {
              if ( (data[15].missing != -1) && (data[15].fvalue < (float)-0.50750309229)) {
                result[3] += -0.05915252;
              } else {
                result[3] += -0.00017101115;
              }
            }
          } else {
            result[3] += -0.039530903;
          }
        }
      }
    }
  }
  if ( (data[8].missing != -1) && (data[8].fvalue < (float)-0.18742009997)) {
    if ( (data[3].missing != -1) && (data[3].fvalue < (float)1.1233414412)) {
      if ( (data[3].missing != -1) && (data[3].fvalue < (float)-1.1314468384)) {
        result[0] += -0.042484134;
      } else {
        if ( (data[5].missing != -1) && (data[5].fvalue < (float)-0.41925215721)) {
          if ( (data[11].missing != -1) && (data[11].fvalue < (float)-0.26988664269)) {
            result[0] += 0.058721807;
          } else {
            result[0] += 0.017116237;
          }
        } else {
          if ( (data[16].missing != -1) && (data[16].fvalue < (float)0.0034450558014)) {
            if ( (data[6].missing != -1) && (data[6].fvalue < (float)-0.12222632766)) {
              result[0] += -0.00736682;
            } else {
              result[0] += -0.04777963;
            }
          } else {
            if ( (data[8].missing != -1) && (data[8].fvalue < (float)-0.21442578733)) {
              result[0] += 0.052906256;
            } else {
              if ( (data[10].missing != -1) && (data[10].fvalue < (float)-0.54909944534)) {
                result[0] += 0.026098832;
              } else {
                result[0] += -0.017748486;
              }
            }
          }
        }
      }
    } else {
      if ( (data[9].missing != -1) && (data[9].fvalue < (float)-0.55537575483)) {
        result[0] += -0.027153015;
      } else {
        result[0] += -0.052696448;
      }
    }
  } else {
    if ( (data[11].missing != -1) && (data[11].fvalue < (float)-0.23780336976)) {
      if ( (data[9].missing != -1) && (data[9].fvalue < (float)0.51526743174)) {
        result[0] += 0.07593779;
      } else {
        result[0] += 0.03891444;
      }
    } else {
      if ( (data[13].missing != -1) && (data[13].fvalue < (float)0.98732662201)) {
        if ( (data[7].missing != -1) && (data[7].fvalue < (float)0.18711844087)) {
          if ( (data[10].missing != -1) && (data[10].fvalue < (float)-0.96155822277)) {
            result[0] += -0.03212008;
          } else {
            if ( (data[5].missing != -1) && (data[5].fvalue < (float)-0.14628712833)) {
              if ( (data[12].missing != -1) && (data[12].fvalue < (float)0.54590326548)) {
                result[0] += 0.04283811;
              } else {
                result[0] += 0.00066437194;
              }
            } else {
              if ( (data[7].missing != -1) && (data[7].fvalue < (float)-0.71226298809)) {
                result[0] += 0.019334096;
              } else {
                result[0] += -0.027314698;
              }
            }
          }
        } else {
          if ( (data[14].missing != -1) && (data[14].fvalue < (float)-0.79320174456)) {
            result[0] += 0.0053921263;
          } else {
            result[0] += -0.048532672;
          }
        }
      } else {
        result[0] += 0.06307287;
      }
    }
  }
  if ( (data[7].missing != -1) && (data[7].fvalue < (float)0.67131799459)) {
    if ( (data[13].missing != -1) && (data[13].fvalue < (float)1.2953075171)) {
      if ( (data[12].missing != -1) && (data[12].fvalue < (float)0.26557740569)) {
        result[1] += -0.05197693;
      } else {
        if ( (data[0].missing != -1) && (data[0].fvalue < (float)0.42515167594)) {
          result[1] += 0.005944747;
        } else {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)1.4091589451)) {
            result[1] += -0.04752434;
          } else {
            result[1] += -0.026487112;
          }
        }
      }
    } else {
      if ( (data[3].missing != -1) && (data[3].fvalue < (float)-0.21026010811)) {
        result[1] += 0.029846355;
      } else {
        result[1] += -0.016706027;
      }
    }
  } else {
    if ( (data[0].missing != -1) && (data[0].fvalue < (float)-1.4317775965)) {
      if ( (data[3].missing != -1) && (data[3].fvalue < (float)1.3708487749)) {
        if ( (data[3].missing != -1) && (data[3].fvalue < (float)0.88894993067)) {
          result[1] += 0.03181737;
        } else {
          result[1] += 0.05860557;
        }
      } else {
        if ( (data[13].missing != -1) && (data[13].fvalue < (float)0.80325615406)) {
          result[1] += 0.0382274;
        } else {
          result[1] += -0.022136828;
        }
      }
    } else {
      if ( (data[5].missing != -1) && (data[5].fvalue < (float)-0.11666432023)) {
        if ( (data[13].missing != -1) && (data[13].fvalue < (float)0.85409128666)) {
          result[1] += -0.05275936;
        } else {
          if ( (data[16].missing != -1) && (data[16].fvalue < (float)0.00039073103108)) {
            result[1] += 0.023999458;
          } else {
            result[1] += -0.016520767;
          }
        }
      } else {
        if ( (data[12].missing != -1) && (data[12].fvalue < (float)-1.3782277107)) {
          result[1] += -0.018119404;
        } else {
          result[1] += 0.04792023;
        }
      }
    }
  }
  if ( (data[3].missing != -1) && (data[3].fvalue < (float)-0.99287575483)) {
    if ( (data[8].missing != -1) && (data[8].fvalue < (float)-0.20631541312)) {
      if ( (data[16].missing != -1) && (data[16].fvalue < (float)-0.019668526947)) {
        result[2] += 0.031434774;
      } else {
        result[2] += 0.053008076;
      }
    } else {
      if ( (data[16].missing != -1) && (data[16].fvalue < (float)0.018835080788)) {
        if ( (data[16].missing != -1) && (data[16].fvalue < (float)-0.027504025027)) {
          result[2] += -0.0008820737;
        } else {
          result[2] += 0.045869514;
        }
      } else {
        result[2] += -0.027470032;
      }
    }
  } else {
    if ( (data[5].missing != -1) && (data[5].fvalue < (float)-0.15679863095)) {
      if ( (data[3].missing != -1) && (data[3].fvalue < (float)-0.31944227219)) {
        if ( (data[7].missing != -1) && (data[7].fvalue < (float)-0.18220323324)) {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)-0.65259510279)) {
            if ( (data[7].missing != -1) && (data[7].fvalue < (float)-0.50186371803)) {
              result[2] += -0.0249975;
            } else {
              result[2] += -0.052069712;
            }
          } else {
            result[2] += -0.004171366;
          }
        } else {
          if ( (data[11].missing != -1) && (data[11].fvalue < (float)-0.25257846713)) {
            result[2] += -0.011412789;
          } else {
            result[2] += 0.0583391;
          }
        }
      } else {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)-0.45234051347)) {
          if ( (data[5].missing != -1) && (data[5].fvalue < (float)-0.3763114512)) {
            result[2] += 0.026683185;
          } else {
            if ( (data[5].missing != -1) && (data[5].fvalue < (float)-0.27715989947)) {
              result[2] += -0.046197068;
            } else {
              result[2] += -0.0060416507;
            }
          }
        } else {
          result[2] += -0.051278837;
        }
      }
    } else {
      if ( (data[3].missing != -1) && (data[3].fvalue < (float)1.1059601307)) {
        if ( (data[8].missing != -1) && (data[8].fvalue < (float)-0.21392957866)) {
          result[2] += -0.036405932;
        } else {
          if ( (data[12].missing != -1) && (data[12].fvalue < (float)0.37132626772)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)0.92333030701)) {
              if ( (data[9].missing != -1) && (data[9].fvalue < (float)-0.59347981215)) {
                result[2] += 0.008451746;
              } else {
                result[2] += 0.043915264;
              }
            } else {
              result[2] += -0.008636894;
            }
          } else {
            if ( (data[11].missing != -1) && (data[11].fvalue < (float)-0.17039236426)) {
              result[2] += -0.05189212;
            } else {
              result[2] += 0.019722203;
            }
          }
        }
      } else {
        result[2] += -0.041113373;
      }
    }
  }
  if ( (data[2].missing != -1) && (data[2].fvalue < (float)-2.5894255638)) {
    result[3] += 0.055996295;
  } else {
    if ( (data[6].missing != -1) && (data[6].fvalue < (float)-0.12928208709)) {
      if ( (data[1].missing != -1) && (data[1].fvalue < (float)-1.5993287563)) {
        if ( (data[11].missing != -1) && (data[11].fvalue < (float)-0.21079160273)) {
          result[3] += 0.018104298;
        } else {
          result[3] += 0.057254493;
        }
      } else {
        if ( (data[8].missing != -1) && (data[8].fvalue < (float)0.9665927887)) {
          if ( (data[15].missing != -1) && (data[15].fvalue < (float)0.20022596419)) {
            if ( (data[13].missing != -1) && (data[13].fvalue < (float)0.45347779989)) {
              if ( (data[11].missing != -1) && (data[11].fvalue < (float)-0.21313621104)) {
                result[3] += 0.063404284;
              } else {
                result[3] += 0.014709482;
              }
            } else {
              result[3] += -0.011051485;
            }
          } else {
            if ( (data[12].missing != -1) && (data[12].fvalue < (float)0.8181411624)) {
              if ( (data[5].missing != -1) && (data[5].fvalue < (float)-0.44625386596)) {
                result[3] += -0.014415036;
              } else {
                result[3] += -0.052488368;
              }
            } else {
              if ( (data[11].missing != -1) && (data[11].fvalue < (float)-0.14974308014)) {
                result[3] += -0.03669597;
              } else {
                result[3] += 0.044309556;
              }
            }
          }
        } else {
          result[3] += 0.052895486;
        }
      }
    } else {
      if ( (data[16].missing != -1) && (data[16].fvalue < (float)0.0040734801441)) {
        if ( (data[5].missing != -1) && (data[5].fvalue < (float)-0.24679374695)) {
          result[3] += -0.04858711;
        } else {
          result[3] += -0.02508165;
        }
      } else {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)-0.31248277426)) {
          if ( (data[5].missing != -1) && (data[5].fvalue < (float)-0.14007590711)) {
            result[3] += -0.025849095;
          } else {
            if ( (data[8].missing != -1) && (data[8].fvalue < (float)-0.20639407635)) {
              result[3] += -0.019029805;
            } else {
              result[3] += 0.07123008;
            }
          }
        } else {
          if ( (data[14].missing != -1) && (data[14].fvalue < (float)-0.37916812301)) {
            result[3] += -0.05186918;
          } else {
            if ( (data[6].missing != -1) && (data[6].fvalue < (float)1.009770751)) {
              if ( (data[16].missing != -1) && (data[16].fvalue < (float)0.069090053439)) {
                result[3] += -0.0075756363;
              } else {
                result[3] += 0.042733498;
              }
            } else {
              result[3] += -0.03368361;
            }
          }
        }
      }
    }
  }
  if ( (data[9].missing != -1) && (data[9].fvalue < (float)-0.25189942122)) {
    if ( (data[12].missing != -1) && (data[12].fvalue < (float)-0.71274340153)) {
      result[0] += -0.044283174;
    } else {
      if ( (data[3].missing != -1) && (data[3].fvalue < (float)0.015094771981)) {
        if ( (data[7].missing != -1) && (data[7].fvalue < (float)-0.34532478452)) {
          result[0] += 0.0022069523;
        } else {
          result[0] += -0.046715174;
        }
      } else {
        result[0] += 0.044982687;
      }
    }
  } else {
    if ( (data[11].missing != -1) && (data[11].fvalue < (float)-0.22255906463)) {
      if ( (data[8].missing != -1) && (data[8].fvalue < (float)-0.18456360698)) {
        if ( (data[5].missing != -1) && (data[5].fvalue < (float)-0.35727164149)) {
          if ( (data[16].missing != -1) && (data[16].fvalue < (float)-0.0012300383532)) {
            result[0] += 0.0062077735;
          } else {
            result[0] += 0.052316923;
          }
        } else {
          if ( (data[5].missing != -1) && (data[5].fvalue < (float)-0.25515717268)) {
            result[0] += -0.030347345;
          } else {
            if ( (data[5].missing != -1) && (data[5].fvalue < (float)-0.019165378064)) {
              result[0] += 0.029268915;
            } else {
              result[0] += -0.018944975;
            }
          }
        }
      } else {
        result[0] += 0.053267222;
      }
    } else {
      if ( (data[10].missing != -1) && (data[10].fvalue < (float)-0.85419273376)) {
        result[0] += -0.03916512;
      } else {
        if ( (data[7].missing != -1) && (data[7].fvalue < (float)-0.4675784409)) {
          if ( (data[11].missing != -1) && (data[11].fvalue < (float)-0.16485464573)) {
            result[0] += 0.05870936;
          } else {
            if ( (data[12].missing != -1) && (data[12].fvalue < (float)0.56249433756)) {
              if ( (data[6].missing != -1) && (data[6].fvalue < (float)-0.28605768085)) {
                result[0] += 0.056962956;
              } else {
                result[0] += -0.010502658;
              }
            } else {
              if ( (data[6].missing != -1) && (data[6].fvalue < (float)-0.7999060154)) {
                result[0] += -0.044111807;
              } else {
                result[0] += 0.01622351;
              }
            }
          }
        } else {
          if ( (data[14].missing != -1) && (data[14].fvalue < (float)0.5324190259)) {
            if ( (data[11].missing != -1) && (data[11].fvalue < (float)0.37818393111)) {
              if ( (data[5].missing != -1) && (data[5].fvalue < (float)-0.30542847514)) {
                result[0] += 0.01276173;
              } else {
                result[0] += -0.020665118;
              }
            } else {
              result[0] += 0.03739695;
            }
          } else {
            result[0] += -0.03980138;
          }
        }
      }
    }
  }
  if ( (data[0].missing != -1) && (data[0].fvalue < (float)-0.88791364431)) {
    if ( (data[8].missing != -1) && (data[8].fvalue < (float)-0.21968281269)) {
      if ( (data[5].missing != -1) && (data[5].fvalue < (float)-0.38821652532)) {
        result[1] += 0.025144858;
      } else {
        result[1] += 0.05238191;
      }
    } else {
      if ( (data[10].missing != -1) && (data[10].fvalue < (float)1.6924813986)) {
        if ( (data[11].missing != -1) && (data[11].fvalue < (float)-0.24807538092)) {
          if ( (data[16].missing != -1) && (data[16].fvalue < (float)0.0040734801441)) {
            if ( (data[0].missing != -1) && (data[0].fvalue < (float)-1.4190087318)) {
              result[1] += 0.0423779;
            } else {
              result[1] += 0.0056190114;
            }
          } else {
            result[1] += -0.021530671;
          }
        } else {
          result[1] += 0.046641733;
        }
      } else {
        result[1] += -0.040650338;
      }
    }
  } else {
    if ( (data[13].missing != -1) && (data[13].fvalue < (float)1.2225931883)) {
      if ( (data[3].missing != -1) && (data[3].fvalue < (float)-1.1986523867)) {
        result[1] += -0.015875397;
      } else {
        if ( (data[1].missing != -1) && (data[1].fvalue < (float)-0.043292935938)) {
          result[1] += -0.02796038;
        } else {
          if ( (data[10].missing != -1) && (data[10].fvalue < (float)-0.79976952076)) {
            result[1] += -0.026944686;
          } else {
            result[1] += -0.050349772;
          }
        }
      }
    } else {
      if ( (data[16].missing != -1) && (data[16].fvalue < (float)0.048564616591)) {
        result[1] += -0.04259954;
      } else {
        result[1] += 0.03346286;
      }
    }
  }
  if ( (data[10].missing != -1) && (data[10].fvalue < (float)-0.023404598236)) {
    if ( (data[8].missing != -1) && (data[8].fvalue < (float)0.0070507549681)) {
      if ( (data[5].missing != -1) && (data[5].fvalue < (float)-0.019165378064)) {
        if ( (data[16].missing != -1) && (data[16].fvalue < (float)0.039527323097)) {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)-0.91771012545)) {
            if ( (data[16].missing != -1) && (data[16].fvalue < (float)-0.019200904295)) {
              if ( (data[3].missing != -1) && (data[3].fvalue < (float)-1.3735567331)) {
                result[2] += 0.04160465;
              } else {
                result[2] += -0.01715603;
              }
            } else {
              result[2] += 0.050123084;
            }
          } else {
            if ( (data[14].missing != -1) && (data[14].fvalue < (float)0.45792663097)) {
              if ( (data[3].missing != -1) && (data[3].fvalue < (float)-0.31944227219)) {
                result[2] += 0.037034493;
              } else {
                result[2] += -0.013862642;
              }
            } else {
              if ( (data[14].missing != -1) && (data[14].fvalue < (float)0.74485391378)) {
                result[2] += -0.040622633;
              } else {
                result[2] += 0.019979438;
              }
            }
          }
        } else {
          result[2] += -0.03890218;
        }
      } else {
        if ( (data[6].missing != -1) && (data[6].fvalue < (float)0.64755177498)) {
          result[2] += 0.05357209;
        } else {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)-0.64039719105)) {
            result[2] += 0.040557887;
          } else {
            result[2] += 0.004246177;
          }
        }
      }
    } else {
      if ( (data[12].missing != -1) && (data[12].fvalue < (float)0.6569827795)) {
        result[2] += 0.0032934824;
      } else {
        result[2] += -0.05057844;
      }
    }
  } else {
    if ( (data[5].missing != -1) && (data[5].fvalue < (float)1.667165041)) {
      if ( (data[3].missing != -1) && (data[3].fvalue < (float)0.19738391042)) {
        if ( (data[16].missing != -1) && (data[16].fvalue < (float)0.022840771824)) {
          if ( (data[14].missing != -1) && (data[14].fvalue < (float)-0.36947375536)) {
            result[2] += 1.8732646e-06;
          } else {
            result[2] += -0.04688516;
          }
        } else {
          if ( (data[16].missing != -1) && (data[16].fvalue < (float)0.045531481504)) {
            result[2] += 0.03460834;
          } else {
            result[2] += -0.020969212;
          }
        }
      } else {
        if ( (data[12].missing != -1) && (data[12].fvalue < (float)-0.8439835906)) {
          if ( (data[13].missing != -1) && (data[13].fvalue < (float)0.61577022076)) {
            result[2] += 0.020530336;
          } else {
            result[2] += -0.04144267;
          }
        } else {
          result[2] += -0.052673556;
        }
      }
    } else {
      if ( (data[10].missing != -1) && (data[10].fvalue < (float)0.79747533798)) {
        result[2] += 0.032155264;
      } else {
        result[2] += -0.012600017;
      }
    }
  }
  if ( (data[7].missing != -1) && (data[7].fvalue < (float)1.4132658243)) {
    if ( (data[3].missing != -1) && (data[3].fvalue < (float)-0.24711900949)) {
      if ( (data[8].missing != -1) && (data[8].fvalue < (float)-0.12956127524)) {
        if ( (data[2].missing != -1) && (data[2].fvalue < (float)0.1194704473)) {
          result[3] += 0.0036409185;
        } else {
          if ( (data[12].missing != -1) && (data[12].fvalue < (float)0.66239464283)) {
            if ( (data[11].missing != -1) && (data[11].fvalue < (float)-0.25888600945)) {
              result[3] += -0.013655352;
            } else {
              result[3] += -0.050513465;
            }
          } else {
            result[3] += -0.011944734;
          }
        }
      } else {
        if ( (data[3].missing != -1) && (data[3].fvalue < (float)-0.84289908409)) {
          result[3] += 0.046003964;
        } else {
          result[3] += -0.008310521;
        }
      }
    } else {
      if ( (data[5].missing != -1) && (data[5].fvalue < (float)-0.43748578429)) {
        if ( (data[6].missing != -1) && (data[6].fvalue < (float)-1.0832853317)) {
          result[3] += 0.0075576925;
        } else {
          result[3] += -0.04809882;
        }
      } else {
        if ( (data[6].missing != -1) && (data[6].fvalue < (float)-0.081195987761)) {
          if ( (data[11].missing != -1) && (data[11].fvalue < (float)-0.018274491653)) {
            if ( (data[8].missing != -1) && (data[8].fvalue < (float)-0.19121129811)) {
              result[3] += 0.025286365;
            } else {
              result[3] += 0.059131976;
            }
          } else {
            if ( (data[7].missing != -1) && (data[7].fvalue < (float)-1.0147081614)) {
              result[3] += 0.041731182;
            } else {
              if ( (data[7].missing != -1) && (data[7].fvalue < (float)-0.18876649439)) {
                result[3] += -0.035841405;
              } else {
                result[3] += 0.030470205;
              }
            }
          }
        } else {
          if ( (data[15].missing != -1) && (data[15].fvalue < (float)-0.45428651571)) {
            if ( (data[0].missing != -1) && (data[0].fvalue < (float)-1.1880815029)) {
              result[3] += 0.031650525;
            } else {
              if ( (data[9].missing != -1) && (data[9].fvalue < (float)-0.51682901382)) {
                result[3] += -0.013648897;
              } else {
                result[3] += -0.056338575;
              }
            }
          } else {
            if ( (data[15].missing != -1) && (data[15].fvalue < (float)-0.11912943423)) {
              result[3] += 0.05866447;
            } else {
              if ( (data[16].missing != -1) && (data[16].fvalue < (float)0.070572808385)) {
                result[3] += -0.019079624;
              } else {
                result[3] += 0.036767565;
              }
            }
          }
        }
      }
    }
  } else {
    result[3] += -0.040110096;
  }
  if ( (data[9].missing != -1) && (data[9].fvalue < (float)-0.25189942122)) {
    if ( (data[7].missing != -1) && (data[7].fvalue < (float)-0.36191350222)) {
      result[0] += 0.023252973;
    } else {
      if ( (data[1].missing != -1) && (data[1].fvalue < (float)-1.5069233179)) {
        result[0] += 0.01291121;
      } else {
        if ( (data[8].missing != -1) && (data[8].fvalue < (float)-0.18701218069)) {
          if ( (data[6].missing != -1) && (data[6].fvalue < (float)1.182049036)) {
            result[0] += -0.050701924;
          } else {
            result[0] += -0.0149357915;
          }
        } else {
          result[0] += -0.0053015198;
        }
      }
    }
  } else {
    if ( (data[5].missing != -1) && (data[5].fvalue < (float)-0.48074766994)) {
      if ( (data[10].missing != -1) && (data[10].fvalue < (float)-0.85419273376)) {
        result[0] += -0.0033139363;
      } else {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)1.7629503012)) {
          result[0] += 0.047829922;
        } else {
          result[0] += 0.010066753;
        }
      }
    } else {
      if ( (data[2].missing != -1) && (data[2].fvalue < (float)0.038101356477)) {
        if ( (data[6].missing != -1) && (data[6].fvalue < (float)0.041582621634)) {
          result[0] += -0.05010093;
        } else {
          result[0] += 0.030950537;
        }
      } else {
        if ( (data[1].missing != -1) && (data[1].fvalue < (float)0.43742504716)) {
          if ( (data[10].missing != -1) && (data[10].fvalue < (float)0.032870963216)) {
            if ( (data[1].missing != -1) && (data[1].fvalue < (float)-0.57398217916)) {
              result[0] += 0.030876547;
            } else {
              result[0] += 0.0563056;
            }
          } else {
            result[0] += 0.0046383836;
          }
        } else {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)0.2037332952)) {
            if ( (data[13].missing != -1) && (data[13].fvalue < (float)-1.4362953901)) {
              result[0] += 0.032618277;
            } else {
              if ( (data[16].missing != -1) && (data[16].fvalue < (float)0.0040734801441)) {
                result[0] += -0.04439668;
              } else {
                result[0] += -0.0063255182;
              }
            }
          } else {
            if ( (data[16].missing != -1) && (data[16].fvalue < (float)0.070572808385)) {
              if ( (data[8].missing != -1) && (data[8].fvalue < (float)0.50055772066)) {
                result[0] += 0.041394077;
              } else {
                result[0] += -0.0050950586;
              }
            } else {
              result[0] += -0.019278577;
            }
          }
        }
      }
    }
  }
  if ( (data[0].missing != -1) && (data[0].fvalue < (float)-0.72903758287)) {
    if ( (data[8].missing != -1) && (data[8].fvalue < (float)-0.21920143068)) {
      if ( (data[11].missing != -1) && (data[11].fvalue < (float)-0.27167388797)) {
        if ( (data[3].missing != -1) && (data[3].fvalue < (float)0.87656605244)) {
          result[1] += 0.0051512416;
        } else {
          result[1] += 0.03543352;
        }
      } else {
        result[1] += 0.05583752;
      }
    } else {
      if ( (data[10].missing != -1) && (data[10].fvalue < (float)1.6924813986)) {
        if ( (data[13].missing != -1) && (data[13].fvalue < (float)1.0023117065)) {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)1.276345253)) {
            result[1] += -0.038562067;
          } else {
            result[1] += 0.012466046;
          }
        } else {
          if ( (data[13].missing != -1) && (data[13].fvalue < (float)1.736979723)) {
            if ( (data[11].missing != -1) && (data[11].fvalue < (float)-0.25284281373)) {
              result[1] += 0.0138262985;
            } else {
              result[1] += 0.057790197;
            }
          } else {
            result[1] += -0.0042497218;
          }
        }
      } else {
        result[1] += -0.048015706;
      }
    }
  } else {
    if ( (data[13].missing != -1) && (data[13].fvalue < (float)1.2953075171)) {
      if ( (data[3].missing != -1) && (data[3].fvalue < (float)-1.1986523867)) {
        result[1] += -0.018812416;
      } else {
        if ( (data[6].missing != -1) && (data[6].fvalue < (float)0.054371412843)) {
          result[1] += -0.0492245;
        } else {
          if ( (data[6].missing != -1) && (data[6].fvalue < (float)0.48718306422)) {
            result[1] += 0.0059626102;
          } else {
            result[1] += -0.04752481;
          }
        }
      }
    } else {
      result[1] += 0.00038810307;
    }
  }
  if ( (data[3].missing != -1) && (data[3].fvalue < (float)0.42276966572)) {
    if ( (data[3].missing != -1) && (data[3].fvalue < (float)-1.3599464893)) {
      if ( (data[11].missing != -1) && (data[11].fvalue < (float)-0.24118795991)) {
        result[2] += 0.05092327;
      } else {
        result[2] += 0.02758419;
      }
    } else {
      if ( (data[5].missing != -1) && (data[5].fvalue < (float)-0.019165378064)) {
        if ( (data[12].missing != -1) && (data[12].fvalue < (float)0.9569453001)) {
          if ( (data[10].missing != -1) && (data[10].fvalue < (float)-0.22218285501)) {
            if ( (data[14].missing != -1) && (data[14].fvalue < (float)0.47008636594)) {
              if ( (data[11].missing != -1) && (data[11].fvalue < (float)-0.2405167073)) {
                result[2] += -0.0013672485;
              } else {
                result[2] += 0.039882127;
              }
            } else {
              if ( (data[15].missing != -1) && (data[15].fvalue < (float)0.77644783258)) {
                result[2] += -0.026885955;
              } else {
                result[2] += 0.04615055;
              }
            }
          } else {
            if ( (data[0].missing != -1) && (data[0].fvalue < (float)-0.56242692471)) {
              if ( (data[7].missing != -1) && (data[7].fvalue < (float)0.44960957766)) {
                result[2] += 0.03773125;
              } else {
                result[2] += -0.022735668;
              }
            } else {
              if ( (data[7].missing != -1) && (data[7].fvalue < (float)0.18711844087)) {
                result[2] += -0.051182862;
              } else {
                result[2] += -0.01691795;
              }
            }
          }
        } else {
          result[2] += -0.04915319;
        }
      } else {
        if ( (data[12].missing != -1) && (data[12].fvalue < (float)0.5944904089)) {
          if ( (data[0].missing != -1) && (data[0].fvalue < (float)-0.55165636539)) {
            result[2] += -0.005718873;
          } else {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)-0.39155906439)) {
              result[2] += 0.012516973;
            } else {
              if ( (data[6].missing != -1) && (data[6].fvalue < (float)1.2411134243)) {
                result[2] += 0.049194835;
              } else {
                result[2] += 0.027207782;
              }
            }
          }
        } else {
          if ( (data[11].missing != -1) && (data[11].fvalue < (float)-0.17039236426)) {
            result[2] += -0.03325699;
          } else {
            result[2] += 0.024862725;
          }
        }
      }
    }
  } else {
    if ( (data[5].missing != -1) && (data[5].fvalue < (float)1.667165041)) {
      if ( (data[9].missing != -1) && (data[9].fvalue < (float)-0.29118299484)) {
        if ( (data[13].missing != -1) && (data[13].fvalue < (float)0.73432272673)) {
          result[2] += -0.0026332238;
        } else {
          result[2] += -0.046287734;
        }
      } else {
        result[2] += -0.050320394;
      }
    } else {
      if ( (data[13].missing != -1) && (data[13].fvalue < (float)0.92155778408)) {
        result[2] += 0.02817825;
      } else {
        result[2] += -0.007900795;
      }
    }
  }
  if ( (data[8].missing != -1) && (data[8].fvalue < (float)-0.19386467338)) {
    if ( (data[11].missing != -1) && (data[11].fvalue < (float)-0.26087924838)) {
      if ( (data[8].missing != -1) && (data[8].fvalue < (float)-0.21849969029)) {
        result[3] += -0.035661396;
      } else {
        if ( (data[6].missing != -1) && (data[6].fvalue < (float)-0.081195987761)) {
          result[3] += 0.045017324;
        } else {
          result[3] += 0.0069372826;
        }
      }
    } else {
      if ( (data[16].missing != -1) && (data[16].fvalue < (float)0.056843884289)) {
        if ( (data[0].missing != -1) && (data[0].fvalue < (float)-1.0319960117)) {
          result[3] += -0.020944528;
        } else {
          result[3] += -0.05081111;
        }
      } else {
        result[3] += -0.00909975;
      }
    }
  } else {
    if ( (data[1].missing != -1) && (data[1].fvalue < (float)-1.332406044)) {
      if ( (data[3].missing != -1) && (data[3].fvalue < (float)0.2672431469)) {
        result[3] += 0.01926457;
      } else {
        result[3] += 0.058412075;
      }
    } else {
      if ( (data[12].missing != -1) && (data[12].fvalue < (float)0.99250650406)) {
        if ( (data[5].missing != -1) && (data[5].fvalue < (float)0.092830754817)) {
          if ( (data[12].missing != -1) && (data[12].fvalue < (float)-0.65827143192)) {
            result[3] += 0.015207757;
          } else {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)-0.13882735372)) {
              if ( (data[5].missing != -1) && (data[5].fvalue < (float)-0.31662553549)) {
                result[3] += 0.010309703;
              } else {
                result[3] += -0.037234414;
              }
            } else {
              if ( (data[8].missing != -1) && (data[8].fvalue < (float)0.28493732214)) {
                result[3] += -0.05653428;
              } else {
                result[3] += -0.02403998;
              }
            }
          }
        } else {
          if ( (data[16].missing != -1) && (data[16].fvalue < (float)0.026114549488)) {
            result[3] += -0.028904224;
          } else {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)0.29513585567)) {
              result[3] += 0.058411896;
            } else {
              result[3] += 0.012006185;
            }
          }
        }
      } else {
        if ( (data[11].missing != -1) && (data[11].fvalue < (float)-0.073542796075)) {
          if ( (data[14].missing != -1) && (data[14].fvalue < (float)0.97220617533)) {
            result[3] += 0.011469725;
          } else {
            result[3] += -0.032073684;
          }
        } else {
          if ( (data[5].missing != -1) && (data[5].fvalue < (float)-0.13766139746)) {
            result[3] += 0.059423387;
          } else {
            result[3] += 0.017836006;
          }
        }
      }
    }
  }
  if ( (data[5].missing != -1) && (data[5].fvalue < (float)-0.4851873219)) {
    if ( (data[10].missing != -1) && (data[10].fvalue < (float)-0.85419273376)) {
      result[0] += -0.00795444;
    } else {
      if ( (data[3].missing != -1) && (data[3].fvalue < (float)0.84174287319)) {
        if ( (data[0].missing != -1) && (data[0].fvalue < (float)0.089116312563)) {
          result[0] += 0.015563947;
        } else {
          result[0] += 0.048039526;
        }
      } else {
        result[0] += 0.0061868858;
      }
    }
  } else {
    if ( (data[8].missing != -1) && (data[8].fvalue < (float)-0.21821188927)) {
      if ( (data[10].missing != -1) && (data[10].fvalue < (float)-0.023404598236)) {
        result[0] += -0.0011048858;
      } else {
        result[0] += -0.050013877;
      }
    } else {
      if ( (data[11].missing != -1) && (data[11].fvalue < (float)-0.25357052684)) {
        if ( (data[8].missing != -1) && (data[8].fvalue < (float)-0.19620859623)) {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)-0.37257739902)) {
            result[0] += -0.022967892;
          } else {
            result[0] += 0.03408221;
          }
        } else {
          result[0] += 0.059042443;
        }
      } else {
        if ( (data[7].missing != -1) && (data[7].fvalue < (float)-1.4372395277)) {
          result[0] += -0.04673362;
        } else {
          if ( (data[8].missing != -1) && (data[8].fvalue < (float)0.13410300016)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)-0.25189942122)) {
              if ( (data[11].missing != -1) && (data[11].fvalue < (float)-0.15698228776)) {
                result[0] += -0.039325263;
              } else {
                result[0] += 0.010325848;
              }
            } else {
              if ( (data[11].missing != -1) && (data[11].fvalue < (float)-0.23136755824)) {
                result[0] += 0.023639381;
              } else {
                result[0] += -0.007931977;
              }
            }
          } else {
            if ( (data[7].missing != -1) && (data[7].fvalue < (float)-0.9930356741)) {
              result[0] += 0.0025084198;
            } else {
              result[0] += 0.033786725;
            }
          }
        }
      }
    }
  }
  if ( (data[0].missing != -1) && (data[0].fvalue < (float)-0.42872259021)) {
    if ( (data[8].missing != -1) && (data[8].fvalue < (float)-0.2189950645)) {
      if ( (data[5].missing != -1) && (data[5].fvalue < (float)-0.38821652532)) {
        result[1] += 0.018568648;
      } else {
        if ( (data[5].missing != -1) && (data[5].fvalue < (float)-0.26313957572)) {
          result[1] += 0.053076293;
        } else {
          result[1] += 0.028377628;
        }
      }
    } else {
      if ( (data[11].missing != -1) && (data[11].fvalue < (float)-0.26094642282)) {
        if ( (data[6].missing != -1) && (data[6].fvalue < (float)0.23682963848)) {
          result[1] += -0.051524084;
        } else {
          result[1] += 0.0066726767;
        }
      } else {
        if ( (data[8].missing != -1) && (data[8].fvalue < (float)-0.20033873618)) {
          if ( (data[6].missing != -1) && (data[6].fvalue < (float)1.3929610252)) {
            if ( (data[13].missing != -1) && (data[13].fvalue < (float)1.1100145578)) {
              result[1] += 0.0072022523;
            } else {
              if ( (data[10].missing != -1) && (data[10].fvalue < (float)0.75751793385)) {
                result[1] += 0.0628513;
              } else {
                result[1] += 0.029761706;
              }
            }
          } else {
            result[1] += -0.015857603;
          }
        } else {
          result[1] += -0.018803569;
        }
      }
    }
  } else {
    if ( (data[6].missing != -1) && (data[6].fvalue < (float)0.12343075126)) {
      result[1] += -0.049219783;
    } else {
      if ( (data[6].missing != -1) && (data[6].fvalue < (float)0.56409221888)) {
        result[1] += 0.005545679;
      } else {
        result[1] += -0.03929219;
      }
    }
  }
  if ( (data[8].missing != -1) && (data[8].fvalue < (float)0.011566273868)) {
    if ( (data[0].missing != -1) && (data[0].fvalue < (float)-1.1717795134)) {
      if ( (data[0].missing != -1) && (data[0].fvalue < (float)-1.6378010511)) {
        result[2] += -0.010167822;
      } else {
        result[2] += -0.047819387;
      }
    } else {
      if ( (data[3].missing != -1) && (data[3].fvalue < (float)-1.3735567331)) {
        result[2] += 0.047714517;
      } else {
        if ( (data[6].missing != -1) && (data[6].fvalue < (float)1.4158411026)) {
          if ( (data[6].missing != -1) && (data[6].fvalue < (float)1.1539894342)) {
            if ( (data[5].missing != -1) && (data[5].fvalue < (float)-0.072991624475)) {
              if ( (data[3].missing != -1) && (data[3].fvalue < (float)-0.94150280952)) {
                result[2] += 0.01917108;
              } else {
                result[2] += -0.0062086293;
              }
            } else {
              if ( (data[13].missing != -1) && (data[13].fvalue < (float)0.76375257969)) {
                result[2] += 0.03463238;
              } else {
                result[2] += -0.01797731;
              }
            }
          } else {
            if ( (data[12].missing != -1) && (data[12].fvalue < (float)-0.092629112303)) {
              result[2] += -0.04560025;
            } else {
              result[2] += -0.0057589933;
            }
          }
        } else {
          if ( (data[8].missing != -1) && (data[8].fvalue < (float)-0.2038538605)) {
            result[2] += 0.04995652;
          } else {
            result[2] += 0.01852352;
          }
        }
      }
    }
  } else {
    if ( (data[12].missing != -1) && (data[12].fvalue < (float)0.14209826291)) {
      result[2] += -0.0057389843;
    } else {
      result[2] += -0.047089897;
    }
  }
  if ( (data[6].missing != -1) && (data[6].fvalue < (float)1.009770751)) {
    if ( (data[2].missing != -1) && (data[2].fvalue < (float)-0.069487594068)) {
      if ( (data[16].missing != -1) && (data[16].fvalue < (float)0.014951017685)) {
        result[3] += 0.0017926062;
      } else {
        if ( (data[0].missing != -1) && (data[0].fvalue < (float)0.69700944424)) {
          result[3] += 0.0629309;
        } else {
          result[3] += 0.014085491;
        }
      }
    } else {
      if ( (data[8].missing != -1) && (data[8].fvalue < (float)-0.18555359542)) {
        if ( (data[11].missing != -1) && (data[11].fvalue < (float)-0.26087924838)) {
          if ( (data[11].missing != -1) && (data[11].fvalue < (float)-0.26983201504)) {
            result[3] += -0.037436396;
          } else {
            if ( (data[6].missing != -1) && (data[6].fvalue < (float)0.10018060356)) {
              result[3] += 0.052338578;
            } else {
              result[3] += -0.0047021206;
            }
          }
        } else {
          if ( (data[16].missing != -1) && (data[16].fvalue < (float)0.042571268976)) {
            if ( (data[11].missing != -1) && (data[11].fvalue < (float)-0.24807538092)) {
              result[3] += -0.0098230345;
            } else {
              result[3] += -0.054675847;
            }
          } else {
            result[3] += 0.0015721159;
          }
        }
      } else {
        if ( (data[8].missing != -1) && (data[8].fvalue < (float)-0.16773824394)) {
          result[3] += 0.033211555;
        } else {
          if ( (data[8].missing != -1) && (data[8].fvalue < (float)-0.14673832059)) {
            result[3] += -0.034316856;
          } else {
            if ( (data[16].missing != -1) && (data[16].fvalue < (float)0.044379305094)) {
              if ( (data[9].missing != -1) && (data[9].fvalue < (float)0.48028355837)) {
                result[3] += 0.02687279;
              } else {
                result[3] += -0.015405475;
              }
            } else {
              if ( (data[10].missing != -1) && (data[10].fvalue < (float)0.17849488556)) {
                result[3] += 0.01626798;
              } else {
                result[3] += 0.05038793;
              }
            }
          }
        }
      }
    }
  } else {
    if ( (data[13].missing != -1) && (data[13].fvalue < (float)0.93093466759)) {
      result[3] += -0.047333777;
    } else {
      result[3] += -0.00031779154;
    }
  }
  if ( (data[5].missing != -1) && (data[5].fvalue < (float)-0.48074766994)) {
    if ( (data[10].missing != -1) && (data[10].fvalue < (float)-0.85419273376)) {
      result[0] += -0.015453423;
    } else {
      if ( (data[3].missing != -1) && (data[3].fvalue < (float)0.86093568802)) {
        if ( (data[11].missing != -1) && (data[11].fvalue < (float)-0.21912281215)) {
          result[0] += 0.05457741;
        } else {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)0.49207127094)) {
            result[0] += 0.0051770224;
          } else {
            result[0] += 0.047858227;
          }
        }
      } else {
        result[0] += 0.012481282;
      }
    }
  } else {
    if ( (data[9].missing != -1) && (data[9].fvalue < (float)-0.25189942122)) {
      if ( (data[8].missing != -1) && (data[8].fvalue < (float)-0.21625265479)) {
        result[0] += -0.046080764;
      } else {
        if ( (data[11].missing != -1) && (data[11].fvalue < (float)-0.25357052684)) {
          result[0] += 0.024725473;
        } else {
          if ( (data[11].missing != -1) && (data[11].fvalue < (float)-0.15698228776)) {
            if ( (data[5].missing != -1) && (data[5].fvalue < (float)-0.26934820414)) {
              result[0] += -0.017117703;
            } else {
              result[0] += -0.048166346;
            }
          } else {
            result[0] += 0.0097714225;
          }
        }
      }
    } else {
      if ( (data[11].missing != -1) && (data[11].fvalue < (float)-0.23058250546)) {
        if ( (data[5].missing != -1) && (data[5].fvalue < (float)-0.019165378064)) {
          if ( (data[5].missing != -1) && (data[5].fvalue < (float)-0.25515717268)) {
            if ( (data[11].missing != -1) && (data[11].fvalue < (float)-0.26674380898)) {
              result[0] += 0.035742044;
            } else {
              result[0] += -0.009447965;
            }
          } else {
            result[0] += 0.05928875;
          }
        } else {
          result[0] += -0.0155886365;
        }
      } else {
        if ( (data[3].missing != -1) && (data[3].fvalue < (float)0.29908499122)) {
          if ( (data[1].missing != -1) && (data[1].fvalue < (float)0.19310203195)) {
            result[0] += 0.019362364;
          } else {
            if ( (data[16].missing != -1) && (data[16].fvalue < (float)0.05406229943)) {
              if ( (data[13].missing != -1) && (data[13].fvalue < (float)-0.6913408637)) {
                result[0] += -0.05187173;
              } else {
                result[0] += -0.018390473;
              }
            } else {
              result[0] += -0.00133096;
            }
          }
        } else {
          if ( (data[16].missing != -1) && (data[16].fvalue < (float)0.067746691406)) {
            if ( (data[13].missing != -1) && (data[13].fvalue < (float)0.65003782511)) {
              if ( (data[7].missing != -1) && (data[7].fvalue < (float)-0.42048981786)) {
                result[0] += 0.021197846;
              } else {
                result[0] += -0.026798243;
              }
            } else {
              result[0] += 0.060500927;
            }
          } else {
            result[0] += -0.022274362;
          }
        }
      }
    }
  }
  if ( (data[8].missing != -1) && (data[8].fvalue < (float)-0.20263934135)) {
    if ( (data[13].missing != -1) && (data[13].fvalue < (float)1.0023117065)) {
      if ( (data[0].missing != -1) && (data[0].fvalue < (float)-1.4317775965)) {
        result[1] += 0.024910904;
      } else {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)-0.56608271599)) {
          result[1] += -0.04995365;
        } else {
          result[1] += -0.015071471;
        }
      }
    } else {
      if ( (data[16].missing != -1) && (data[16].fvalue < (float)0.048564616591)) {
        if ( (data[8].missing != -1) && (data[8].fvalue < (float)-0.21625265479)) {
          if ( (data[5].missing != -1) && (data[5].fvalue < (float)-0.38821652532)) {
            result[1] += -0.0060694083;
          } else {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)0.37878587842)) {
              result[1] += 0.018573193;
            } else {
              result[1] += 0.049581032;
            }
          }
        } else {
          result[1] += -0.022184445;
        }
      } else {
        result[1] += 0.07337892;
      }
    }
  } else {
    if ( (data[0].missing != -1) && (data[0].fvalue < (float)-0.80280572176)) {
      result[1] += -0.004179991;
    } else {
      if ( (data[1].missing != -1) && (data[1].fvalue < (float)-0.043292935938)) {
        result[1] += -0.019953579;
      } else {
        result[1] += -0.050732374;
      }
    }
  }
  if ( (data[10].missing != -1) && (data[10].fvalue < (float)-0.023404598236)) {
    if ( (data[8].missing != -1) && (data[8].fvalue < (float)-0.13899368048)) {
      if ( (data[11].missing != -1) && (data[11].fvalue < (float)-0.22117689252)) {
        if ( (data[3].missing != -1) && (data[3].fvalue < (float)-1.2579658031)) {
          result[2] += 0.043382127;
        } else {
          if ( (data[6].missing != -1) && (data[6].fvalue < (float)-0.12928208709)) {
            if ( (data[7].missing != -1) && (data[7].fvalue < (float)-0.15051795542)) {
              result[2] += -0.04368949;
            } else {
              result[2] += -1.397246e-05;
            }
          } else {
            if ( (data[15].missing != -1) && (data[15].fvalue < (float)0.42591765523)) {
              result[2] += 0.026596323;
            } else {
              result[2] += -0.01381199;
            }
          }
        }
      } else {
        if ( (data[1].missing != -1) && (data[1].fvalue < (float)-0.28504171968)) {
          result[2] += 0.011145739;
        } else {
          if ( (data[7].missing != -1) && (data[7].fvalue < (float)-0.60275197029)) {
            result[2] += 0.029318983;
          } else {
            result[2] += 0.05816964;
          }
        }
      }
    } else {
      if ( (data[5].missing != -1) && (data[5].fvalue < (float)-0.16096504033)) {
        if ( (data[8].missing != -1) && (data[8].fvalue < (float)-0.083070620894)) {
          result[2] += -0.02295038;
        } else {
          result[2] += -0.05021822;
        }
      } else {
        if ( (data[16].missing != -1) && (data[16].fvalue < (float)0.0093680135906)) {
          result[2] += 0.03849701;
        } else {
          if ( (data[6].missing != -1) && (data[6].fvalue < (float)0.66552180052)) {
            result[2] += 0.0013111591;
          } else {
            result[2] += -0.019134626;
          }
        }
      }
    }
  } else {
    if ( (data[16].missing != -1) && (data[16].fvalue < (float)0.033994093537)) {
      if ( (data[11].missing != -1) && (data[11].fvalue < (float)-0.26296588778)) {
        if ( (data[12].missing != -1) && (data[12].fvalue < (float)-1.0734789371)) {
          result[2] += 0.02383;
        } else {
          result[2] += -0.028769339;
        }
      } else {
        if ( (data[5].missing != -1) && (data[5].fvalue < (float)0.038051247597)) {
          result[2] += -0.0500801;
        } else {
          if ( (data[6].missing != -1) && (data[6].fvalue < (float)0.80245423317)) {
            result[2] += -0.002102995;
          } else {
            result[2] += -0.04707342;
          }
        }
      }
    } else {
      if ( (data[8].missing != -1) && (data[8].fvalue < (float)-0.18830893934)) {
        if ( (data[10].missing != -1) && (data[10].fvalue < (float)0.95288157463)) {
          result[2] += 0.037302475;
        } else {
          result[2] += -0.002066288;
        }
      } else {
        result[2] += -0.022962134;
      }
    }
  }
  if ( (data[8].missing != -1) && (data[8].fvalue < (float)0.9665927887)) {
    if ( (data[2].missing != -1) && (data[2].fvalue < (float)0.13540814817)) {
      if ( (data[5].missing != -1) && (data[5].fvalue < (float)0.40036734939)) {
        if ( (data[14].missing != -1) && (data[14].fvalue < (float)0.72131592035)) {
          if ( (data[16].missing != -1) && (data[16].fvalue < (float)0.0045962035656)) {
            result[3] += 0.010894421;
          } else {
            if ( (data[2].missing != -1) && (data[2].fvalue < (float)-0.27207258344)) {
              result[3] += 0.07182616;
            } else {
              result[3] += 0.021604596;
            }
          }
        } else {
          result[3] += -0.016279526;
        }
      } else {
        result[3] += -0.032126714;
      }
    } else {
      if ( (data[12].missing != -1) && (data[12].fvalue < (float)0.99250650406)) {
        if ( (data[14].missing != -1) && (data[14].fvalue < (float)0.13486784697)) {
          if ( (data[13].missing != -1) && (data[13].fvalue < (float)-0.13281053305)) {
            result[3] += 0.04914354;
          } else {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)-1.267203927)) {
              result[3] += -0.04677645;
            } else {
              if ( (data[7].missing != -1) && (data[7].fvalue < (float)1.4132658243)) {
                result[3] += 0.0035820117;
              } else {
                result[3] += -0.03672301;
              }
            }
          }
        } else {
          if ( (data[16].missing != -1) && (data[16].fvalue < (float)0.060172878206)) {
            if ( (data[16].missing != -1) && (data[16].fvalue < (float)0.016788505018)) {
              result[3] += -0.0506836;
            } else {
              if ( (data[11].missing != -1) && (data[11].fvalue < (float)0.025153735653)) {
                result[3] += 0.0017805258;
              } else {
                result[3] += -0.048923742;
              }
            }
          } else {
            result[3] += 0.009996931;
          }
        }
      } else {
        if ( (data[16].missing != -1) && (data[16].fvalue < (float)0.028983056545)) {
          result[3] += -0.0020307133;
        } else {
          result[3] += 0.044453643;
        }
      }
    }
  } else {
    result[3] += 0.044015955;
  }
  if ( (data[9].missing != -1) && (data[9].fvalue < (float)-0.29118299484)) {
    if ( (data[10].missing != -1) && (data[10].fvalue < (float)-0.0013583783293)) {
      result[0] += -0.049546234;
    } else {
      if ( (data[0].missing != -1) && (data[0].fvalue < (float)-0.88791364431)) {
        if ( (data[10].missing != -1) && (data[10].fvalue < (float)1.672293663)) {
          result[0] += -0.047538158;
        } else {
          result[0] += -0.003554709;
        }
      } else {
        if ( (data[16].missing != -1) && (data[16].fvalue < (float)0.028659338132)) {
          result[0] += 0.048910554;
        } else {
          result[0] += 0.0041959872;
        }
      }
    }
  } else {
    if ( (data[11].missing != -1) && (data[11].fvalue < (float)-0.22255906463)) {
      if ( (data[8].missing != -1) && (data[8].fvalue < (float)-0.18742009997)) {
        if ( (data[8].missing != -1) && (data[8].fvalue < (float)-0.20588018)) {
          if ( (data[7].missing != -1) && (data[7].fvalue < (float)0.18004330993)) {
            result[0] += 0.047072385;
          } else {
            if ( (data[11].missing != -1) && (data[11].fvalue < (float)-0.26627296209)) {
              result[0] += 0.02147457;
            } else {
              result[0] += -0.018097917;
            }
          }
        } else {
          result[0] += -0.017079955;
        }
      } else {
        if ( (data[10].missing != -1) && (data[10].fvalue < (float)-0.96761935949)) {
          result[0] += 0.022902412;
        } else {
          result[0] += 0.05060363;
        }
      }
    } else {
      if ( (data[10].missing != -1) && (data[10].fvalue < (float)-0.83907783031)) {
        result[0] += -0.023739897;
      } else {
        if ( (data[8].missing != -1) && (data[8].fvalue < (float)-0.15756088495)) {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)0.19706237316)) {
            result[0] += 0.023124294;
          } else {
            result[0] += -0.04466334;
          }
        } else {
          if ( (data[8].missing != -1) && (data[8].fvalue < (float)-0.13102070987)) {
            result[0] += 0.049125757;
          } else {
            if ( (data[13].missing != -1) && (data[13].fvalue < (float)-0.5950601697)) {
              if ( (data[11].missing != -1) && (data[11].fvalue < (float)-0.047184146941)) {
                result[0] += 0.046775408;
              } else {
                result[0] += 0.0028550897;
              }
            } else {
              if ( (data[6].missing != -1) && (data[6].fvalue < (float)0.05763412267)) {
                result[0] += 0.011101059;
              } else {
                result[0] += -0.032844808;
              }
            }
          }
        }
      }
    }
  }
  if ( (data[8].missing != -1) && (data[8].fvalue < (float)-0.19492897391)) {
    if ( (data[6].missing != -1) && (data[6].fvalue < (float)-0.53989446163)) {
      result[1] += -0.051680326;
    } else {
      if ( (data[0].missing != -1) && (data[0].fvalue < (float)-1.4317775965)) {
        if ( (data[3].missing != -1) && (data[3].fvalue < (float)1.3708487749)) {
          result[1] += 0.048775915;
        } else {
          result[1] += 0.008380174;
        }
      } else {
        if ( (data[13].missing != -1) && (data[13].fvalue < (float)1.2953075171)) {
          if ( (data[5].missing != -1) && (data[5].fvalue < (float)-0.1428437233)) {
            if ( (data[12].missing != -1) && (data[12].fvalue < (float)-0.79302626848)) {
              result[1] += -0.045248862;
            } else {
              result[1] += -0.015643673;
            }
          } else {
            result[1] += 0.0028753802;
          }
        } else {
          if ( (data[10].missing != -1) && (data[10].fvalue < (float)0.79747533798)) {
            result[1] += 0.047994178;
          } else {
            result[1] += -0.009338881;
          }
        }
      }
    }
  } else {
    if ( (data[6].missing != -1) && (data[6].fvalue < (float)0.82943028212)) {
      if ( (data[15].missing != -1) && (data[15].fvalue < (float)0.95824813843)) {
        result[1] += -0.050455537;
      } else {
        result[1] += -0.026276598;
      }
    } else {
      result[1] += -0.021469606;
    }
  }
  if ( (data[3].missing != -1) && (data[3].fvalue < (float)-0.94150280952)) {
    if ( (data[16].missing != -1) && (data[16].fvalue < (float)0.042571268976)) {
      if ( (data[16].missing != -1) && (data[16].fvalue < (float)-0.019200904295)) {
        if ( (data[16].missing != -1) && (data[16].fvalue < (float)-0.031885597855)) {
          result[2] += 0.02657907;
        } else {
          result[2] += -0.01452852;
        }
      } else {
        if ( (data[6].missing != -1) && (data[6].fvalue < (float)-0.33870640397)) {
          result[2] += 0.028981313;
        } else {
          result[2] += 0.051623315;
        }
      }
    } else {
      result[2] += -0.013213731;
    }
  } else {
    if ( (data[8].missing != -1) && (data[8].fvalue < (float)0.09204955399)) {
      if ( (data[13].missing != -1) && (data[13].fvalue < (float)1.0127772093)) {
        if ( (data[5].missing != -1) && (data[5].fvalue < (float)-0.33815327287)) {
          if ( (data[0].missing != -1) && (data[0].fvalue < (float)-0.12934221327)) {
            result[2] += 0.006448202;
          } else {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)0.50521177053)) {
              result[2] += -0.058825947;
            } else {
              result[2] += -0.001989355;
            }
          }
        } else {
          if ( (data[11].missing != -1) && (data[11].fvalue < (float)-0.095458947122)) {
            if ( (data[5].missing != -1) && (data[5].fvalue < (float)1.667165041)) {
              if ( (data[16].missing != -1) && (data[16].fvalue < (float)0.0035756931175)) {
                result[2] += 0.023619816;
              } else {
                result[2] += -0.01069948;
              }
            } else {
              result[2] += 0.037445128;
            }
          } else {
            if ( (data[11].missing != -1) && (data[11].fvalue < (float)0.22571912408)) {
              result[2] += 0.04352318;
            } else {
              result[2] += -0.0009638153;
            }
          }
        }
      } else {
        if ( (data[16].missing != -1) && (data[16].fvalue < (float)0.010555835441)) {
          if ( (data[0].missing != -1) && (data[0].fvalue < (float)-1.3338936567)) {
            result[2] += -0.026909918;
          } else {
            result[2] += -0.05697999;
          }
        } else {
          if ( (data[16].missing != -1) && (data[16].fvalue < (float)0.050249256194)) {
            result[2] += 0.01290599;
          } else {
            result[2] += -0.038922273;
          }
        }
      }
    } else {
      if ( (data[5].missing != -1) && (data[5].fvalue < (float)0.24856686592)) {
        result[2] += -0.047851868;
      } else {
        result[2] += -0.025091771;
      }
    }
  }
  if ( (data[6].missing != -1) && (data[6].fvalue < (float)1.009770751)) {
    if ( (data[2].missing != -1) && (data[2].fvalue < (float)-0.27207258344)) {
      if ( (data[1].missing != -1) && (data[1].fvalue < (float)-0.44271439314)) {
        result[3] += 0.05855154;
      } else {
        result[3] += 0.012807399;
      }
    } else {
      if ( (data[8].missing != -1) && (data[8].fvalue < (float)-0.21442578733)) {
        if ( (data[12].missing != -1) && (data[12].fvalue < (float)-0.89306592941)) {
          result[3] += -0.008506861;
        } else {
          result[3] += -0.045454957;
        }
      } else {
        if ( (data[6].missing != -1) && (data[6].fvalue < (float)0.64755177498)) {
          if ( (data[12].missing != -1) && (data[12].fvalue < (float)-0.80914157629)) {
            if ( (data[14].missing != -1) && (data[14].fvalue < (float)-1.2981345654)) {
              result[3] += -0.014659541;
            } else {
              if ( (data[6].missing != -1) && (data[6].fvalue < (float)-0.12928208709)) {
                result[3] += 0.047158454;
              } else {
                result[3] += 0.009196572;
              }
            }
          } else {
            if ( (data[12].missing != -1) && (data[12].fvalue < (float)0.56249433756)) {
              if ( (data[8].missing != -1) && (data[8].fvalue < (float)-0.2038538605)) {
                result[3] += 0.016171679;
              } else {
                result[3] += -0.031371657;
              }
            } else {
              if ( (data[13].missing != -1) && (data[13].fvalue < (float)-1.0194351673)) {
                result[3] += -0.02288831;
              } else {
                result[3] += 0.029922945;
              }
            }
          }
        } else {
          result[3] += 0.038254015;
        }
      }
    }
  } else {
    if ( (data[10].missing != -1) && (data[10].fvalue < (float)0.96652847528)) {
      result[3] += -0.050615013;
    } else {
      result[3] += 0.0005534249;
    }
  }
  if ( (data[8].missing != -1) && (data[8].fvalue < (float)-0.21849969029)) {
    if ( (data[10].missing != -1) && (data[10].fvalue < (float)0.19718895853)) {
      result[0] += -0.008803006;
    } else {
      result[0] += -0.04818496;
    }
  } else {
    if ( (data[11].missing != -1) && (data[11].fvalue < (float)-0.25357052684)) {
      if ( (data[8].missing != -1) && (data[8].fvalue < (float)-0.18742009997)) {
        if ( (data[10].missing != -1) && (data[10].fvalue < (float)-0.89206194878)) {
          result[0] += -0.01323828;
        } else {
          if ( (data[5].missing != -1) && (data[5].fvalue < (float)-0.26631891727)) {
            result[0] += 0.012433932;
          } else {
            result[0] += 0.050017096;
          }
        }
      } else {
        result[0] += 0.054912563;
      }
    } else {
      if ( (data[8].missing != -1) && (data[8].fvalue < (float)-0.16417980194)) {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)-0.35524612665)) {
          if ( (data[13].missing != -1) && (data[13].fvalue < (float)0.41300338507)) {
            result[0] += -0.024644747;
          } else {
            result[0] += -0.048070326;
          }
        } else {
          if ( (data[8].missing != -1) && (data[8].fvalue < (float)-0.20588018)) {
            if ( (data[12].missing != -1) && (data[12].fvalue < (float)-1.0734789371)) {
              result[0] += 0.012179877;
            } else {
              result[0] += 0.03308114;
            }
          } else {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)0.25500673056)) {
              if ( (data[5].missing != -1) && (data[5].fvalue < (float)-0.31484144926)) {
                result[0] += 0.022348663;
              } else {
                result[0] += -0.014828222;
              }
            } else {
              result[0] += -0.042511135;
            }
          }
        }
      } else {
        if ( (data[13].missing != -1) && (data[13].fvalue < (float)0.94390970469)) {
          if ( (data[0].missing != -1) && (data[0].fvalue < (float)0.91816103458)) {
            if ( (data[0].missing != -1) && (data[0].fvalue < (float)0.72153884172)) {
              if ( (data[5].missing != -1) && (data[5].fvalue < (float)-0.093005672097)) {
                result[0] += 0.0121430345;
              } else {
                result[0] += -0.025152674;
              }
            } else {
              result[0] += -0.036650162;
            }
          } else {
            if ( (data[11].missing != -1) && (data[11].fvalue < (float)0.13876245916)) {
              if ( (data[9].missing != -1) && (data[9].fvalue < (float)1.1348803043)) {
                result[0] += 0.014304585;
              } else {
                result[0] += 0.049615424;
              }
            } else {
              if ( (data[12].missing != -1) && (data[12].fvalue < (float)0.9569453001)) {
                result[0] += 0.01646916;
              } else {
                result[0] += -0.04129699;
              }
            }
          }
        } else {
          result[0] += 0.06113094;
        }
      }
    }
  }
  if ( (data[0].missing != -1) && (data[0].fvalue < (float)-0.43628501892)) {
    if ( (data[13].missing != -1) && (data[13].fvalue < (float)1.9595717192)) {
      if ( (data[13].missing != -1) && (data[13].fvalue < (float)1.1100145578)) {
        if ( (data[0].missing != -1) && (data[0].fvalue < (float)-1.4317775965)) {
          if ( (data[10].missing != -1) && (data[10].fvalue < (float)1.6442323923)) {
            result[1] += 0.0442318;
          } else {
            result[1] += -0.002516045;
          }
        } else {
          if ( (data[11].missing != -1) && (data[11].fvalue < (float)-0.24779932201)) {
            result[1] += -0.045417104;
          } else {
            result[1] += 0.009299109;
          }
        }
      } else {
        if ( (data[5].missing != -1) && (data[5].fvalue < (float)-0.29537382722)) {
          if ( (data[8].missing != -1) && (data[8].fvalue < (float)-0.21939170361)) {
            result[1] += 0.046902232;
          } else {
            result[1] += -0.021284778;
          }
        } else {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)-0.15549319983)) {
            result[1] += 0.03431801;
          } else {
            result[1] += 0.06888931;
          }
        }
      }
    } else {
      result[1] += -0.037830677;
    }
  } else {
    if ( (data[8].missing != -1) && (data[8].fvalue < (float)-0.20263934135)) {
      result[1] += -0.014221169;
    } else {
      if ( (data[8].missing != -1) && (data[8].fvalue < (float)0.17657822371)) {
        result[1] += -0.048902906;
      } else {
        result[1] += -0.026228515;
      }
    }
  }
  if ( (data[8].missing != -1) && (data[8].fvalue < (float)0.011566273868)) {
    if ( (data[3].missing != -1) && (data[3].fvalue < (float)-1.3735567331)) {
      result[2] += 0.043753684;
    } else {
      if ( (data[0].missing != -1) && (data[0].fvalue < (float)-1.1717795134)) {
        if ( (data[5].missing != -1) && (data[5].fvalue < (float)-0.33383610845)) {
          result[2] += 0.003490309;
        } else {
          result[2] += -0.046584208;
        }
      } else {
        if ( (data[12].missing != -1) && (data[12].fvalue < (float)0.98061102629)) {
          if ( (data[14].missing != -1) && (data[14].fvalue < (float)0.76205521822)) {
            if ( (data[12].missing != -1) && (data[12].fvalue < (float)-0.033750686795)) {
              if ( (data[8].missing != -1) && (data[8].fvalue < (float)-0.10686820745)) {
                result[2] += 0.017699156;
              } else {
                result[2] += -0.026073555;
              }
            } else {
              if ( (data[11].missing != -1) && (data[11].fvalue < (float)-0.21514505148)) {
                result[2] += -0.024663325;
              } else {
                result[2] += 0.0036306733;
              }
            }
          } else {
            result[2] += 0.057969492;
          }
        } else {
          result[2] += -0.024447735;
        }
      }
    }
  } else {
    if ( (data[12].missing != -1) && (data[12].fvalue < (float)0.14209826291)) {
      result[2] += -0.0064072344;
    } else {
      result[2] += -0.052606534;
    }
  }
  if ( (data[10].missing != -1) && (data[10].fvalue < (float)-0.44024544954)) {
    if ( (data[12].missing != -1) && (data[12].fvalue < (float)0.64476305246)) {
      result[3] += -0.048306126;
    } else {
      if ( (data[13].missing != -1) && (data[13].fvalue < (float)-0.97220414877)) {
        if ( (data[12].missing != -1) && (data[12].fvalue < (float)1.2605309486)) {
          result[3] += -0.035766147;
        } else {
          result[3] += -0.006719488;
        }
      } else {
        result[3] += 0.028899098;
      }
    }
  } else {
    if ( (data[14].missing != -1) && (data[14].fvalue < (float)-1.3899236917)) {
      result[3] += -0.036206897;
    } else {
      if ( (data[2].missing != -1) && (data[2].fvalue < (float)-0.27207258344)) {
        if ( (data[5].missing != -1) && (data[5].fvalue < (float)-0.067341715097)) {
          result[3] += 0.056176126;
        } else {
          result[3] += 0.018816456;
        }
      } else {
        if ( (data[6].missing != -1) && (data[6].fvalue < (float)-1.2536873817)) {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)0.905631423)) {
            result[3] += 0.015415807;
          } else {
            result[3] += 0.045302603;
          }
        } else {
          if ( (data[5].missing != -1) && (data[5].fvalue < (float)-0.39029350877)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)0.37849089503)) {
              result[3] += -0.04742916;
            } else {
              result[3] += -0.005016432;
            }
          } else {
            if ( (data[11].missing != -1) && (data[11].fvalue < (float)-0.24379661679)) {
              if ( (data[8].missing != -1) && (data[8].fvalue < (float)-0.21442578733)) {
                result[3] += -0.007588088;
              } else {
                result[3] += 0.04435903;
              }
            } else {
              if ( (data[8].missing != -1) && (data[8].fvalue < (float)-0.18830893934)) {
                result[3] += -0.038456112;
              } else {
                result[3] += 0.0073707285;
              }
            }
          }
        }
      }
    }
  }
  if ( (data[9].missing != -1) && (data[9].fvalue < (float)-0.53308588266)) {
    if ( (data[8].missing != -1) && (data[8].fvalue < (float)-0.20207519829)) {
      if ( (data[9].missing != -1) && (data[9].fvalue < (float)-1.3064748049)) {
        result[0] += -0.015559127;
      } else {
        result[0] += -0.048403274;
      }
    } else {
      result[0] += 0.0075849937;
    }
  } else {
    if ( (data[11].missing != -1) && (data[11].fvalue < (float)-0.25357052684)) {
      if ( (data[8].missing != -1) && (data[8].fvalue < (float)-0.21141324937)) {
        result[0] += 0.0045877006;
      } else {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)0.56120723486)) {
          result[0] += 0.06374495;
        } else {
          result[0] += 0.020715183;
        }
      }
    } else {
      if ( (data[8].missing != -1) && (data[8].fvalue < (float)-0.16417980194)) {
        if ( (data[1].missing != -1) && (data[1].fvalue < (float)-0.043292935938)) {
          result[0] += 0.0074175224;
        } else {
          if ( (data[6].missing != -1) && (data[6].fvalue < (float)0.58737653494)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)0.04016796127)) {
              result[0] += -0.015082615;
            } else {
              result[0] += -0.057127487;
            }
          } else {
            if ( (data[16].missing != -1) && (data[16].fvalue < (float)0.030924683437)) {
              result[0] += 0.029214753;
            } else {
              result[0] += -0.026270116;
            }
          }
        }
      } else {
        if ( (data[6].missing != -1) && (data[6].fvalue < (float)0.902148664)) {
          if ( (data[10].missing != -1) && (data[10].fvalue < (float)-0.64448297024)) {
            if ( (data[6].missing != -1) && (data[6].fvalue < (float)-0.50929665565)) {
              result[0] += 0.01026992;
            } else {
              result[0] += -0.04820032;
            }
          } else {
            if ( (data[11].missing != -1) && (data[11].fvalue < (float)2.1478612423)) {
              if ( (data[5].missing != -1) && (data[5].fvalue < (float)-0.42040032148)) {
                result[0] += 0.035089314;
              } else {
                result[0] += 0.0040713344;
              }
            } else {
              result[0] += -0.019472476;
            }
          }
        } else {
          if ( (data[13].missing != -1) && (data[13].fvalue < (float)-0.7139454484)) {
            result[0] += 0.061516233;
          } else {
            result[0] += 0.00042125123;
          }
        }
      }
    }
  }
  if ( (data[8].missing != -1) && (data[8].fvalue < (float)-0.19492897391)) {
    if ( (data[5].missing != -1) && (data[5].fvalue < (float)-0.40884578228)) {
      if ( (data[8].missing != -1) && (data[8].fvalue < (float)-0.21920143068)) {
        result[1] += 0.007332068;
      } else {
        result[1] += -0.058505964;
      }
    } else {
      if ( (data[0].missing != -1) && (data[0].fvalue < (float)-1.4190087318)) {
        if ( (data[8].missing != -1) && (data[8].fvalue < (float)-0.21671803296)) {
          result[1] += 0.04973221;
        } else {
          result[1] += 0.013368738;
        }
      } else {
        if ( (data[13].missing != -1) && (data[13].fvalue < (float)1.0023117065)) {
          if ( (data[13].missing != -1) && (data[13].fvalue < (float)0.28069794178)) {
            result[1] += 0.0073760636;
          } else {
            result[1] += -0.037846867;
          }
        } else {
          if ( (data[13].missing != -1) && (data[13].fvalue < (float)1.736979723)) {
            if ( (data[16].missing != -1) && (data[16].fvalue < (float)0.015402733348)) {
              result[1] += 0.008276533;
            } else {
              result[1] += 0.056928575;
            }
          } else {
            result[1] += -0.010703568;
          }
        }
      }
    }
  } else {
    if ( (data[0].missing != -1) && (data[0].fvalue < (float)-0.43628501892)) {
      result[1] += -0.011842585;
    } else {
      if ( (data[1].missing != -1) && (data[1].fvalue < (float)0.058750249445)) {
        result[1] += -0.026146907;
      } else {
        result[1] += -0.04905326;
      }
    }
  }
  if ( (data[0].missing != -1) && (data[0].fvalue < (float)-1.1717795134)) {
    if ( (data[0].missing != -1) && (data[0].fvalue < (float)-1.5982475281)) {
      result[2] += -0.010777209;
    } else {
      result[2] += -0.047674354;
    }
  } else {
    if ( (data[8].missing != -1) && (data[8].fvalue < (float)0.011566273868)) {
      if ( (data[5].missing != -1) && (data[5].fvalue < (float)1.667165041)) {
        if ( (data[16].missing != -1) && (data[16].fvalue < (float)0.046086959541)) {
          if ( (data[11].missing != -1) && (data[11].fvalue < (float)-0.10564584285)) {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)-1.1657506227)) {
              if ( (data[16].missing != -1) && (data[16].fvalue < (float)-0.019200904295)) {
                result[2] += 0.01761244;
              } else {
                result[2] += 0.04783718;
              }
            } else {
              if ( (data[5].missing != -1) && (data[5].fvalue < (float)-0.323004812)) {
                result[2] += -0.016729442;
              } else {
                result[2] += 0.011220219;
              }
            }
          } else {
            if ( (data[5].missing != -1) && (data[5].fvalue < (float)-0.16096504033)) {
              result[2] += 0.008846739;
            } else {
              result[2] += 0.05212629;
            }
          }
        } else {
          if ( (data[12].missing != -1) && (data[12].fvalue < (float)0.42990517616)) {
            if ( (data[10].missing != -1) && (data[10].fvalue < (float)0.20306541026)) {
              result[2] += 0.029515633;
            } else {
              result[2] += -0.01956042;
            }
          } else {
            result[2] += -0.05072357;
          }
        }
      } else {
        if ( (data[13].missing != -1) && (data[13].fvalue < (float)0.85409128666)) {
          result[2] += 0.057388563;
        } else {
          result[2] += 0.0127270715;
        }
      }
    } else {
      if ( (data[5].missing != -1) && (data[5].fvalue < (float)0.18515683711)) {
        result[2] += -0.047268257;
      } else {
        result[2] += -0.00035105716;
      }
    }
  }
  if ( (data[6].missing != -1) && (data[6].fvalue < (float)1.0815649033)) {
    if ( (data[7].missing != -1) && (data[7].fvalue < (float)1.4132658243)) {
      if ( (data[3].missing != -1) && (data[3].fvalue < (float)1.1823512316)) {
        if ( (data[2].missing != -1) && (data[2].fvalue < (float)-0.069487594068)) {
          if ( (data[6].missing != -1) && (data[6].fvalue < (float)-0.024934647605)) {
            result[3] += 0.04607714;
          } else {
            result[3] += 0.0034651812;
          }
        } else {
          if ( (data[15].missing != -1) && (data[15].fvalue < (float)-0.60108989477)) {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)0.35766488314)) {
              result[3] += 0.04737629;
            } else {
              if ( (data[9].missing != -1) && (data[9].fvalue < (float)-0.79537248611)) {
                result[3] += -0.01915015;
              } else {
                result[3] += 0.023212168;
              }
            }
          } else {
            if ( (data[15].missing != -1) && (data[15].fvalue < (float)-0.42976659536)) {
              result[3] += -0.05122594;
            } else {
              if ( (data[16].missing != -1) && (data[16].fvalue < (float)0.070572808385)) {
                result[3] += -0.0052722674;
              } else {
                result[3] += 0.038989924;
              }
            }
          }
        }
      } else {
        if ( (data[13].missing != -1) && (data[13].fvalue < (float)0.38713166118)) {
          result[3] += 0.056923933;
        } else {
          result[3] += 0.013017324;
        }
      }
    } else {
      result[3] += -0.04531088;
    }
  } else {
    if ( (data[13].missing != -1) && (data[13].fvalue < (float)0.93093466759)) {
      result[3] += -0.045708593;
    } else {
      result[3] += 0.0057470347;
    }
  }
  if ( (data[8].missing != -1) && (data[8].fvalue < (float)-0.21849969029)) {
    if ( (data[0].missing != -1) && (data[0].fvalue < (float)-1.2417032719)) {
      result[0] += -0.04844243;
    } else {
      result[0] += -0.016591756;
    }
  } else {
    if ( (data[5].missing != -1) && (data[5].fvalue < (float)-0.41925215721)) {
      if ( (data[10].missing != -1) && (data[10].fvalue < (float)-0.83907783031)) {
        result[0] += -0.0044419467;
      } else {
        if ( (data[3].missing != -1) && (data[3].fvalue < (float)0.905631423)) {
          if ( (data[10].missing != -1) && (data[10].fvalue < (float)0.058082066476)) {
            if ( (data[13].missing != -1) && (data[13].fvalue < (float)-0.59007966518)) {
              result[0] += 0.048749007;
            } else {
              result[0] += 0.0019366023;
            }
          } else {
            result[0] += 0.06076282;
          }
        } else {
          result[0] += -0.003764524;
        }
      }
    } else {
      if ( (data[2].missing != -1) && (data[2].fvalue < (float)0.060819786042)) {
        if ( (data[6].missing != -1) && (data[6].fvalue < (float)0.041582621634)) {
          result[0] += -0.04952575;
        } else {
          result[0] += -0.002260172;
        }
      } else {
        if ( (data[11].missing != -1) && (data[11].fvalue < (float)0.20511458814)) {
          if ( (data[12].missing != -1) && (data[12].fvalue < (float)-1.2861771584)) {
            result[0] += 0.029796397;
          } else {
            if ( (data[6].missing != -1) && (data[6].fvalue < (float)1.4158411026)) {
              if ( (data[6].missing != -1) && (data[6].fvalue < (float)1.1374956369)) {
                result[0] += -0.010050099;
              } else {
                result[0] += 0.032649126;
              }
            } else {
              result[0] += -0.0410562;
            }
          }
        } else {
          if ( (data[6].missing != -1) && (data[6].fvalue < (float)-0.2457845062)) {
            if ( (data[6].missing != -1) && (data[6].fvalue < (float)-0.90472733974)) {
              result[0] += 0.009742434;
            } else {
              result[0] += 0.05711279;
            }
          } else {
            result[0] += -0.017963862;
          }
        }
      }
    }
  }
  if ( (data[8].missing != -1) && (data[8].fvalue < (float)-0.19121129811)) {
    if ( (data[0].missing != -1) && (data[0].fvalue < (float)-1.3883382082)) {
      if ( (data[5].missing != -1) && (data[5].fvalue < (float)-0.39605548978)) {
        result[1] += -0.007697967;
      } else {
        if ( (data[3].missing != -1) && (data[3].fvalue < (float)1.5877004862)) {
          result[1] += 0.051311202;
        } else {
          result[1] += 0.02440579;
        }
      }
    } else {
      if ( (data[13].missing != -1) && (data[13].fvalue < (float)1.0023117065)) {
        if ( (data[12].missing != -1) && (data[12].fvalue < (float)0.25012519956)) {
          if ( (data[11].missing != -1) && (data[11].fvalue < (float)-0.24539716542)) {
            result[1] += -0.05467719;
          } else {
            result[1] += -0.018828439;
          }
        } else {
          result[1] += 0.0063087256;
        }
      } else {
        if ( (data[16].missing != -1) && (data[16].fvalue < (float)0.051316402853)) {
          if ( (data[16].missing != -1) && (data[16].fvalue < (float)0.003763372777)) {
            result[1] += 0.034758043;
          } else {
            if ( (data[11].missing != -1) && (data[11].fvalue < (float)-0.24807538092)) {
              result[1] += -0.045160376;
            } else {
              result[1] += 0.008447605;
            }
          }
        } else {
          result[1] += 0.053971607;
        }
      }
    }
  } else {
    if ( (data[6].missing != -1) && (data[6].fvalue < (float)0.77487510443)) {
      result[1] += -0.050018072;
    } else {
      result[1] += -0.016068207;
    }
  }
  if ( (data[3].missing != -1) && (data[3].fvalue < (float)0.046019136906)) {
    if ( (data[5].missing != -1) && (data[5].fvalue < (float)-0.072991624475)) {
      if ( (data[8].missing != -1) && (data[8].fvalue < (float)-0.18555359542)) {
        if ( (data[1].missing != -1) && (data[1].fvalue < (float)-0.52625721693)) {
          result[2] += 0.043639664;
        } else {
          if ( (data[11].missing != -1) && (data[11].fvalue < (float)-0.24443873763)) {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)-1.0196131468)) {
              result[2] += 0.019455593;
            } else {
              if ( (data[5].missing != -1) && (data[5].fvalue < (float)-0.323004812)) {
                result[2] += -0.067460135;
              } else {
                result[2] += 0.00034196087;
              }
            }
          } else {
            result[2] += 0.036849655;
          }
        }
      } else {
        if ( (data[10].missing != -1) && (data[10].fvalue < (float)-0.46583351493)) {
          if ( (data[11].missing != -1) && (data[11].fvalue < (float)-0.21514505148)) {
            result[2] += -0.038316306;
          } else {
            if ( (data[12].missing != -1) && (data[12].fvalue < (float)0.28496366739)) {
              result[2] += 0.035107043;
            } else {
              result[2] += -0.0038540885;
            }
          }
        } else {
          result[2] += -0.0521121;
        }
      }
    } else {
      if ( (data[16].missing != -1) && (data[16].fvalue < (float)0.021485496312)) {
        if ( (data[16].missing != -1) && (data[16].fvalue < (float)-0.002123067854)) {
          result[2] += 0.027059764;
        } else {
          result[2] += 0.052221775;
        }
      } else {
        if ( (data[3].missing != -1) && (data[3].fvalue < (float)-0.18419151008)) {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)-0.29118299484)) {
            result[2] += -0.036573477;
          } else {
            result[2] += 0.012264398;
          }
        } else {
          result[2] += 0.039454013;
        }
      }
    }
  } else {
    if ( (data[7].missing != -1) && (data[7].fvalue < (float)-0.62278866768)) {
      result[2] += -0.046512846;
    } else {
      if ( (data[10].missing != -1) && (data[10].fvalue < (float)0.018758390099)) {
        result[2] += 0.031229211;
      } else {
        if ( (data[6].missing != -1) && (data[6].fvalue < (float)1.5472633839)) {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)0.61244803667)) {
            if ( (data[13].missing != -1) && (data[13].fvalue < (float)0.57195323706)) {
              result[2] += -0.026367692;
            } else {
              result[2] += -0.05107933;
            }
          } else {
            if ( (data[13].missing != -1) && (data[13].fvalue < (float)0.98732662201)) {
              if ( (data[13].missing != -1) && (data[13].fvalue < (float)0.48812502623)) {
                result[2] += 0.00016804099;
              } else {
                result[2] += 0.017877849;
              }
            } else {
              result[2] += -0.03421117;
            }
          }
        } else {
          result[2] += 0.011002776;
        }
      }
    }
  }
  if ( (data[2].missing != -1) && (data[2].fvalue < (float)-2.0562334061)) {
    result[3] += 0.04252958;
  } else {
    if ( (data[3].missing != -1) && (data[3].fvalue < (float)1.2488398552)) {
      if ( (data[9].missing != -1) && (data[9].fvalue < (float)1.4478132725)) {
        if ( (data[8].missing != -1) && (data[8].fvalue < (float)-0.21442578733)) {
          if ( (data[16].missing != -1) && (data[16].fvalue < (float)-0.0087971612811)) {
            result[3] += -0.01691049;
          } else {
            result[3] += -0.045425523;
          }
        } else {
          if ( (data[15].missing != -1) && (data[15].fvalue < (float)-0.60108989477)) {
            if ( (data[12].missing != -1) && (data[12].fvalue < (float)-1.0734789371)) {
              result[3] += -0.015134217;
            } else {
              result[3] += 0.046067886;
            }
          } else {
            if ( (data[15].missing != -1) && (data[15].fvalue < (float)-0.50750309229)) {
              result[3] += -0.048420496;
            } else {
              if ( (data[10].missing != -1) && (data[10].fvalue < (float)-0.46583351493)) {
                result[3] += -0.017236814;
              } else {
                result[3] += 0.0073042265;
              }
            }
          }
        }
      } else {
        result[3] += -0.042151712;
      }
    } else {
      if ( (data[6].missing != -1) && (data[6].fvalue < (float)0.71585971117)) {
        if ( (data[13].missing != -1) && (data[13].fvalue < (float)0.30374440551)) {
          result[3] += 0.055201143;
        } else {
          result[3] += 0.0051592477;
        }
      } else {
        result[3] += -0.022995606;
      }
    }
  }
  if ( (data[3].missing != -1) && (data[3].fvalue < (float)-1.1763842106)) {
    result[0] += -0.032043584;
  } else {
    if ( (data[5].missing != -1) && (data[5].fvalue < (float)-0.41925215721)) {
      if ( (data[10].missing != -1) && (data[10].fvalue < (float)-0.23168973625)) {
        if ( (data[6].missing != -1) && (data[6].fvalue < (float)-0.28605768085)) {
          if ( (data[13].missing != -1) && (data[13].fvalue < (float)-0.61503708363)) {
            result[0] += 0.03747304;
          } else {
            result[0] += -0.00970103;
          }
        } else {
          result[0] += -0.02545563;
        }
      } else {
        if ( (data[3].missing != -1) && (data[3].fvalue < (float)0.905631423)) {
          result[0] += 0.05138282;
        } else {
          result[0] += 0.001674554;
        }
      }
    } else {
      if ( (data[8].missing != -1) && (data[8].fvalue < (float)-0.21849969029)) {
        result[0] += -0.032500423;
      } else {
        if ( (data[13].missing != -1) && (data[13].fvalue < (float)1.0878903866)) {
          if ( (data[15].missing != -1) && (data[15].fvalue < (float)0.45532512665)) {
            if ( (data[0].missing != -1) && (data[0].fvalue < (float)0.18980050087)) {
              if ( (data[15].missing != -1) && (data[15].fvalue < (float)-0.58949971199)) {
                result[0] += -0.027468964;
              } else {
                result[0] += 0.011019972;
              }
            } else {
              result[0] += -0.041600034;
            }
          } else {
            if ( (data[8].missing != -1) && (data[8].fvalue < (float)0.85846698284)) {
              if ( (data[7].missing != -1) && (data[7].fvalue < (float)-0.3533180654)) {
                result[0] += 0.011314955;
              } else {
                result[0] += 0.038873438;
              }
            } else {
              result[0] += -0.028464569;
            }
          }
        } else {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)-0.34062340856)) {
            result[0] += -0.00029102372;
          } else {
            result[0] += 0.04184867;
          }
        }
      }
    }
  }
  if ( (data[8].missing != -1) && (data[8].fvalue < (float)-0.21625265479)) {
    if ( (data[10].missing != -1) && (data[10].fvalue < (float)0.18442307413)) {
      result[1] += -0.015308471;
    } else {
      if ( (data[9].missing != -1) && (data[9].fvalue < (float)-1.3696166277)) {
        result[1] += 0.001910612;
      } else {
        if ( (data[8].missing != -1) && (data[8].fvalue < (float)-0.21877628565)) {
          result[1] += 0.051603455;
        } else {
          result[1] += 0.017064165;
        }
      }
    }
  } else {
    if ( (data[13].missing != -1) && (data[13].fvalue < (float)1.0546414852)) {
      if ( (data[3].missing != -1) && (data[3].fvalue < (float)0.87656605244)) {
        if ( (data[16].missing != -1) && (data[16].fvalue < (float)0.042571268976)) {
          result[1] += -0.04925966;
        } else {
          result[1] += -0.026892496;
        }
      } else {
        result[1] += -0.012623767;
      }
    } else {
      if ( (data[13].missing != -1) && (data[13].fvalue < (float)1.5052392483)) {
        if ( (data[14].missing != -1) && (data[14].fvalue < (float)-1.1020410061)) {
          result[1] += -0.013597267;
        } else {
          result[1] += 0.034718294;
        }
      } else {
        result[1] += -0.029107464;
      }
    }
  }
  if ( (data[8].missing != -1) && (data[8].fvalue < (float)-0.028149537742)) {
    if ( (data[3].missing != -1) && (data[3].fvalue < (float)-1.3735567331)) {
      result[2] += 0.048201855;
    } else {
      if ( (data[13].missing != -1) && (data[13].fvalue < (float)1.0310770273)) {
        if ( (data[14].missing != -1) && (data[14].fvalue < (float)0.28893709183)) {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)-0.26155161858)) {
            result[2] += 0.048473526;
          } else {
            if ( (data[5].missing != -1) && (data[5].fvalue < (float)-0.24522577226)) {
              result[2] += -0.030118285;
            } else {
              if ( (data[9].missing != -1) && (data[9].fvalue < (float)-0.83556216955)) {
                result[2] += -0.00024506493;
              } else {
                result[2] += 0.039482843;
              }
            }
          }
        } else {
          if ( (data[11].missing != -1) && (data[11].fvalue < (float)-0.18233262002)) {
            if ( (data[10].missing != -1) && (data[10].fvalue < (float)-0.89206194878)) {
              if ( (data[8].missing != -1) && (data[8].fvalue < (float)-0.2038538605)) {
                result[2] += -0.02163683;
              } else {
                result[2] += 0.014868842;
              }
            } else {
              if ( (data[12].missing != -1) && (data[12].fvalue < (float)0.20875871181)) {
                result[2] += 0.0013297492;
              } else {
                result[2] += -0.051701423;
              }
            }
          } else {
            if ( (data[15].missing != -1) && (data[15].fvalue < (float)0.56523567438)) {
              result[2] += -0.0076394775;
            } else {
              if ( (data[5].missing != -1) && (data[5].fvalue < (float)-0.019165378064)) {
                result[2] += 0.02154788;
              } else {
                result[2] += 0.052896578;
              }
            }
          }
        }
      } else {
        if ( (data[13].missing != -1) && (data[13].fvalue < (float)1.3448040485)) {
          result[2] += -0.041312635;
        } else {
          if ( (data[8].missing != -1) && (data[8].fvalue < (float)-0.21338579059)) {
            result[2] += -0.024312645;
          } else {
            if ( (data[10].missing != -1) && (data[10].fvalue < (float)1.0367903709)) {
              result[2] += 0.03995731;
            } else {
              result[2] += -0.003124556;
            }
          }
        }
      }
    }
  } else {
    if ( (data[12].missing != -1) && (data[12].fvalue < (float)0.17682774365)) {
      result[2] += 0.0023108812;
    } else {
      if ( (data[16].missing != -1) && (data[16].fvalue < (float)0.028659338132)) {
        result[2] += -0.027668545;
      } else {
        result[2] += -0.051058073;
      }
    }
  }
  if ( (data[3].missing != -1) && (data[3].fvalue < (float)-0.28086575866)) {
    if ( (data[8].missing != -1) && (data[8].fvalue < (float)-0.16880448163)) {
      if ( (data[7].missing != -1) && (data[7].fvalue < (float)0.13828615844)) {
        result[3] += -0.043000203;
      } else {
        result[3] += -0.018453276;
      }
    } else {
      if ( (data[5].missing != -1) && (data[5].fvalue < (float)-0.17693051696)) {
        result[3] += 0.031621236;
      } else {
        result[3] += -0.026761163;
      }
    }
  } else {
    if ( (data[7].missing != -1) && (data[7].fvalue < (float)1.4132658243)) {
      if ( (data[15].missing != -1) && (data[15].fvalue < (float)-1.3346209526)) {
        result[3] += 0.039093964;
      } else {
        if ( (data[12].missing != -1) && (data[12].fvalue < (float)-1.0099855661)) {
          result[3] += -0.023021609;
        } else {
          if ( (data[12].missing != -1) && (data[12].fvalue < (float)-0.83629524708)) {
            result[3] += 0.05040555;
          } else {
            if ( (data[16].missing != -1) && (data[16].fvalue < (float)0.053103368729)) {
              if ( (data[16].missing != -1) && (data[16].fvalue < (float)0.022840771824)) {
                result[3] += 0.010321659;
              } else {
                result[3] += -0.029555354;
              }
            } else {
              if ( (data[12].missing != -1) && (data[12].fvalue < (float)-0.19505570829)) {
                result[3] += -0.008254672;
              } else {
                result[3] += 0.039973143;
              }
            }
          }
        }
      }
    } else {
      result[3] += -0.03354278;
    }
  }
  if ( (data[3].missing != -1) && (data[3].fvalue < (float)-1.2579658031)) {
    result[0] += -0.045907367;
  } else {
    if ( (data[5].missing != -1) && (data[5].fvalue < (float)-0.40884578228)) {
      if ( (data[1].missing != -1) && (data[1].fvalue < (float)0.058750249445)) {
        if ( (data[6].missing != -1) && (data[6].fvalue < (float)-0.50929665565)) {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)-0.09566282481)) {
            result[0] += 0.052721392;
          } else {
            result[0] += 0.027759423;
          }
        } else {
          result[0] += 0.014177329;
        }
      } else {
        if ( (data[11].missing != -1) && (data[11].fvalue < (float)-0.16889058053)) {
          if ( (data[5].missing != -1) && (data[5].fvalue < (float)-0.52335697412)) {
            result[0] += 0.04939486;
          } else {
            result[0] += 0.004886749;
          }
        } else {
          result[0] += -0.011163193;
        }
      }
    } else {
      if ( (data[8].missing != -1) && (data[8].fvalue < (float)-0.21821188927)) {
        result[0] += -0.03549507;
      } else {
        if ( (data[11].missing != -1) && (data[11].fvalue < (float)-0.25357052684)) {
          if ( (data[5].missing != -1) && (data[5].fvalue < (float)-0.25926822424)) {
            result[0] += -0.0073182844;
          } else {
            if ( (data[6].missing != -1) && (data[6].fvalue < (float)0.29336377978)) {
              result[0] += 0.05832355;
            } else {
              result[0] += 0.022685805;
            }
          }
        } else {
          if ( (data[6].missing != -1) && (data[6].fvalue < (float)1.1079375744)) {
            if ( (data[11].missing != -1) && (data[11].fvalue < (float)0.35976424813)) {
              if ( (data[2].missing != -1) && (data[2].fvalue < (float)0.14537481964)) {
                result[0] += -0.044781025;
              } else {
                result[0] += -0.009034284;
              }
            } else {
              if ( (data[6].missing != -1) && (data[6].fvalue < (float)-0.39624726772)) {
                result[0] += 0.036970373;
              } else {
                result[0] += -0.015468167;
              }
            }
          } else {
            if ( (data[5].missing != -1) && (data[5].fvalue < (float)2.3154711723)) {
              if ( (data[9].missing != -1) && (data[9].fvalue < (float)0.39297169447)) {
                result[0] += 0.011461626;
              } else {
                result[0] += 0.06420433;
              }
            } else {
              result[0] += -0.009550943;
            }
          }
        }
      }
    }
  }
  if ( (data[0].missing != -1) && (data[0].fvalue < (float)-0.80280572176)) {
    if ( (data[8].missing != -1) && (data[8].fvalue < (float)-0.21920143068)) {
      if ( (data[3].missing != -1) && (data[3].fvalue < (float)0.46049252152)) {
        result[1] += 0.024361355;
      } else {
        result[1] += 0.05009991;
      }
    } else {
      if ( (data[5].missing != -1) && (data[5].fvalue < (float)0.37600171566)) {
        if ( (data[16].missing != -1) && (data[16].fvalue < (float)0.027326280251)) {
          if ( (data[11].missing != -1) && (data[11].fvalue < (float)-0.26094642282)) {
            result[1] += -0.018644264;
          } else {
            if ( (data[0].missing != -1) && (data[0].fvalue < (float)-1.3415445089)) {
              result[1] += 0.04504296;
            } else {
              result[1] += 0.007163591;
            }
          }
        } else {
          result[1] += -0.038402505;
        }
      } else {
        result[1] += 0.039330836;
      }
    }
  } else {
    if ( (data[0].missing != -1) && (data[0].fvalue < (float)0.14035646617)) {
      if ( (data[14].missing != -1) && (data[14].fvalue < (float)0.050203636289)) {
        if ( (data[7].missing != -1) && (data[7].fvalue < (float)0.67131799459)) {
          result[1] += -0.04568575;
        } else {
          result[1] += -0.0067025186;
        }
      } else {
        result[1] += 0.01779264;
      }
    } else {
      if ( (data[14].missing != -1) && (data[14].fvalue < (float)0.87614601851)) {
        result[1] += -0.04794899;
      } else {
        result[1] += -0.025988728;
      }
    }
  }
  if ( (data[3].missing != -1) && (data[3].fvalue < (float)-1.2579658031)) {
    if ( (data[11].missing != -1) && (data[11].fvalue < (float)-0.24242040515)) {
      result[2] += 0.047918864;
    } else {
      result[2] += 0.025887594;
    }
  } else {
    if ( (data[13].missing != -1) && (data[13].fvalue < (float)1.0310770273)) {
      if ( (data[12].missing != -1) && (data[12].fvalue < (float)1.0508075953)) {
        if ( (data[16].missing != -1) && (data[16].fvalue < (float)0.060172878206)) {
          if ( (data[5].missing != -1) && (data[5].fvalue < (float)-0.088755533099)) {
            if ( (data[8].missing != -1) && (data[8].fvalue < (float)-0.21313029528)) {
              result[2] += 0.037680637;
            } else {
              if ( (data[11].missing != -1) && (data[11].fvalue < (float)-0.25888600945)) {
                result[2] += -0.051171422;
              } else {
                result[2] += 0.0059093856;
              }
            }
          } else {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)0.98351091146)) {
              if ( (data[9].missing != -1) && (data[9].fvalue < (float)-0.37011244893)) {
                result[2] += -0.0041120346;
              } else {
                result[2] += 0.044423617;
              }
            } else {
              result[2] += -0.0065464475;
            }
          }
        } else {
          if ( (data[13].missing != -1) && (data[13].fvalue < (float)0.52680617571)) {
            result[2] += -0.038923956;
          } else {
            result[2] += 0.018892668;
          }
        }
      } else {
        result[2] += -0.041243557;
      }
    } else {
      if ( (data[8].missing != -1) && (data[8].fvalue < (float)-0.21338579059)) {
        if ( (data[7].missing != -1) && (data[7].fvalue < (float)1.271897316)) {
          result[2] += -0.05657003;
        } else {
          result[2] += -0.024995098;
        }
      } else {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)-0.15549319983)) {
          result[2] += 0.006669411;
        } else {
          result[2] += -0.029893477;
        }
      }
    }
  }
  if ( (data[8].missing != -1) && (data[8].fvalue < (float)0.0070507549681)) {
    if ( (data[6].missing != -1) && (data[6].fvalue < (float)1.009770751)) {
      if ( (data[8].missing != -1) && (data[8].fvalue < (float)-0.21892316639)) {
        result[3] += -0.04303447;
      } else {
        if ( (data[3].missing != -1) && (data[3].fvalue < (float)1.1823512316)) {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)0.92333030701)) {
            if ( (data[10].missing != -1) && (data[10].fvalue < (float)-0.39829662442)) {
              if ( (data[12].missing != -1) && (data[12].fvalue < (float)0.64476305246)) {
                result[3] += -0.04660709;
              } else {
                result[3] += -0.0028058244;
              }
            } else {
              if ( (data[12].missing != -1) && (data[12].fvalue < (float)-0.3120880723)) {
                result[3] += -0.010567643;
              } else {
                result[3] += 0.024719281;
              }
            }
          } else {
            result[3] += 0.030658666;
          }
        } else {
          result[3] += 0.04145841;
        }
      }
    } else {
      if ( (data[3].missing != -1) && (data[3].fvalue < (float)0.83222895861)) {
        result[3] += -0.04896258;
      } else {
        result[3] += -0.0091922395;
      }
    }
  } else {
    if ( (data[5].missing != -1) && (data[5].fvalue < (float)0.07551728934)) {
      if ( (data[0].missing != -1) && (data[0].fvalue < (float)0.8779335022)) {
        result[3] += 0.030849123;
      } else {
        if ( (data[3].missing != -1) && (data[3].fvalue < (float)0.905631423)) {
          result[3] += -0.031490263;
        } else {
          result[3] += 0.017484238;
        }
      }
    } else {
      if ( (data[12].missing != -1) && (data[12].fvalue < (float)0.98061102629)) {
        result[3] += 0.021526707;
      } else {
        result[3] += 0.060543783;
      }
    }
  }
  if ( (data[0].missing != -1) && (data[0].fvalue < (float)0.12998342514)) {
    if ( (data[12].missing != -1) && (data[12].fvalue < (float)-1.2861771584)) {
      if ( (data[8].missing != -1) && (data[8].fvalue < (float)-0.21821188927)) {
        result[0] += -0.022921;
      } else {
        if ( (data[0].missing != -1) && (data[0].fvalue < (float)-1.1111795902)) {
          result[0] += 0.016931467;
        } else {
          result[0] += 0.04248595;
        }
      }
    } else {
      if ( (data[9].missing != -1) && (data[9].fvalue < (float)-0.21651561558)) {
        if ( (data[10].missing != -1) && (data[10].fvalue < (float)-0.0013583783293)) {
          result[0] += -0.03964107;
        } else {
          if ( (data[0].missing != -1) && (data[0].fvalue < (float)-0.88791364431)) {
            result[0] += -0.035396196;
          } else {
            if ( (data[5].missing != -1) && (data[5].fvalue < (float)-0.14007590711)) {
              result[0] += 0.045191254;
            } else {
              result[0] += -0.005369723;
            }
          }
        }
      } else {
        if ( (data[5].missing != -1) && (data[5].fvalue < (float)-0.24679374695)) {
          result[0] += -0.02088035;
        } else {
          result[0] += -0.048860367;
        }
      }
    }
  } else {
    if ( (data[13].missing != -1) && (data[13].fvalue < (float)-0.27617534995)) {
      if ( (data[7].missing != -1) && (data[7].fvalue < (float)-0.058161891997)) {
        if ( (data[11].missing != -1) && (data[11].fvalue < (float)-0.26268348098)) {
          result[0] += 0.041131344;
        } else {
          if ( (data[10].missing != -1) && (data[10].fvalue < (float)-1.0724974871)) {
            if ( (data[5].missing != -1) && (data[5].fvalue < (float)-0.16096504033)) {
              result[0] += -0.053691536;
            } else {
              result[0] += -0.00046046768;
            }
          } else {
            if ( (data[11].missing != -1) && (data[11].fvalue < (float)-0.21514505148)) {
              if ( (data[8].missing != -1) && (data[8].fvalue < (float)-0.16978926957)) {
                result[0] += 0.00036737992;
              } else {
                result[0] += 0.037798937;
              }
            } else {
              if ( (data[1].missing != -1) && (data[1].fvalue < (float)-0.091976709664)) {
                result[0] += 0.023258206;
              } else {
                result[0] += -0.014782903;
              }
            }
          }
        }
      } else {
        result[0] += 0.047185753;
      }
    } else {
      if ( (data[5].missing != -1) && (data[5].fvalue < (float)1.4188649654)) {
        if ( (data[6].missing != -1) && (data[6].fvalue < (float)-0.74072551727)) {
          result[0] += 0.017548589;
        } else {
          result[0] += 0.057561975;
        }
      } else {
        result[0] += -0.008990808;
      }
    }
  }
  if ( (data[8].missing != -1) && (data[8].fvalue < (float)-0.18918262422)) {
    if ( (data[0].missing != -1) && (data[0].fvalue < (float)-1.4190087318)) {
      if ( (data[10].missing != -1) && (data[10].fvalue < (float)1.6924813986)) {
        result[1] += 0.048489537;
      } else {
        result[1] += -0.014381789;
      }
    } else {
      if ( (data[13].missing != -1) && (data[13].fvalue < (float)1.0023117065)) {
        if ( (data[10].missing != -1) && (data[10].fvalue < (float)-0.72088116407)) {
          result[1] += 0.0066213734;
        } else {
          if ( (data[10].missing != -1) && (data[10].fvalue < (float)0.67956137657)) {
            result[1] += -0.049800124;
          } else {
            result[1] += -0.026537139;
          }
        }
      } else {
        if ( (data[13].missing != -1) && (data[13].fvalue < (float)1.736979723)) {
          if ( (data[15].missing != -1) && (data[15].fvalue < (float)-1.4866051674)) {
            result[1] += -0.009600802;
          } else {
            if ( (data[0].missing != -1) && (data[0].fvalue < (float)-0.80280572176)) {
              result[1] += 0.044345062;
            } else {
              result[1] += 0.0111552365;
            }
          }
        } else {
          result[1] += -0.03495663;
        }
      }
    }
  } else {
    if ( (data[6].missing != -1) && (data[6].fvalue < (float)0.12343075126)) {
      result[1] += -0.047684085;
    } else {
      result[1] += -0.026789043;
    }
  }
  if ( (data[3].missing != -1) && (data[3].fvalue < (float)1.0523011684)) {
    if ( (data[6].missing != -1) && (data[6].fvalue < (float)-0.37641459703)) {
      if ( (data[8].missing != -1) && (data[8].fvalue < (float)-0.042740665376)) {
        if ( (data[11].missing != -1) && (data[11].fvalue < (float)-0.21514505148)) {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)-0.56608271599)) {
            result[2] += 0.0085417675;
          } else {
            if ( (data[10].missing != -1) && (data[10].fvalue < (float)-1.0263878107)) {
              result[2] += -0.0027286974;
            } else {
              result[2] += -0.05800866;
            }
          }
        } else {
          if ( (data[13].missing != -1) && (data[13].fvalue < (float)-0.6913408637)) {
            result[2] += 0.03771224;
          } else {
            result[2] += 0.0031856396;
          }
        }
      } else {
        result[2] += -0.041212622;
      }
    } else {
      if ( (data[2].missing != -1) && (data[2].fvalue < (float)-1.0811297894)) {
        result[2] += -0.037643474;
      } else {
        if ( (data[0].missing != -1) && (data[0].fvalue < (float)-1.0904041529)) {
          result[2] += -0.019387374;
        } else {
          if ( (data[15].missing != -1) && (data[15].fvalue < (float)-0.52006536722)) {
            if ( (data[10].missing != -1) && (data[10].fvalue < (float)0.33429646492)) {
              result[2] += 0.014098463;
            } else {
              result[2] += 0.05178368;
            }
          } else {
            if ( (data[10].missing != -1) && (data[10].fvalue < (float)-0.023404598236)) {
              if ( (data[11].missing != -1) && (data[11].fvalue < (float)-0.21514505148)) {
                result[2] += 0.00562264;
              } else {
                result[2] += 0.031522915;
              }
            } else {
              if ( (data[5].missing != -1) && (data[5].fvalue < (float)1.500685215)) {
                result[2] += -0.015648631;
              } else {
                result[2] += 0.022741664;
              }
            }
          }
        }
      }
    }
  } else {
    if ( (data[15].missing != -1) && (data[15].fvalue < (float)-1.3346209526)) {
      result[2] += -0.013050851;
    } else {
      result[2] += -0.04812522;
    }
  }
  if ( (data[8].missing != -1) && (data[8].fvalue < (float)-0.12956127524)) {
    if ( (data[10].missing != -1) && (data[10].fvalue < (float)-0.39829662442)) {
      result[3] += -0.042753056;
    } else {
      if ( (data[7].missing != -1) && (data[7].fvalue < (float)1.4132658243)) {
        if ( (data[11].missing != -1) && (data[11].fvalue < (float)-0.20037463307)) {
          if ( (data[14].missing != -1) && (data[14].fvalue < (float)-1.1276538372)) {
            result[3] += 0.044783052;
          } else {
            if ( (data[8].missing != -1) && (data[8].fvalue < (float)-0.21273091435)) {
              result[3] += -0.03753541;
            } else {
              if ( (data[7].missing != -1) && (data[7].fvalue < (float)0.49729341269)) {
                result[3] += 0.039700374;
              } else {
                result[3] += -0.010380143;
              }
            }
          }
        } else {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)1.0147672892)) {
            if ( (data[0].missing != -1) && (data[0].fvalue < (float)-0.41554325819)) {
              result[3] += -0.014294525;
            } else {
              result[3] += -0.05070121;
            }
          } else {
            result[3] += 0.010179705;
          }
        }
      } else {
        result[3] += -0.04144978;
      }
    }
  } else {
    if ( (data[13].missing != -1) && (data[13].fvalue < (float)-1.0194351673)) {
      if ( (data[11].missing != -1) && (data[11].fvalue < (float)-0.10747343302)) {
        result[3] += -0.033753585;
      } else {
        result[3] += 0.008365308;
      }
    } else {
      if ( (data[1].missing != -1) && (data[1].fvalue < (float)0.13584434986)) {
        if ( (data[1].missing != -1) && (data[1].fvalue < (float)-1.0742766857)) {
          result[3] += 0.02075911;
        } else {
          result[3] += -0.033968892;
        }
      } else {
        if ( (data[12].missing != -1) && (data[12].fvalue < (float)0.054176654667)) {
          result[3] += -0.00040011175;
        } else {
          if ( (data[14].missing != -1) && (data[14].fvalue < (float)0.76945388317)) {
            result[3] += 0.07682168;
          } else {
            if ( (data[12].missing != -1) && (data[12].fvalue < (float)0.98061102629)) {
              result[3] += -0.013818306;
            } else {
              result[3] += 0.04007586;
            }
          }
        }
      }
    }
  }
  if ( (data[9].missing != -1) && (data[9].fvalue < (float)-0.29118299484)) {
    if ( (data[11].missing != -1) && (data[11].fvalue < (float)-0.15698228776)) {
      if ( (data[5].missing != -1) && (data[5].fvalue < (float)-0.43106788397)) {
        result[0] += 0.008136446;
      } else {
        if ( (data[10].missing != -1) && (data[10].fvalue < (float)0.95288157463)) {
          result[0] += -0.048986617;
        } else {
          result[0] += -0.019404307;
        }
      }
    } else {
      result[0] += 0.020119792;
    }
  } else {
    if ( (data[11].missing != -1) && (data[11].fvalue < (float)-0.2615224123)) {
      if ( (data[6].missing != -1) && (data[6].fvalue < (float)-0.34593945742)) {
        result[0] += 0.051656235;
      } else {
        result[0] += 0.0075771767;
      }
    } else {
      if ( (data[10].missing != -1) && (data[10].fvalue < (float)-0.18654736876)) {
        if ( (data[6].missing != -1) && (data[6].fvalue < (float)1.1374956369)) {
          if ( (data[11].missing != -1) && (data[11].fvalue < (float)-0.21151523292)) {
            if ( (data[12].missing != -1) && (data[12].fvalue < (float)0.63036763668)) {
              if ( (data[3].missing != -1) && (data[3].fvalue < (float)-0.77894955873)) {
                result[0] += 0.05533884;
              } else {
                result[0] += 0.005906034;
              }
            } else {
              result[0] += -0.022585059;
            }
          } else {
            if ( (data[1].missing != -1) && (data[1].fvalue < (float)0.13584434986)) {
              result[0] += 0.0015261434;
            } else {
              if ( (data[6].missing != -1) && (data[6].fvalue < (float)-0.05884642154)) {
                result[0] += -0.053197574;
              } else {
                result[0] += -0.0135865705;
              }
            }
          }
        } else {
          result[0] += 0.03099743;
        }
      } else {
        if ( (data[8].missing != -1) && (data[8].fvalue < (float)-0.16341301799)) {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)0.19706237316)) {
            result[0] += 0.01837155;
          } else {
            result[0] += -0.034475368;
          }
        } else {
          if ( (data[11].missing != -1) && (data[11].fvalue < (float)0.066600307822)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)1.0899648666)) {
              result[0] += 0.003564649;
            } else {
              result[0] += 0.061512608;
            }
          } else {
            if ( (data[6].missing != -1) && (data[6].fvalue < (float)-0.2457845062)) {
              if ( (data[6].missing != -1) && (data[6].fvalue < (float)-0.90472733974)) {
                result[0] += 0.0019054961;
              } else {
                result[0] += 0.050847083;
              }
            } else {
              result[0] += -0.023706358;
            }
          }
        }
      }
    }
  }
  if ( (data[8].missing != -1) && (data[8].fvalue < (float)-0.18918262422)) {
    if ( (data[0].missing != -1) && (data[0].fvalue < (float)-1.4317775965)) {
      if ( (data[10].missing != -1) && (data[10].fvalue < (float)1.8065237999)) {
        result[1] += 0.042566393;
      } else {
        result[1] += -0.0009683431;
      }
    } else {
      if ( (data[13].missing != -1) && (data[13].fvalue < (float)1.0023117065)) {
        if ( (data[10].missing != -1) && (data[10].fvalue < (float)-0.74368786812)) {
          result[1] += 0.006836234;
        } else {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)-0.73631227016)) {
            result[1] += -0.026011644;
          } else {
            result[1] += -0.04925728;
          }
        }
      } else {
        if ( (data[16].missing != -1) && (data[16].fvalue < (float)0.051316402853)) {
          if ( (data[0].missing != -1) && (data[0].fvalue < (float)-1.0674057007)) {
            result[1] += 0.027248958;
          } else {
            result[1] += -0.022074897;
          }
        } else {
          result[1] += 0.038274076;
        }
      }
    }
  } else {
    if ( (data[6].missing != -1) && (data[6].fvalue < (float)0.12343075126)) {
      result[1] += -0.04854001;
    } else {
      result[1] += -0.018121852;
    }
  }
  if ( (data[8].missing != -1) && (data[8].fvalue < (float)-0.0026854926255)) {
    if ( (data[3].missing != -1) && (data[3].fvalue < (float)-1.3735567331)) {
      result[2] += 0.04163558;
    } else {
      if ( (data[11].missing != -1) && (data[11].fvalue < (float)-0.13651539385)) {
        if ( (data[16].missing != -1) && (data[16].fvalue < (float)-0.010915944353)) {
          if ( (data[16].missing != -1) && (data[16].fvalue < (float)-0.033748015761)) {
            result[2] += 0.0061848126;
          } else {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)-0.48621019721)) {
              result[2] += -0.05756665;
            } else {
              result[2] += -0.011629192;
            }
          }
        } else {
          if ( (data[5].missing != -1) && (data[5].fvalue < (float)-0.47029465437)) {
            result[2] += 0.039747957;
          } else {
            if ( (data[0].missing != -1) && (data[0].fvalue < (float)-1.1717795134)) {
              result[2] += -0.045499574;
            } else {
              if ( (data[13].missing != -1) && (data[13].fvalue < (float)1.0956714153)) {
                result[2] += 0.006947676;
              } else {
                result[2] += -0.024500608;
              }
            }
          }
        }
      } else {
        if ( (data[13].missing != -1) && (data[13].fvalue < (float)-0.73032397032)) {
          result[2] += 0.04739996;
        } else {
          if ( (data[6].missing != -1) && (data[6].fvalue < (float)-0.39624726772)) {
            result[2] += -0.015834289;
          } else {
            if ( (data[10].missing != -1) && (data[10].fvalue < (float)0.41789460182)) {
              result[2] += 0.033473384;
            } else {
              result[2] += -0.007423956;
            }
          }
        }
      }
    }
  } else {
    if ( (data[12].missing != -1) && (data[12].fvalue < (float)0.14209826291)) {
      result[2] += 0.004512372;
    } else {
      result[2] += -0.048592743;
    }
  }
  if ( (data[3].missing != -1) && (data[3].fvalue < (float)-0.25331288576)) {
    if ( (data[8].missing != -1) && (data[8].fvalue < (float)-0.12956127524)) {
      if ( (data[6].missing != -1) && (data[6].fvalue < (float)-0.17626810074)) {
        result[3] += -0.04650709;
      } else {
        if ( (data[6].missing != -1) && (data[6].fvalue < (float)0.10018060356)) {
          result[3] += 0.013312337;
        } else {
          result[3] += -0.0315547;
        }
      }
    } else {
      if ( (data[3].missing != -1) && (data[3].fvalue < (float)-0.82810521126)) {
        result[3] += 0.03409631;
      } else {
        result[3] += -0.0078106946;
      }
    }
  } else {
    if ( (data[6].missing != -1) && (data[6].fvalue < (float)-1.0255299807)) {
      if ( (data[11].missing != -1) && (data[11].fvalue < (float)-0.22117689252)) {
        result[3] += -0.004247977;
      } else {
        if ( (data[11].missing != -1) && (data[11].fvalue < (float)0.28192278743)) {
          result[3] += 0.062179234;
        } else {
          result[3] += 0.012646468;
        }
      }
    } else {
      if ( (data[11].missing != -1) && (data[11].fvalue < (float)-0.1723369211)) {
        if ( (data[8].missing != -1) && (data[8].fvalue < (float)-0.20549508929)) {
          if ( (data[10].missing != -1) && (data[10].fvalue < (float)0.74029392004)) {
            result[3] += -0.03484521;
          } else {
            if ( (data[0].missing != -1) && (data[0].fvalue < (float)-1.4190087318)) {
              result[3] += -0.019138588;
            } else {
              result[3] += 0.04011088;
            }
          }
        } else {
          if ( (data[5].missing != -1) && (data[5].fvalue < (float)-0.26934820414)) {
            result[3] += 0.00053889316;
          } else {
            if ( (data[14].missing != -1) && (data[14].fvalue < (float)-0.17553567886)) {
              result[3] += 0.02169381;
            } else {
              result[3] += 0.07264396;
            }
          }
        }
      } else {
        if ( (data[11].missing != -1) && (data[11].fvalue < (float)0.0071482318453)) {
          if ( (data[6].missing != -1) && (data[6].fvalue < (float)0.067600421607)) {
            result[3] += -0.01140324;
          } else {
            result[3] += -0.04129677;
          }
        } else {
          if ( (data[5].missing != -1) && (data[5].fvalue < (float)-0.088755533099)) {
            result[3] += -0.023977075;
          } else {
            if ( (data[13].missing != -1) && (data[13].fvalue < (float)-0.27617534995)) {
              result[3] += 0.045434363;
            } else {
              result[3] += 0.00082550914;
            }
          }
        }
      }
    }
  }
  if ( (data[0].missing != -1) && (data[0].fvalue < (float)0.14035646617)) {
    if ( (data[13].missing != -1) && (data[13].fvalue < (float)1.9840670824)) {
      if ( (data[10].missing != -1) && (data[10].fvalue < (float)0.018758390099)) {
        if ( (data[3].missing != -1) && (data[3].fvalue < (float)-0.31944227219)) {
          result[0] += -0.048836038;
        } else {
          result[0] += -0.016122071;
        }
      } else {
        if ( (data[3].missing != -1) && (data[3].fvalue < (float)0.28629669547)) {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)0.015094771981)) {
            result[0] += -0.010056893;
          } else {
            result[0] += 0.036474776;
          }
        } else {
          if ( (data[12].missing != -1) && (data[12].fvalue < (float)-1.3782277107)) {
            result[0] += 0.011538636;
          } else {
            if ( (data[10].missing != -1) && (data[10].fvalue < (float)0.74029392004)) {
              result[0] += -0.020766241;
            } else {
              result[0] += -0.049738128;
            }
          }
        }
      }
    } else {
      result[0] += 0.034248777;
    }
  } else {
    if ( (data[7].missing != -1) && (data[7].fvalue < (float)-0.0094966925681)) {
      if ( (data[11].missing != -1) && (data[11].fvalue < (float)-0.26268348098)) {
        result[0] += 0.042864066;
      } else {
        if ( (data[10].missing != -1) && (data[10].fvalue < (float)-0.89206194878)) {
          if ( (data[16].missing != -1) && (data[16].fvalue < (float)0.037433069199)) {
            if ( (data[6].missing != -1) && (data[6].fvalue < (float)-0.16892676055)) {
              result[0] += -0.023142554;
            } else {
              result[0] += -0.05905552;
            }
          } else {
            result[0] += 0.018928302;
          }
        } else {
          if ( (data[5].missing != -1) && (data[5].fvalue < (float)1.2579413652)) {
            if ( (data[7].missing != -1) && (data[7].fvalue < (float)-0.94923579693)) {
              if ( (data[13].missing != -1) && (data[13].fvalue < (float)-1.0194351673)) {
                result[0] += 0.020601546;
              } else {
                result[0] += -0.025770009;
              }
            } else {
              if ( (data[13].missing != -1) && (data[13].fvalue < (float)-0.65177553892)) {
                result[0] += -0.003218117;
              } else {
                result[0] += 0.036909;
              }
            }
          } else {
            result[0] += -0.032697078;
          }
        }
      }
    } else {
      result[0] += 0.050880767;
    }
  }
  if ( (data[8].missing != -1) && (data[8].fvalue < (float)-0.18918262422)) {
    if ( (data[1].missing != -1) && (data[1].fvalue < (float)-0.0079344278201)) {
      if ( (data[0].missing != -1) && (data[0].fvalue < (float)-1.0500885248)) {
        result[1] += 0.0026664666;
      } else {
        result[1] += -0.04961254;
      }
    } else {
      if ( (data[13].missing != -1) && (data[13].fvalue < (float)1.0310770273)) {
        if ( (data[0].missing != -1) && (data[0].fvalue < (float)-1.4190087318)) {
          result[1] += 0.03215615;
        } else {
          if ( (data[6].missing != -1) && (data[6].fvalue < (float)0.56968641281)) {
            result[1] += 0.0041734567;
          } else {
            result[1] += -0.031733;
          }
        }
      } else {
        if ( (data[3].missing != -1) && (data[3].fvalue < (float)0.35766488314)) {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)-0.19415074587)) {
            result[1] += 0.034204487;
          } else {
            result[1] += -0.022113893;
          }
        } else {
          if ( (data[15].missing != -1) && (data[15].fvalue < (float)-1.388064146)) {
            result[1] += 0.013253294;
          } else {
            result[1] += 0.054539144;
          }
        }
      }
    }
  } else {
    if ( (data[8].missing != -1) && (data[8].fvalue < (float)-0.10686820745)) {
      result[1] += -0.047648303;
    } else {
      result[1] += -0.026775736;
    }
  }
  if ( (data[0].missing != -1) && (data[0].fvalue < (float)-1.1717795134)) {
    result[2] += -0.047404274;
  } else {
    if ( (data[6].missing != -1) && (data[6].fvalue < (float)-0.37641459703)) {
      if ( (data[3].missing != -1) && (data[3].fvalue < (float)-0.14372131228)) {
        if ( (data[8].missing != -1) && (data[8].fvalue < (float)-0.18801514804)) {
          if ( (data[10].missing != -1) && (data[10].fvalue < (float)-0.8168155551)) {
            result[2] += 0.03075163;
          } else {
            result[2] += -0.0057604825;
          }
        } else {
          if ( (data[11].missing != -1) && (data[11].fvalue < (float)-0.18647551537)) {
            result[2] += -0.044383746;
          } else {
            result[2] += 0.0008753431;
          }
        }
      } else {
        result[2] += -0.039889924;
      }
    } else {
      if ( (data[11].missing != -1) && (data[11].fvalue < (float)-0.26893174648)) {
        result[2] += 0.047059864;
      } else {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)0.94407975674)) {
          if ( (data[11].missing != -1) && (data[11].fvalue < (float)-0.23548963666)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)-0.94920670986)) {
              result[2] += -0.0344079;
            } else {
              if ( (data[10].missing != -1) && (data[10].fvalue < (float)-0.61503177881)) {
                result[2] += -0.0064192014;
              } else {
                result[2] += 0.035800252;
              }
            }
          } else {
            if ( (data[12].missing != -1) && (data[12].fvalue < (float)-0.5130815506)) {
              if ( (data[3].missing != -1) && (data[3].fvalue < (float)0.56793439388)) {
                result[2] += -0.026755689;
              } else {
                result[2] += 0.019199686;
              }
            } else {
              if ( (data[12].missing != -1) && (data[12].fvalue < (float)0.04880091548)) {
                result[2] += 0.051314432;
              } else {
                result[2] += 0.020019216;
              }
            }
          }
        } else {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)0.070308201015)) {
            result[2] += 0.0101058455;
          } else {
            result[2] += -0.03207107;
          }
        }
      }
    }
  }
  if ( (data[2].missing != -1) && (data[2].fvalue < (float)-2.5894255638)) {
    result[3] += 0.0446275;
  } else {
    if ( (data[8].missing != -1) && (data[8].fvalue < (float)0.011566273868)) {
      if ( (data[0].missing != -1) && (data[0].fvalue < (float)0.045263364911)) {
        if ( (data[7].missing != -1) && (data[7].fvalue < (float)0.0079784486443)) {
          result[3] += 0.036351662;
        } else {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)0.23707579076)) {
            if ( (data[5].missing != -1) && (data[5].fvalue < (float)-0.24522577226)) {
              result[3] += -0.008830154;
            } else {
              result[3] += -0.04811531;
            }
          } else {
            if ( (data[6].missing != -1) && (data[6].fvalue < (float)-0.22760552168)) {
              if ( (data[8].missing != -1) && (data[8].fvalue < (float)-0.17939275503)) {
                result[3] += 0.012319805;
              } else {
                result[3] += 0.05031134;
              }
            } else {
              if ( (data[5].missing != -1) && (data[5].fvalue < (float)-0.1428437233)) {
                result[3] += -0.030471617;
              } else {
                result[3] += 0.012616209;
              }
            }
          }
        }
      } else {
        if ( (data[15].missing != -1) && (data[15].fvalue < (float)0.49353119731)) {
          result[3] += -0.045741826;
        } else {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)0.26863145828)) {
            result[3] += 0.00950078;
          } else {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)-0.165521577)) {
              result[3] += -0.041816123;
            } else {
              result[3] += 0.0016926354;
            }
          }
        }
      }
    } else {
      if ( (data[8].missing != -1) && (data[8].fvalue < (float)0.12710408866)) {
        if ( (data[0].missing != -1) && (data[0].fvalue < (float)0.72153884172)) {
          result[3] += 0.01780497;
        } else {
          result[3] += 0.043941405;
        }
      } else {
        if ( (data[8].missing != -1) && (data[8].fvalue < (float)0.50055772066)) {
          if ( (data[6].missing != -1) && (data[6].fvalue < (float)-0.71604603529)) {
            result[3] += 0.0034115964;
          } else {
            result[3] += -0.04224845;
          }
        } else {
          if ( (data[5].missing != -1) && (data[5].fvalue < (float)-0.088755533099)) {
            result[3] += 0.0006828907;
          } else {
            result[3] += 0.040137034;
          }
        }
      }
    }
  }
  if ( (data[9].missing != -1) && (data[9].fvalue < (float)-0.25189942122)) {
    if ( (data[7].missing != -1) && (data[7].fvalue < (float)-0.36191350222)) {
      result[0] += 0.028885052;
    } else {
      if ( (data[10].missing != -1) && (data[10].fvalue < (float)1.6265655756)) {
        if ( (data[8].missing != -1) && (data[8].fvalue < (float)-0.20142486691)) {
          result[0] += -0.048755214;
        } else {
          if ( (data[11].missing != -1) && (data[11].fvalue < (float)-0.21446585655)) {
            result[0] += -0.007844577;
          } else {
            result[0] += -0.023086626;
          }
        }
      } else {
        result[0] += 0.0073141106;
      }
    }
  } else {
    if ( (data[6].missing != -1) && (data[6].fvalue < (float)-0.39624726772)) {
      if ( (data[11].missing != -1) && (data[11].fvalue < (float)-0.22332780063)) {
        if ( (data[16].missing != -1) && (data[16].fvalue < (float)0.0042847408913)) {
          result[0] += 0.054697007;
        } else {
          result[0] += 0.025534824;
        }
      } else {
        if ( (data[12].missing != -1) && (data[12].fvalue < (float)0.91569340229)) {
          if ( (data[7].missing != -1) && (data[7].fvalue < (float)-0.27611738443)) {
            if ( (data[5].missing != -1) && (data[5].fvalue < (float)-0.26313957572)) {
              result[0] += 0.04966601;
            } else {
              result[0] += 0.019712785;
            }
          } else {
            if ( (data[11].missing != -1) && (data[11].fvalue < (float)-0.018274491653)) {
              result[0] += -0.037225313;
            } else {
              result[0] += 0.013319734;
            }
          }
        } else {
          result[0] += -0.027260223;
        }
      }
    } else {
      if ( (data[11].missing != -1) && (data[11].fvalue < (float)0.0071482318453)) {
        if ( (data[8].missing != -1) && (data[8].fvalue < (float)0.045544706285)) {
          if ( (data[16].missing != -1) && (data[16].fvalue < (float)0.00039073103108)) {
            if ( (data[5].missing != -1) && (data[5].fvalue < (float)-0.32606995106)) {
              result[0] += -0.0098933205;
            } else {
              result[0] += -0.041574143;
            }
          } else {
            if ( (data[0].missing != -1) && (data[0].fvalue < (float)0.64492481947)) {
              if ( (data[0].missing != -1) && (data[0].fvalue < (float)0.43066838384)) {
                result[0] += 0.0056522777;
              } else {
                result[0] += 0.05467368;
              }
            } else {
              if ( (data[6].missing != -1) && (data[6].fvalue < (float)0.56409221888)) {
                result[0] += -0.052035946;
              } else {
                result[0] += 0.019879488;
              }
            }
          }
        } else {
          result[0] += 0.048462942;
        }
      } else {
        if ( (data[11].missing != -1) && (data[11].fvalue < (float)0.19523085654)) {
          result[0] += -0.047463488;
        } else {
          result[0] += -0.010639691;
        }
      }
    }
  }
  if ( (data[0].missing != -1) && (data[0].fvalue < (float)-0.80280572176)) {
    if ( (data[10].missing != -1) && (data[10].fvalue < (float)1.6924813986)) {
      if ( (data[0].missing != -1) && (data[0].fvalue < (float)-1.4190087318)) {
        result[1] += 0.043224327;
      } else {
        if ( (data[13].missing != -1) && (data[13].fvalue < (float)0.98732662201)) {
          result[1] += -0.01903478;
        } else {
          if ( (data[7].missing != -1) && (data[7].fvalue < (float)1.3164781332)) {
            result[1] += 0.036213953;
          } else {
            result[1] += -0.0019311709;
          }
        }
      }
    } else {
      result[1] += -0.015998956;
    }
  } else {
    if ( (data[16].missing != -1) && (data[16].fvalue < (float)0.051316402853)) {
      if ( (data[7].missing != -1) && (data[7].fvalue < (float)-0.75742077827)) {
        result[1] += -0.011724454;
      } else {
        if ( (data[8].missing != -1) && (data[8].fvalue < (float)-0.16056913137)) {
          result[1] += -0.05020831;
        } else {
          result[1] += -0.026281625;
        }
      }
    } else {
      result[1] += 0.0011492937;
    }
  }
  if ( (data[3].missing != -1) && (data[3].fvalue < (float)1.0523011684)) {
    if ( (data[3].missing != -1) && (data[3].fvalue < (float)-1.3735567331)) {
      result[2] += 0.0329816;
    } else {
      if ( (data[12].missing != -1) && (data[12].fvalue < (float)0.15007823706)) {
        if ( (data[12].missing != -1) && (data[12].fvalue < (float)0.010684866458)) {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)-0.45875871181)) {
            if ( (data[11].missing != -1) && (data[11].fvalue < (float)-0.25627627969)) {
              result[2] += -0.018538674;
            } else {
              if ( (data[0].missing != -1) && (data[0].fvalue < (float)-0.084950469434)) {
                result[2] += 0.051928706;
              } else {
                result[2] += 0.019204466;
              }
            }
          } else {
            if ( (data[5].missing != -1) && (data[5].fvalue < (float)-0.26934820414)) {
              if ( (data[5].missing != -1) && (data[5].fvalue < (float)-0.39605548978)) {
                result[2] += -0.008608204;
              } else {
                result[2] += -0.047806572;
              }
            } else {
              if ( (data[13].missing != -1) && (data[13].fvalue < (float)1.0310770273)) {
                result[2] += 0.014315659;
              } else {
                result[2] += -0.025826273;
              }
            }
          }
        } else {
          if ( (data[0].missing != -1) && (data[0].fvalue < (float)0.36195263267)) {
            result[2] += 0.012399523;
          } else {
            result[2] += 0.05334537;
          }
        }
      } else {
        if ( (data[8].missing != -1) && (data[8].fvalue < (float)-0.0026854926255)) {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)0.36125040054)) {
            if ( (data[1].missing != -1) && (data[1].fvalue < (float)-0.52625721693)) {
              result[2] += 0.0117413085;
            } else {
              if ( (data[12].missing != -1) && (data[12].fvalue < (float)0.38598513603)) {
                result[2] += -0.014600115;
              } else {
                result[2] += -0.045738943;
              }
            }
          } else {
            if ( (data[12].missing != -1) && (data[12].fvalue < (float)0.98061102629)) {
              result[2] += 0.031738263;
            } else {
              result[2] += -0.0039815768;
            }
          }
        } else {
          result[2] += -0.04539944;
        }
      }
    }
  } else {
    result[2] += -0.049284074;
  }
  if ( (data[6].missing != -1) && (data[6].fvalue < (float)-0.13855433464)) {
    if ( (data[6].missing != -1) && (data[6].fvalue < (float)-0.27162119746)) {
      if ( (data[3].missing != -1) && (data[3].fvalue < (float)-0.23574270308)) {
        if ( (data[12].missing != -1) && (data[12].fvalue < (float)0.86043608189)) {
          result[3] += -0.04667666;
        } else {
          result[3] += 0.016518163;
        }
      } else {
        if ( (data[5].missing != -1) && (data[5].fvalue < (float)-0.42040032148)) {
          if ( (data[12].missing != -1) && (data[12].fvalue < (float)0.56249433756)) {
            result[3] += -0.033948626;
          } else {
            result[3] += 0.016172005;
          }
        } else {
          if ( (data[8].missing != -1) && (data[8].fvalue < (float)-0.16880448163)) {
            result[3] += 0.04729424;
          } else {
            if ( (data[7].missing != -1) && (data[7].fvalue < (float)-1.0330662727)) {
              result[3] += 0.03774476;
            } else {
              if ( (data[7].missing != -1) && (data[7].fvalue < (float)-0.18876649439)) {
                result[3] += -0.043307524;
              } else {
                result[3] += 0.022425693;
              }
            }
          }
        }
      }
    } else {
      result[3] += 0.055414736;
    }
  } else {
    if ( (data[10].missing != -1) && (data[10].fvalue < (float)0.41789460182)) {
      if ( (data[7].missing != -1) && (data[7].fvalue < (float)-0.76535511017)) {
        if ( (data[15].missing != -1) && (data[15].fvalue < (float)1.0522749424)) {
          result[3] += 0.027676133;
        } else {
          result[3] += -0.034835313;
        }
      } else {
        if ( (data[11].missing != -1) && (data[11].fvalue < (float)-0.2043402344)) {
          result[3] += -0.023654932;
        } else {
          result[3] += -0.05397712;
        }
      }
    } else {
      if ( (data[15].missing != -1) && (data[15].fvalue < (float)-0.42976659536)) {
        if ( (data[15].missing != -1) && (data[15].fvalue < (float)-0.58949971199)) {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)0.9507433176)) {
            result[3] += 0.018994955;
          } else {
            result[3] += -0.019406563;
          }
        } else {
          result[3] += -0.049255308;
        }
      } else {
        result[3] += 0.04021492;
      }
    }
  }
  if ( (data[3].missing != -1) && (data[3].fvalue < (float)-1.1763842106)) {
    result[0] += -0.034200337;
  } else {
    if ( (data[14].missing != -1) && (data[14].fvalue < (float)0.20521055162)) {
      if ( (data[13].missing != -1) && (data[13].fvalue < (float)-0.017879812047)) {
        result[0] += -0.046745565;
      } else {
        if ( (data[8].missing != -1) && (data[8].fvalue < (float)-0.21849969029)) {
          result[0] += -0.02468497;
        } else {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)0.015094771981)) {
            result[0] += -0.019250818;
          } else {
            if ( (data[5].missing != -1) && (data[5].fvalue < (float)-0.15271317959)) {
              if ( (data[12].missing != -1) && (data[12].fvalue < (float)-0.79302626848)) {
                result[0] += 0.013976172;
              } else {
                result[0] += 0.06620463;
              }
            } else {
              if ( (data[6].missing != -1) && (data[6].fvalue < (float)0.77487510443)) {
                result[0] += -0.02981562;
              } else {
                result[0] += 0.016920088;
              }
            }
          }
        }
      }
    } else {
      if ( (data[11].missing != -1) && (data[11].fvalue < (float)-0.2367080003)) {
        if ( (data[10].missing != -1) && (data[10].fvalue < (float)-0.89206194878)) {
          result[0] += 0.009896169;
        } else {
          result[0] += 0.05965898;
        }
      } else {
        if ( (data[10].missing != -1) && (data[10].fvalue < (float)-0.18654736876)) {
          if ( (data[16].missing != -1) && (data[16].fvalue < (float)0.046086959541)) {
            if ( (data[1].missing != -1) && (data[1].fvalue < (float)0.43742504716)) {
              result[0] += 0.018341063;
            } else {
              if ( (data[12].missing != -1) && (data[12].fvalue < (float)0.27705559134)) {
                result[0] += -0.0002878743;
              } else {
                result[0] += -0.055703618;
              }
            }
          } else {
            if ( (data[10].missing != -1) && (data[10].fvalue < (float)-0.65578824282)) {
              result[0] += 0.04221417;
            } else {
              result[0] += 0.0058067045;
            }
          }
        } else {
          if ( (data[11].missing != -1) && (data[11].fvalue < (float)-0.047184146941)) {
            result[0] += 0.043121308;
          } else {
            if ( (data[6].missing != -1) && (data[6].fvalue < (float)0.07151145488)) {
              if ( (data[6].missing != -1) && (data[6].fvalue < (float)-0.81779527664)) {
                result[0] += 0.00810982;
              } else {
                result[0] += 0.046310488;
              }
            } else {
              result[0] += -0.024905426;
            }
          }
        }
      }
    }
  }
  if ( (data[7].missing != -1) && (data[7].fvalue < (float)0.6512581706)) {
    if ( (data[13].missing != -1) && (data[13].fvalue < (float)1.2953075171)) {
      if ( (data[6].missing != -1) && (data[6].fvalue < (float)0.12343075126)) {
        result[1] += -0.048700973;
      } else {
        if ( (data[6].missing != -1) && (data[6].fvalue < (float)0.65618908405)) {
          result[1] += 0.012243072;
        } else {
          result[1] += -0.045602348;
        }
      }
    } else {
      if ( (data[6].missing != -1) && (data[6].fvalue < (float)0.40193554759)) {
        result[1] += -0.008400629;
      } else {
        result[1] += 0.01896295;
      }
    }
  } else {
    if ( (data[5].missing != -1) && (data[5].fvalue < (float)-0.40100291371)) {
      result[1] += -0.02942655;
    } else {
      if ( (data[14].missing != -1) && (data[14].fvalue < (float)-1.1276538372)) {
        if ( (data[16].missing != -1) && (data[16].fvalue < (float)-0.0055110147223)) {
          result[1] += 0.03810857;
        } else {
          if ( (data[14].missing != -1) && (data[14].fvalue < (float)-1.8757205009)) {
            result[1] += -0.018406553;
          } else {
            result[1] += 0.009211678;
          }
        }
      } else {
        if ( (data[10].missing != -1) && (data[10].fvalue < (float)1.1853919029)) {
          result[1] += 0.017855024;
        } else {
          result[1] += 0.058500346;
        }
      }
    }
  }
  if ( (data[8].missing != -1) && (data[8].fvalue < (float)0.011566273868)) {
    if ( (data[3].missing != -1) && (data[3].fvalue < (float)-1.3735567331)) {
      result[2] += 0.037933286;
    } else {
      if ( (data[0].missing != -1) && (data[0].fvalue < (float)-1.146918416)) {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)-0.91126847267)) {
          result[2] += -0.009805401;
        } else {
          result[2] += -0.029335072;
        }
      } else {
        if ( (data[12].missing != -1) && (data[12].fvalue < (float)0.15007823706)) {
          if ( (data[8].missing != -1) && (data[8].fvalue < (float)-0.14996892214)) {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)-0.91361236572)) {
              result[2] += 0.047135267;
            } else {
              if ( (data[16].missing != -1) && (data[16].fvalue < (float)0.022840771824)) {
                result[2] += -0.004372339;
              } else {
                result[2] += 0.0296239;
              }
            }
          } else {
            if ( (data[14].missing != -1) && (data[14].fvalue < (float)0.49461621046)) {
              result[2] += -0.037978955;
            } else {
              result[2] += 0.024299046;
            }
          }
        } else {
          if ( (data[11].missing != -1) && (data[11].fvalue < (float)-0.21514505148)) {
            if ( (data[12].missing != -1) && (data[12].fvalue < (float)0.70414102077)) {
              if ( (data[13].missing != -1) && (data[13].fvalue < (float)-0.34435260296)) {
                result[2] += -0.02246339;
              } else {
                result[2] += -0.05762077;
              }
            } else {
              result[2] += 0.004431026;
            }
          } else {
            if ( (data[10].missing != -1) && (data[10].fvalue < (float)-0.83907783031)) {
              result[2] += 0.042810794;
            } else {
              if ( (data[3].missing != -1) && (data[3].fvalue < (float)-0.55354166031)) {
                result[2] += -0.038160693;
              } else {
                result[2] += 0.017178828;
              }
            }
          }
        }
      }
    }
  } else {
    if ( (data[5].missing != -1) && (data[5].fvalue < (float)0.32434606552)) {
      result[2] += -0.04875199;
    } else {
      result[2] += -0.004371447;
    }
  }
  if ( (data[6].missing != -1) && (data[6].fvalue < (float)0.94073528051)) {
    if ( (data[16].missing != -1) && (data[16].fvalue < (float)0.00039073103108)) {
      if ( (data[6].missing != -1) && (data[6].fvalue < (float)-1.1365638971)) {
        result[3] += 0.014430784;
      } else {
        if ( (data[10].missing != -1) && (data[10].fvalue < (float)0.79747533798)) {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)-0.028089480475)) {
            result[3] += -0.0131042395;
          } else {
            result[3] += -0.04666365;
          }
        } else {
          result[3] += -0.0079316115;
        }
      }
    } else {
      if ( (data[6].missing != -1) && (data[6].fvalue < (float)0.64755177498)) {
        if ( (data[12].missing != -1) && (data[12].fvalue < (float)-0.80914157629)) {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)0.04016796127)) {
            if ( (data[14].missing != -1) && (data[14].fvalue < (float)-1.035297513)) {
              result[3] += 0.049420267;
            } else {
              result[3] += 0.0085891625;
            }
          } else {
            result[3] += -0.0062873513;
          }
        } else {
          if ( (data[7].missing != -1) && (data[7].fvalue < (float)-0.9930356741)) {
            if ( (data[6].missing != -1) && (data[6].fvalue < (float)-0.44656607509)) {
              result[3] += 0.043026775;
            } else {
              result[3] += -0.0012764104;
            }
          } else {
            if ( (data[2].missing != -1) && (data[2].fvalue < (float)0.005992370192)) {
              result[3] += 0.02173054;
            } else {
              if ( (data[3].missing != -1) && (data[3].fvalue < (float)-0.61887007952)) {
                result[3] += -0.0020561612;
              } else {
                result[3] += -0.030582452;
              }
            }
          }
        }
      } else {
        if ( (data[7].missing != -1) && (data[7].fvalue < (float)0.0079784486443)) {
          result[3] += 0.05294274;
        } else {
          result[3] += 0.015018771;
        }
      }
    }
  } else {
    if ( (data[9].missing != -1) && (data[9].fvalue < (float)-0.61510449648)) {
      result[3] += -0.0014366974;
    } else {
      result[3] += -0.045847725;
    }
  }
  if ( (data[3].missing != -1) && (data[3].fvalue < (float)-1.1763842106)) {
    result[0] += -0.030642986;
  } else {
    if ( (data[8].missing != -1) && (data[8].fvalue < (float)-0.21849969029)) {
      result[0] += -0.023172526;
    } else {
      if ( (data[8].missing != -1) && (data[8].fvalue < (float)-0.21592520177)) {
        result[0] += 0.04692664;
      } else {
        if ( (data[15].missing != -1) && (data[15].fvalue < (float)0.34610843658)) {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)-0.33466351032)) {
            result[0] += -0.04621321;
          } else {
            if ( (data[5].missing != -1) && (data[5].fvalue < (float)-0.30542847514)) {
              if ( (data[13].missing != -1) && (data[13].fvalue < (float)0.38713166118)) {
                result[0] += 0.0024268099;
              } else {
                result[0] += 0.048953466;
              }
            } else {
              if ( (data[6].missing != -1) && (data[6].fvalue < (float)0.4216991365)) {
                result[0] += -0.025058636;
              } else {
                result[0] += 0.0066313394;
              }
            }
          }
        } else {
          if ( (data[11].missing != -1) && (data[11].fvalue < (float)-0.073542796075)) {
            if ( (data[10].missing != -1) && (data[10].fvalue < (float)-0.8168155551)) {
              if ( (data[13].missing != -1) && (data[13].fvalue < (float)-1.1939806938)) {
                result[0] += 0.020445082;
              } else {
                result[0] += -0.011880278;
              }
            } else {
              if ( (data[13].missing != -1) && (data[13].fvalue < (float)-0.64172792435)) {
                result[0] += 0.054721165;
              } else {
                result[0] += 0.020518068;
              }
            }
          } else {
            if ( (data[13].missing != -1) && (data[13].fvalue < (float)-0.81457257271)) {
              if ( (data[12].missing != -1) && (data[12].fvalue < (float)1.1993442774)) {
                result[0] += -0.032261103;
              } else {
                result[0] += -0.004986089;
              }
            } else {
              if ( (data[6].missing != -1) && (data[6].fvalue < (float)-0.28605768085)) {
                result[0] += 0.026497338;
              } else {
                result[0] += -0.016913278;
              }
            }
          }
        }
      }
    }
  }
  if ( (data[6].missing != -1) && (data[6].fvalue < (float)-0.50929665565)) {
    result[1] += -0.04217004;
  } else {
    if ( (data[8].missing != -1) && (data[8].fvalue < (float)-0.21642738581)) {
      if ( (data[5].missing != -1) && (data[5].fvalue < (float)-0.40100291371)) {
        result[1] += -0.007645265;
      } else {
        if ( (data[6].missing != -1) && (data[6].fvalue < (float)0.23682963848)) {
          result[1] += 0.05664242;
        } else {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)0.62488621473)) {
            result[1] += 0.00022670173;
          } else {
            result[1] += 0.03383995;
          }
        }
      }
    } else {
      if ( (data[16].missing != -1) && (data[16].fvalue < (float)0.056843884289)) {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)-1.267203927)) {
          result[1] += 0.009857043;
        } else {
          if ( (data[11].missing != -1) && (data[11].fvalue < (float)-0.2043402344)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)-0.49538713694)) {
              result[1] += -0.020536264;
            } else {
              result[1] += -0.04241072;
            }
          } else {
            result[1] += -0.008136881;
          }
        }
      } else {
        if ( (data[15].missing != -1) && (data[15].fvalue < (float)-0.53432995081)) {
          result[1] += 0.04028326;
        } else {
          result[1] += -0.005052391;
        }
      }
    }
  }
  if ( (data[16].missing != -1) && (data[16].fvalue < (float)0.053103368729)) {
    if ( (data[3].missing != -1) && (data[3].fvalue < (float)-1.3599464893)) {
      result[2] += 0.034143865;
    } else {
      if ( (data[16].missing != -1) && (data[16].fvalue < (float)-0.044682629406)) {
        result[2] += -0.035064545;
      } else {
        if ( (data[13].missing != -1) && (data[13].fvalue < (float)0.61577022076)) {
          if ( (data[5].missing != -1) && (data[5].fvalue < (float)-0.34237021208)) {
            if ( (data[7].missing != -1) && (data[7].fvalue < (float)-0.19368056953)) {
              if ( (data[10].missing != -1) && (data[10].fvalue < (float)-0.78995537758)) {
                result[2] += -0.0023676644;
              } else {
                result[2] += -0.044501618;
              }
            } else {
              result[2] += 0.00746195;
            }
          } else {
            if ( (data[7].missing != -1) && (data[7].fvalue < (float)0.27180051804)) {
              if ( (data[7].missing != -1) && (data[7].fvalue < (float)-0.0094966925681)) {
                result[2] += 0.023018638;
              } else {
                result[2] += -0.030180547;
              }
            } else {
              result[2] += 0.0376524;
            }
          }
        } else {
          if ( (data[5].missing != -1) && (data[5].fvalue < (float)-0.40100291371)) {
            result[2] += 0.035205796;
          } else {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)-0.40506112576)) {
              result[2] += 0.00085659896;
            } else {
              if ( (data[11].missing != -1) && (data[11].fvalue < (float)-0.24906308949)) {
                result[2] += -0.013716663;
              } else {
                result[2] += -0.052681353;
              }
            }
          }
        }
      }
    }
  } else {
    if ( (data[7].missing != -1) && (data[7].fvalue < (float)-0.44216892123)) {
      result[2] += -0.044027638;
    } else {
      if ( (data[3].missing != -1) && (data[3].fvalue < (float)0.72411340475)) {
        result[2] += 0.014301029;
      } else {
        result[2] += -0.030317614;
      }
    }
  }
  if ( (data[2].missing != -1) && (data[2].fvalue < (float)0.13540814817)) {
    if ( (data[6].missing != -1) && (data[6].fvalue < (float)-0.024934647605)) {
      if ( (data[0].missing != -1) && (data[0].fvalue < (float)0.11519979686)) {
        result[3] += 0.05344894;
      } else {
        result[3] += 0.019114919;
      }
    } else {
      result[3] += 0.000392778;
    }
  } else {
    if ( (data[12].missing != -1) && (data[12].fvalue < (float)0.56249433756)) {
      if ( (data[10].missing != -1) && (data[10].fvalue < (float)-0.39254391193)) {
        result[3] += -0.045310367;
      } else {
        if ( (data[11].missing != -1) && (data[11].fvalue < (float)0.12085646391)) {
          if ( (data[8].missing != -1) && (data[8].fvalue < (float)-0.14774316549)) {
            if ( (data[11].missing != -1) && (data[11].fvalue < (float)-0.16485464573)) {
              if ( (data[5].missing != -1) && (data[5].fvalue < (float)-0.1428437233)) {
                result[3] += -0.01132602;
              } else {
                result[3] += 0.021292001;
              }
            } else {
              result[3] += -0.041385923;
            }
          } else {
            if ( (data[6].missing != -1) && (data[6].fvalue < (float)-0.28605768085)) {
              result[3] += 0.015364962;
            } else {
              result[3] += 0.03428499;
            }
          }
        } else {
          result[3] += -0.030231757;
        }
      }
    } else {
      if ( (data[13].missing != -1) && (data[13].fvalue < (float)-1.0194351673)) {
        if ( (data[6].missing != -1) && (data[6].fvalue < (float)-0.25756847858)) {
          result[3] += -0.024271375;
        } else {
          result[3] += 0.012838674;
        }
      } else {
        if ( (data[6].missing != -1) && (data[6].fvalue < (float)-0.53989446163)) {
          result[3] += 0.052265223;
        } else {
          result[3] += -0.0033250672;
        }
      }
    }
  }
  if ( (data[9].missing != -1) && (data[9].fvalue < (float)-0.47115305066)) {
    if ( (data[5].missing != -1) && (data[5].fvalue < (float)-0.44998666644)) {
      result[0] += 0.019835038;
    } else {
      if ( (data[11].missing != -1) && (data[11].fvalue < (float)-0.2294845134)) {
        result[0] += -0.048030775;
      } else {
        result[0] += -0.0002992842;
      }
    }
  } else {
    if ( (data[11].missing != -1) && (data[11].fvalue < (float)-0.25357052684)) {
      if ( (data[8].missing != -1) && (data[8].fvalue < (float)-0.19080479443)) {
        if ( (data[1].missing != -1) && (data[1].fvalue < (float)-0.42481967807)) {
          result[0] += -0.014659213;
        } else {
          if ( (data[10].missing != -1) && (data[10].fvalue < (float)-0.56744205952)) {
            result[0] += 0.036067702;
          } else {
            result[0] += 0.0124024;
          }
        }
      } else {
        result[0] += 0.05665479;
      }
    } else {
      if ( (data[16].missing != -1) && (data[16].fvalue < (float)-0.03018331714)) {
        result[0] += -0.029287448;
      } else {
        if ( (data[2].missing != -1) && (data[2].fvalue < (float)0.023060614243)) {
          if ( (data[6].missing != -1) && (data[6].fvalue < (float)-0.40938580036)) {
            result[0] += -0.046058;
          } else {
            result[0] += 0.0015372833;
          }
        } else {
          if ( (data[6].missing != -1) && (data[6].fvalue < (float)-0.39193168283)) {
            if ( (data[6].missing != -1) && (data[6].fvalue < (float)-1.2920905352)) {
              result[0] += -0.010625929;
            } else {
              if ( (data[3].missing != -1) && (data[3].fvalue < (float)0.58887857199)) {
                result[0] += 0.03790995;
              } else {
                result[0] += 0.0032744228;
              }
            }
          } else {
            if ( (data[11].missing != -1) && (data[11].fvalue < (float)-0.047184146941)) {
              if ( (data[11].missing != -1) && (data[11].fvalue < (float)-0.14802908897)) {
                result[0] += -0.0012694877;
              } else {
                result[0] += 0.038022365;
              }
            } else {
              if ( (data[16].missing != -1) && (data[16].fvalue < (float)0.036329638213)) {
                result[0] += -0.040372666;
              } else {
                result[0] += -0.010895029;
              }
            }
          }
        }
      }
    }
  }
  if ( (data[8].missing != -1) && (data[8].fvalue < (float)-0.21625265479)) {
    if ( (data[11].missing != -1) && (data[11].fvalue < (float)-0.26674380898)) {
      if ( (data[0].missing != -1) && (data[0].fvalue < (float)-1.3883382082)) {
        result[1] += 0.024160368;
      } else {
        result[1] += -0.02470516;
      }
    } else {
      if ( (data[16].missing != -1) && (data[16].fvalue < (float)0.003763372777)) {
        result[1] += 0.059031468;
      } else {
        result[1] += 0.019506143;
      }
    }
  } else {
    if ( (data[9].missing != -1) && (data[9].fvalue < (float)-1.267203927)) {
      result[1] += 0.014739965;
    } else {
      if ( (data[16].missing != -1) && (data[16].fvalue < (float)0.069090053439)) {
        if ( (data[13].missing != -1) && (data[13].fvalue < (float)1.3108989)) {
          if ( (data[13].missing != -1) && (data[13].fvalue < (float)0.26775252819)) {
            result[1] += -0.040615734;
          } else {
            if ( (data[16].missing != -1) && (data[16].fvalue < (float)0.018668660894)) {
              result[1] += 0.01476751;
            } else {
              result[1] += -0.026479973;
            }
          }
        } else {
          result[1] += -0.058268856;
        }
      } else {
        result[1] += 0.011197766;
      }
    }
  }
  if ( (data[0].missing != -1) && (data[0].fvalue < (float)-1.0904041529)) {
    result[2] += -0.029869337;
  } else {
    if ( (data[5].missing != -1) && (data[5].fvalue < (float)1.667165041)) {
      if ( (data[3].missing != -1) && (data[3].fvalue < (float)0.34440889955)) {
        if ( (data[16].missing != -1) && (data[16].fvalue < (float)0.072256959975)) {
          if ( (data[10].missing != -1) && (data[10].fvalue < (float)0.71433472633)) {
            if ( (data[10].missing != -1) && (data[10].fvalue < (float)0.2830029726)) {
              if ( (data[6].missing != -1) && (data[6].fvalue < (float)0.15546032786)) {
                result[2] += 1.3445351e-05;
              } else {
                result[2] += 0.021720458;
              }
            } else {
              result[2] += -0.033933744;
            }
          } else {
            result[2] += 0.044737533;
          }
        } else {
          result[2] += -0.024340648;
        }
      } else {
        if ( (data[15].missing != -1) && (data[15].fvalue < (float)-0.64968472719)) {
          result[2] += -0.0008575159;
        } else {
          result[2] += -0.045787293;
        }
      }
    } else {
      result[2] += 0.033545934;
    }
  }
  if ( (data[6].missing != -1) && (data[6].fvalue < (float)0.43545079231)) {
    if ( (data[2].missing != -1) && (data[2].fvalue < (float)-0.27207258344)) {
      result[3] += 0.03985977;
    } else {
      if ( (data[11].missing != -1) && (data[11].fvalue < (float)-0.26087924838)) {
        if ( (data[11].missing != -1) && (data[11].fvalue < (float)-0.26734253764)) {
          result[3] += -0.0008913356;
        } else {
          result[3] += 0.048160817;
        }
      } else {
        if ( (data[8].missing != -1) && (data[8].fvalue < (float)-0.19121129811)) {
          result[3] += -0.032862518;
        } else {
          if ( (data[16].missing != -1) && (data[16].fvalue < (float)-0.040112588555)) {
            result[3] += 0.038953032;
          } else {
            if ( (data[1].missing != -1) && (data[1].fvalue < (float)-1.332406044)) {
              result[3] += 0.03363038;
            } else {
              if ( (data[1].missing != -1) && (data[1].fvalue < (float)0.19310203195)) {
                result[3] += -0.034864407;
              } else {
                result[3] += 0.0042767767;
              }
            }
          }
        }
      }
    }
  } else {
    if ( (data[5].missing != -1) && (data[5].fvalue < (float)-0.10935657471)) {
      result[3] += -0.051256806;
    } else {
      if ( (data[6].missing != -1) && (data[6].fvalue < (float)1.0815649033)) {
        if ( (data[11].missing != -1) && (data[11].fvalue < (float)-0.2053707242)) {
          result[3] += 0.03492483;
        } else {
          result[3] += -0.005598679;
        }
      } else {
        if ( (data[16].missing != -1) && (data[16].fvalue < (float)0.055081080645)) {
          result[3] += -0.04558452;
        } else {
          result[3] += -0.005175397;
        }
      }
    }
  }
  if ( (data[8].missing != -1) && (data[8].fvalue < (float)-0.18742009997)) {
    if ( (data[10].missing != -1) && (data[10].fvalue < (float)1.0253105164)) {
      if ( (data[16].missing != -1) && (data[16].fvalue < (float)0.003763372777)) {
        if ( (data[5].missing != -1) && (data[5].fvalue < (float)-0.34237021208)) {
          result[0] += -0.0036823952;
        } else {
          result[0] += -0.04487639;
        }
      } else {
        if ( (data[8].missing != -1) && (data[8].fvalue < (float)-0.21442578733)) {
          result[0] += 0.033990216;
        } else {
          if ( (data[10].missing != -1) && (data[10].fvalue < (float)-0.64825534821)) {
            result[0] += 0.01778838;
          } else {
            if ( (data[14].missing != -1) && (data[14].fvalue < (float)-0.39234533906)) {
              result[0] += 0.0020560867;
            } else {
              result[0] += -0.04667699;
            }
          }
        }
      }
    } else {
      result[0] += -0.049506053;
    }
  } else {
    if ( (data[11].missing != -1) && (data[11].fvalue < (float)-0.23761886358)) {
      result[0] += 0.057608854;
    } else {
      if ( (data[13].missing != -1) && (data[13].fvalue < (float)0.98732662201)) {
        if ( (data[6].missing != -1) && (data[6].fvalue < (float)0.902148664)) {
          if ( (data[7].missing != -1) && (data[7].fvalue < (float)-0.27611738443)) {
            if ( (data[12].missing != -1) && (data[12].fvalue < (float)0.91569340229)) {
              if ( (data[6].missing != -1) && (data[6].fvalue < (float)-0.30391672254)) {
                result[0] += 0.030923558;
              } else {
                result[0] += -0.01416622;
              }
            } else {
              if ( (data[12].missing != -1) && (data[12].fvalue < (float)1.1729528904)) {
                result[0] += -0.045331668;
              } else {
                result[0] += -0.0041483296;
              }
            }
          } else {
            if ( (data[5].missing != -1) && (data[5].fvalue < (float)-0.34496054053)) {
              result[0] += -0.0029238306;
            } else {
              if ( (data[16].missing != -1) && (data[16].fvalue < (float)0.018113873899)) {
                result[0] += -0.020356601;
              } else {
                result[0] += -0.051995702;
              }
            }
          }
        } else {
          result[0] += 0.023472322;
        }
      } else {
        result[0] += 0.046429936;
      }
    }
  }
  if ( (data[6].missing != -1) && (data[6].fvalue < (float)-0.50929665565)) {
    if ( (data[6].missing != -1) && (data[6].fvalue < (float)-1.0255299807)) {
      result[1] += -0.02667667;
    } else {
      result[1] += -0.052693624;
    }
  } else {
    if ( (data[16].missing != -1) && (data[16].fvalue < (float)-0.0071742031723)) {
      if ( (data[5].missing != -1) && (data[5].fvalue < (float)-0.39324355125)) {
        result[1] += 0.0034579907;
      } else {
        result[1] += 0.049944874;
      }
    } else {
      if ( (data[9].missing != -1) && (data[9].fvalue < (float)-1.267203927)) {
        if ( (data[13].missing != -1) && (data[13].fvalue < (float)1.4886692762)) {
          result[1] += 0.032489985;
        } else {
          result[1] += -0.000587766;
        }
      } else {
        if ( (data[3].missing != -1) && (data[3].fvalue < (float)1.4404942989)) {
          if ( (data[5].missing != -1) && (data[5].fvalue < (float)0.6877835989)) {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)0.35357928276)) {
              if ( (data[9].missing != -1) && (data[9].fvalue < (float)-0.0675939098)) {
                result[1] += -0.020287639;
              } else {
                result[1] += -0.046020813;
              }
            } else {
              result[1] += 0.0059539825;
            }
          } else {
            result[1] += -0.049604505;
          }
        } else {
          result[1] += 0.013667429;
        }
      }
    }
  }
  if ( (data[8].missing != -1) && (data[8].fvalue < (float)-0.20639407635)) {
    if ( (data[0].missing != -1) && (data[0].fvalue < (float)-1.1717795134)) {
      result[2] += -0.02033696;
    } else {
      if ( (data[13].missing != -1) && (data[13].fvalue < (float)-0.76479697227)) {
        result[2] += -0.015450931;
      } else {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)-1.267203927)) {
          result[2] += 0.0043292264;
        } else {
          if ( (data[13].missing != -1) && (data[13].fvalue < (float)0.94390970469)) {
            if ( (data[6].missing != -1) && (data[6].fvalue < (float)0.17723160982)) {
              result[2] += 0.019463964;
            } else {
              result[2] += 0.055160653;
            }
          } else {
            result[2] += 0.016942149;
          }
        }
      }
    }
  } else {
    if ( (data[11].missing != -1) && (data[11].fvalue < (float)-0.23627480865)) {
      if ( (data[9].missing != -1) && (data[9].fvalue < (float)-0.29118299484)) {
        result[2] += -0.057429582;
      } else {
        if ( (data[8].missing != -1) && (data[8].fvalue < (float)-0.19264282286)) {
          result[2] += 0.028631007;
        } else {
          result[2] += -0.040799048;
        }
      }
    } else {
      if ( (data[3].missing != -1) && (data[3].fvalue < (float)0.19738391042)) {
        if ( (data[8].missing != -1) && (data[8].fvalue < (float)0.045544706285)) {
          if ( (data[16].missing != -1) && (data[16].fvalue < (float)0.010450830683)) {
            if ( (data[10].missing != -1) && (data[10].fvalue < (float)-0.56744205952)) {
              result[2] += 0.04362419;
            } else {
              result[2] += 0.0013170473;
            }
          } else {
            if ( (data[0].missing != -1) && (data[0].fvalue < (float)0.68037927151)) {
              if ( (data[13].missing != -1) && (data[13].fvalue < (float)0.16127343476)) {
                result[2] += -0.026538968;
              } else {
                result[2] += 0.01776328;
              }
            } else {
              result[2] += 0.031640615;
            }
          }
        } else {
          result[2] += -0.024077281;
        }
      } else {
        if ( (data[0].missing != -1) && (data[0].fvalue < (float)-0.56242692471)) {
          result[2] += 0.0011905462;
        } else {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)0.62488621473)) {
            result[2] += -0.014695026;
          } else {
            result[2] += -0.045924257;
          }
        }
      }
    }
  }
  if ( (data[11].missing != -1) && (data[11].fvalue < (float)2.1478612423)) {
    if ( (data[9].missing != -1) && (data[9].fvalue < (float)1.7302501202)) {
      if ( (data[14].missing != -1) && (data[14].fvalue < (float)-1.4366136789)) {
        result[3] += -0.028943345;
      } else {
        if ( (data[14].missing != -1) && (data[14].fvalue < (float)-1.1020410061)) {
          if ( (data[10].missing != -1) && (data[10].fvalue < (float)1.1075388193)) {
            result[3] += 0.014406155;
          } else {
            result[3] += 0.041681398;
          }
        } else {
          if ( (data[8].missing != -1) && (data[8].fvalue < (float)-0.21442578733)) {
            result[3] += -0.045331918;
          } else {
            if ( (data[1].missing != -1) && (data[1].fvalue < (float)-1.4659063816)) {
              result[3] += 0.02467332;
            } else {
              if ( (data[9].missing != -1) && (data[9].fvalue < (float)-0.31248277426)) {
                result[3] += 0.009669071;
              } else {
                result[3] += -0.009906424;
              }
            }
          }
        }
      }
    } else {
      result[3] += -0.035216216;
    }
  } else {
    result[3] += 0.0326665;
  }
  if ( (data[9].missing != -1) && (data[9].fvalue < (float)-0.2431563288)) {
    if ( (data[6].missing != -1) && (data[6].fvalue < (float)-0.77784711123)) {
      result[0] += 0.016964233;
    } else {
      if ( (data[3].missing != -1) && (data[3].fvalue < (float)0.097445912659)) {
        if ( (data[16].missing != -1) && (data[16].fvalue < (float)0.003763372777)) {
          result[0] += -0.019844737;
        } else {
          result[0] += -0.045796476;
        }
      } else {
        if ( (data[10].missing != -1) && (data[10].fvalue < (float)1.0438103676)) {
          result[0] += 0.011976798;
        } else {
          result[0] += -0.028381446;
        }
      }
    }
  } else {
    if ( (data[11].missing != -1) && (data[11].fvalue < (float)-0.26674380898)) {
      result[0] += 0.033998284;
    } else {
      if ( (data[6].missing != -1) && (data[6].fvalue < (float)1.1374956369)) {
        if ( (data[5].missing != -1) && (data[5].fvalue < (float)0.07551728934)) {
          if ( (data[12].missing != -1) && (data[12].fvalue < (float)0.56249433756)) {
            if ( (data[11].missing != -1) && (data[11].fvalue < (float)0.35976424813)) {
              if ( (data[9].missing != -1) && (data[9].fvalue < (float)0.69189429283)) {
                result[0] += 0.02299282;
              } else {
                result[0] += -0.025919659;
              }
            } else {
              result[0] += 0.05126257;
            }
          } else {
            if ( (data[5].missing != -1) && (data[5].fvalue < (float)-0.17693051696)) {
              if ( (data[12].missing != -1) && (data[12].fvalue < (float)1.155277133)) {
                result[0] += -0.03937347;
              } else {
                result[0] += 0.0034155075;
              }
            } else {
              result[0] += 0.027891075;
            }
          }
        } else {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)0.81481641531)) {
            result[0] += -0.04659845;
          } else {
            if ( (data[13].missing != -1) && (data[13].fvalue < (float)-0.38157576323)) {
              result[0] += 0.0137451505;
            } else {
              result[0] += -0.014338084;
            }
          }
        }
      } else {
        if ( (data[0].missing != -1) && (data[0].fvalue < (float)0.4168241322)) {
          result[0] += -0.006185645;
        } else {
          result[0] += 0.0494695;
        }
      }
    }
  }
  if ( (data[8].missing != -1) && (data[8].fvalue < (float)-0.21968281269)) {
    result[1] += 0.039029468;
  } else {
    if ( (data[13].missing != -1) && (data[13].fvalue < (float)0.19216702878)) {
      result[1] += -0.043914173;
    } else {
      if ( (data[10].missing != -1) && (data[10].fvalue < (float)1.6924813986)) {
        if ( (data[0].missing != -1) && (data[0].fvalue < (float)-1.4317775965)) {
          result[1] += 0.03180827;
        } else {
          if ( (data[8].missing != -1) && (data[8].fvalue < (float)-0.20033873618)) {
            if ( (data[10].missing != -1) && (data[10].fvalue < (float)0.77467292547)) {
              if ( (data[10].missing != -1) && (data[10].fvalue < (float)0.18442307413)) {
                result[1] += -0.00187462;
              } else {
                result[1] += 0.03221249;
              }
            } else {
              if ( (data[5].missing != -1) && (data[5].fvalue < (float)0.37600171566)) {
                result[1] += -0.053807355;
              } else {
                result[1] += 0.017980104;
              }
            }
          } else {
            result[1] += -0.029874573;
          }
        }
      } else {
        result[1] += -0.04921662;
      }
    }
  }
  if ( (data[8].missing != -1) && (data[8].fvalue < (float)0.011566273868)) {
    if ( (data[3].missing != -1) && (data[3].fvalue < (float)-1.3735567331)) {
      result[2] += 0.03836878;
    } else {
      if ( (data[11].missing != -1) && (data[11].fvalue < (float)-0.26344907284)) {
        if ( (data[12].missing != -1) && (data[12].fvalue < (float)-1.0277322531)) {
          result[2] += 0.02137688;
        } else {
          if ( (data[8].missing != -1) && (data[8].fvalue < (float)-0.21273091435)) {
            result[2] += -0.016560853;
          } else {
            result[2] += -0.050406873;
          }
        }
      } else {
        if ( (data[8].missing != -1) && (data[8].fvalue < (float)-0.21392957866)) {
          result[2] += -0.03430816;
        } else {
          if ( (data[6].missing != -1) && (data[6].fvalue < (float)1.4019529819)) {
            if ( (data[12].missing != -1) && (data[12].fvalue < (float)0.70414102077)) {
              if ( (data[6].missing != -1) && (data[6].fvalue < (float)0.82293176651)) {
                result[2] += 0.004679346;
              } else {
                result[2] += -0.024019055;
              }
            } else {
              if ( (data[8].missing != -1) && (data[8].fvalue < (float)-0.17229938507)) {
                result[2] += 0.055716623;
              } else {
                result[2] += 0.002681799;
              }
            }
          } else {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)0.56793439388)) {
              result[2] += 0.052080262;
            } else {
              result[2] += 0.009948533;
            }
          }
        }
      }
    }
  } else {
    if ( (data[5].missing != -1) && (data[5].fvalue < (float)0.32434606552)) {
      result[2] += -0.041735854;
    } else {
      result[2] += -0.0038364101;
    }
  }
  if ( (data[13].missing != -1) && (data[13].fvalue < (float)0.98732662201)) {
    if ( (data[12].missing != -1) && (data[12].fvalue < (float)-0.7460719347)) {
      if ( (data[14].missing != -1) && (data[14].fvalue < (float)-1.3899236917)) {
        result[3] += -0.0060419044;
      } else {
        if ( (data[5].missing != -1) && (data[5].fvalue < (float)-0.13195152581)) {
          if ( (data[5].missing != -1) && (data[5].fvalue < (float)-0.30131819844)) {
            result[3] += 0.02817378;
          } else {
            result[3] += 0.053347737;
          }
        } else {
          result[3] += 0.0078030042;
        }
      }
    } else {
      if ( (data[15].missing != -1) && (data[15].fvalue < (float)-0.27798226476)) {
        result[3] += -0.03808042;
      } else {
        if ( (data[10].missing != -1) && (data[10].fvalue < (float)0.13604107499)) {
          if ( (data[10].missing != -1) && (data[10].fvalue < (float)-0.136102736)) {
            if ( (data[6].missing != -1) && (data[6].fvalue < (float)0.15546032786)) {
              if ( (data[6].missing != -1) && (data[6].fvalue < (float)-0.27162119746)) {
                result[3] += -0.006982273;
              } else {
                result[3] += 0.054009266;
              }
            } else {
              if ( (data[13].missing != -1) && (data[13].fvalue < (float)-0.86564141512)) {
                result[3] += -0.0061132223;
              } else {
                result[3] += -0.029574964;
              }
            }
          } else {
            result[3] += -0.032775566;
          }
        } else {
          if ( (data[11].missing != -1) && (data[11].fvalue < (float)-0.16485464573)) {
            result[3] += 0.052492656;
          } else {
            if ( (data[6].missing != -1) && (data[6].fvalue < (float)-0.90472733974)) {
              result[3] += 0.038095165;
            } else {
              if ( (data[13].missing != -1) && (data[13].fvalue < (float)-0.19670066237)) {
                result[3] += 0.013625838;
              } else {
                result[3] += -0.024295678;
              }
            }
          }
        }
      }
    }
  } else {
    if ( (data[13].missing != -1) && (data[13].fvalue < (float)1.6390570402)) {
      if ( (data[10].missing != -1) && (data[10].fvalue < (float)1.2680850029)) {
        result[3] += -0.0485102;
      } else {
        result[3] += -0.01807814;
      }
    } else {
      result[3] += 0.013528399;
    }
  }
  if ( (data[8].missing != -1) && (data[8].fvalue < (float)-0.21849969029)) {
    result[0] += -0.027820213;
  } else {
    if ( (data[11].missing != -1) && (data[11].fvalue < (float)-0.25845351815)) {
      if ( (data[8].missing != -1) && (data[8].fvalue < (float)-0.20639407635)) {
        result[0] += 0.0050159725;
      } else {
        result[0] += 0.044432867;
      }
    } else {
      if ( (data[1].missing != -1) && (data[1].fvalue < (float)-1.5993287563)) {
        result[0] += -0.03312824;
      } else {
        if ( (data[3].missing != -1) && (data[3].fvalue < (float)-0.41539546847)) {
          if ( (data[6].missing != -1) && (data[6].fvalue < (float)0.902148664)) {
            if ( (data[8].missing != -1) && (data[8].fvalue < (float)-0.20474259555)) {
              result[0] += 0.025890563;
            } else {
              if ( (data[15].missing != -1) && (data[15].fvalue < (float)0.75784748793)) {
                result[0] += -0.014742874;
              } else {
                result[0] += -0.054822035;
              }
            }
          } else {
            result[0] += 0.022872578;
          }
        } else {
          if ( (data[16].missing != -1) && (data[16].fvalue < (float)0.091937877238)) {
            if ( (data[11].missing != -1) && (data[11].fvalue < (float)-0.052285194397)) {
              if ( (data[0].missing != -1) && (data[0].fvalue < (float)0.91816103458)) {
                result[0] += 0.014393332;
              } else {
                result[0] += 0.0530302;
              }
            } else {
              if ( (data[6].missing != -1) && (data[6].fvalue < (float)-0.25756847858)) {
                result[0] += 0.01422226;
              } else {
                result[0] += -0.018849928;
              }
            }
          } else {
            result[0] += -0.024036214;
          }
        }
      }
    }
  }
  if ( (data[6].missing != -1) && (data[6].fvalue < (float)-0.50929665565)) {
    result[1] += -0.040908754;
  } else {
    if ( (data[9].missing != -1) && (data[9].fvalue < (float)-1.5157911777)) {
      result[1] += 0.044106778;
    } else {
      if ( (data[16].missing != -1) && (data[16].fvalue < (float)-0.019668526947)) {
        result[1] += 0.034402985;
      } else {
        if ( (data[10].missing != -1) && (data[10].fvalue < (float)-0.044407144189)) {
          result[1] += -0.034354657;
        } else {
          if ( (data[11].missing != -1) && (data[11].fvalue < (float)-0.2405167073)) {
            if ( (data[5].missing != -1) && (data[5].fvalue < (float)-0.25001698732)) {
              result[1] += 0.0063207457;
            } else {
              result[1] += -0.04138151;
            }
          } else {
            if ( (data[8].missing != -1) && (data[8].fvalue < (float)-0.20033873618)) {
              if ( (data[12].missing != -1) && (data[12].fvalue < (float)-1.3782277107)) {
                result[1] += -3.143031e-05;
              } else {
                result[1] += 0.040464763;
              }
            } else {
              result[1] += -0.0156003935;
            }
          }
        }
      }
    }
  }
  if ( (data[8].missing != -1) && (data[8].fvalue < (float)0.011566273868)) {
    if ( (data[3].missing != -1) && (data[3].fvalue < (float)-1.3735567331)) {
      result[2] += 0.041732293;
    } else {
      if ( (data[16].missing != -1) && (data[16].fvalue < (float)-0.018707942218)) {
        if ( (data[16].missing != -1) && (data[16].fvalue < (float)-0.032497059554)) {
          result[2] += 0.012181368;
        } else {
          result[2] += -0.036818936;
        }
      } else {
        if ( (data[3].missing != -1) && (data[3].fvalue < (float)0.080768875778)) {
          if ( (data[15].missing != -1) && (data[15].fvalue < (float)-0.14327384531)) {
            if ( (data[16].missing != -1) && (data[16].fvalue < (float)0.022840771824)) {
              result[2] += 0.019447938;
            } else {
              result[2] += 0.05107568;
            }
          } else {
            if ( (data[5].missing != -1) && (data[5].fvalue < (float)0.24856686592)) {
              if ( (data[16].missing != -1) && (data[16].fvalue < (float)0.025671081617)) {
                result[2] += 0.010269089;
              } else {
                result[2] += -0.037890058;
              }
            } else {
              if ( (data[15].missing != -1) && (data[15].fvalue < (float)0.5820954442)) {
                result[2] += 0.008452562;
              } else {
                result[2] += 0.040836867;
              }
            }
          }
        } else {
          if ( (data[16].missing != -1) && (data[16].fvalue < (float)0.0089819151908)) {
            result[2] += 0.01058356;
          } else {
            if ( (data[5].missing != -1) && (data[5].fvalue < (float)1.667165041)) {
              if ( (data[3].missing != -1) && (data[3].fvalue < (float)0.33814021945)) {
                result[2] += -0.0115987705;
              } else {
                result[2] += -0.044337317;
              }
            } else {
              result[2] += 0.011195417;
            }
          }
        }
      }
    }
  } else {
    if ( (data[12].missing != -1) && (data[12].fvalue < (float)0.1728617698)) {
      result[2] += -0.006122408;
    } else {
      result[2] += -0.04465908;
    }
  }
  if ( (data[13].missing != -1) && (data[13].fvalue < (float)0.98732662201)) {
    if ( (data[10].missing != -1) && (data[10].fvalue < (float)-0.46583351493)) {
      if ( (data[7].missing != -1) && (data[7].fvalue < (float)-0.9930356741)) {
        result[3] += 0.02714918;
      } else {
        if ( (data[5].missing != -1) && (data[5].fvalue < (float)-0.34237021208)) {
          result[3] += 0.005587795;
        } else {
          result[3] += -0.047819223;
        }
      }
    } else {
      if ( (data[2].missing != -1) && (data[2].fvalue < (float)0.005992370192)) {
        if ( (data[6].missing != -1) && (data[6].fvalue < (float)-0.22760552168)) {
          result[3] += 0.049562003;
        } else {
          result[3] += 0.01992502;
        }
      } else {
        if ( (data[3].missing != -1) && (data[3].fvalue < (float)-0.01826726459)) {
          result[3] += 0.03161252;
        } else {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)0.22197172046)) {
            result[3] += -0.03522238;
          } else {
            if ( (data[1].missing != -1) && (data[1].fvalue < (float)-1.0143922567)) {
              result[3] += 0.04869343;
            } else {
              if ( (data[5].missing != -1) && (data[5].fvalue < (float)0.6877835989)) {
                result[3] += -0.01141155;
              } else {
                result[3] += 0.037364524;
              }
            }
          }
        }
      }
    }
  } else {
    if ( (data[9].missing != -1) && (data[9].fvalue < (float)-0.94920670986)) {
      if ( (data[13].missing != -1) && (data[13].fvalue < (float)1.6390570402)) {
        result[3] += -0.017171139;
      } else {
        result[3] += 0.017880525;
      }
    } else {
      result[3] += -0.036179077;
    }
  }
  if ( (data[5].missing != -1) && (data[5].fvalue < (float)2.3154711723)) {
    if ( (data[6].missing != -1) && (data[6].fvalue < (float)0.83127039671)) {
      if ( (data[5].missing != -1) && (data[5].fvalue < (float)-0.48074766994)) {
        if ( (data[1].missing != -1) && (data[1].fvalue < (float)0.058750249445)) {
          result[0] += 0.037756972;
        } else {
          if ( (data[11].missing != -1) && (data[11].fvalue < (float)-0.16889058053)) {
            result[0] += 0.017421007;
          } else {
            result[0] += -0.013847272;
          }
        }
      } else {
        if ( (data[11].missing != -1) && (data[11].fvalue < (float)0.35976424813)) {
          if ( (data[11].missing != -1) && (data[11].fvalue < (float)-0.22255906463)) {
            if ( (data[10].missing != -1) && (data[10].fvalue < (float)0.17146204412)) {
              if ( (data[7].missing != -1) && (data[7].fvalue < (float)-0.51966667175)) {
                result[0] += -0.010989677;
              } else {
                result[0] += 0.023596454;
              }
            } else {
              result[0] += -0.023006046;
            }
          } else {
            if ( (data[16].missing != -1) && (data[16].fvalue < (float)0.033533539623)) {
              if ( (data[13].missing != -1) && (data[13].fvalue < (float)-0.7139454484)) {
                result[0] += -0.049051367;
              } else {
                result[0] += -0.01874029;
              }
            } else {
              if ( (data[7].missing != -1) && (data[7].fvalue < (float)-0.27611738443)) {
                result[0] += 0.012454468;
              } else {
                result[0] += -0.021497425;
              }
            }
          }
        } else {
          if ( (data[12].missing != -1) && (data[12].fvalue < (float)0.42990517616)) {
            result[0] += 0.043958463;
          } else {
            result[0] += -0.0053148028;
          }
        }
      }
    } else {
      if ( (data[8].missing != -1) && (data[8].fvalue < (float)-0.20639407635)) {
        result[0] += -0.01304346;
      } else {
        if ( (data[13].missing != -1) && (data[13].fvalue < (float)-0.52175492048)) {
          result[0] += 0.058659893;
        } else {
          result[0] += 0.01816802;
        }
      }
    }
  } else {
    result[0] += -0.03615908;
  }
  if ( (data[0].missing != -1) && (data[0].fvalue < (float)-0.42872259021)) {
    if ( (data[13].missing != -1) && (data[13].fvalue < (float)1.9595717192)) {
      if ( (data[12].missing != -1) && (data[12].fvalue < (float)-1.2160754204)) {
        if ( (data[11].missing != -1) && (data[11].fvalue < (float)-0.25284281373)) {
          result[1] += -0.03027617;
        } else {
          result[1] += 0.013003664;
        }
      } else {
        if ( (data[7].missing != -1) && (data[7].fvalue < (float)0.6512581706)) {
          result[1] += -0.008405405;
        } else {
          if ( (data[10].missing != -1) && (data[10].fvalue < (float)1.4828332663)) {
            result[1] += 0.017203316;
          } else {
            result[1] += 0.051899206;
          }
        }
      }
    } else {
      result[1] += -0.03460621;
    }
  } else {
    result[1] += -0.0432761;
  }
  if ( (data[6].missing != -1) && (data[6].fvalue < (float)-0.4936747849)) {
    if ( (data[7].missing != -1) && (data[7].fvalue < (float)-0.74306476116)) {
      result[2] += -0.040454857;
    } else {
      if ( (data[16].missing != -1) && (data[16].fvalue < (float)0.0087882457301)) {
        result[2] += 0.010931972;
      } else {
        result[2] += -0.031695202;
      }
    }
  } else {
    if ( (data[0].missing != -1) && (data[0].fvalue < (float)-1.1717795134)) {
      result[2] += -0.03394664;
    } else {
      if ( (data[12].missing != -1) && (data[12].fvalue < (float)1.020488739)) {
        if ( (data[10].missing != -1) && (data[10].fvalue < (float)-0.023404598236)) {
          if ( (data[7].missing != -1) && (data[7].fvalue < (float)0.00053751171799)) {
            if ( (data[13].missing != -1) && (data[13].fvalue < (float)-0.15258552134)) {
              if ( (data[8].missing != -1) && (data[8].fvalue < (float)-0.079930528998)) {
                result[2] += 0.033013888;
              } else {
                result[2] += -0.0017750765;
              }
            } else {
              result[2] += -0.017169582;
            }
          } else {
            result[2] += 0.050124604;
          }
        } else {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)0.9507433176)) {
            if ( (data[6].missing != -1) && (data[6].fvalue < (float)0.16060613096)) {
              result[2] += 0.0142814;
            } else {
              if ( (data[12].missing != -1) && (data[12].fvalue < (float)-0.48623552918)) {
                result[2] += -0.034709122;
              } else {
                result[2] += 0.0012083681;
              }
            }
          } else {
            result[2] += 0.034784105;
          }
        }
      } else {
        result[2] += -0.024096971;
      }
    }
  }
  if ( (data[16].missing != -1) && (data[16].fvalue < (float)0.00039073103108)) {
    if ( (data[12].missing != -1) && (data[12].fvalue < (float)0.8181411624)) {
      if ( (data[0].missing != -1) && (data[0].fvalue < (float)-0.24326729774)) {
        result[3] += -0.0061224024;
      } else {
        result[3] += -0.04403193;
      }
    } else {
      result[3] += 0.008219934;
    }
  } else {
    if ( (data[16].missing != -1) && (data[16].fvalue < (float)0.085194684565)) {
      if ( (data[2].missing != -1) && (data[2].fvalue < (float)-0.27207258344)) {
        result[3] += 0.03507557;
      } else {
        if ( (data[1].missing != -1) && (data[1].fvalue < (float)-0.0079344278201)) {
          if ( (data[1].missing != -1) && (data[1].fvalue < (float)-1.332406044)) {
            result[3] += 0.005690233;
          } else {
            result[3] += -0.03849076;
          }
        } else {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)-0.01826726459)) {
            if ( (data[7].missing != -1) && (data[7].fvalue < (float)-0.40445777774)) {
              result[3] += 0.058743853;
            } else {
              result[3] += 0.0034482274;
            }
          } else {
            if ( (data[12].missing != -1) && (data[12].fvalue < (float)-0.46165171266)) {
              if ( (data[7].missing != -1) && (data[7].fvalue < (float)0.61500769854)) {
                result[3] += 0.043313116;
              } else {
                result[3] += -0.0011158866;
              }
            } else {
              if ( (data[12].missing != -1) && (data[12].fvalue < (float)0.42990517616)) {
                result[3] += -0.05144904;
              } else {
                result[3] += 0.005199279;
              }
            }
          }
        }
      }
    } else {
      if ( (data[3].missing != -1) && (data[3].fvalue < (float)0.25650903583)) {
        result[3] += 0.007663221;
      } else {
        result[3] += -0.039747477;
      }
    }
  }
  if ( (data[5].missing != -1) && (data[5].fvalue < (float)2.3154711723)) {
    if ( (data[8].missing != -1) && (data[8].fvalue < (float)-0.21849969029)) {
      result[0] += -0.022889689;
    } else {
      if ( (data[8].missing != -1) && (data[8].fvalue < (float)-0.21442578733)) {
        result[0] += 0.036617924;
      } else {
        if ( (data[8].missing != -1) && (data[8].fvalue < (float)-0.16569210589)) {
          if ( (data[5].missing != -1) && (data[5].fvalue < (float)-0.019165378064)) {
            if ( (data[1].missing != -1) && (data[1].fvalue < (float)-0.52625721693)) {
              result[0] += -0.024839027;
            } else {
              if ( (data[6].missing != -1) && (data[6].fvalue < (float)-0.12928208709)) {
                result[0] += -0.0054401224;
              } else {
                result[0] += 0.029942552;
              }
            }
          } else {
            result[0] += -0.03324514;
          }
        } else {
          if ( (data[6].missing != -1) && (data[6].fvalue < (float)0.902148664)) {
            if ( (data[13].missing != -1) && (data[13].fvalue < (float)0.73432272673)) {
              if ( (data[7].missing != -1) && (data[7].fvalue < (float)-0.4675784409)) {
                result[0] += 0.008348138;
              } else {
                result[0] += -0.016051611;
              }
            } else {
              result[0] += 0.038183108;
            }
          } else {
            result[0] += 0.04619282;
          }
        }
      }
    }
  } else {
    result[0] += -0.033742826;
  }
  if ( (data[8].missing != -1) && (data[8].fvalue < (float)-0.20033873618)) {
    if ( (data[5].missing != -1) && (data[5].fvalue < (float)-0.41068267822)) {
      result[1] += -0.033915926;
    } else {
      if ( (data[1].missing != -1) && (data[1].fvalue < (float)-0.0079344278201)) {
        result[1] += -0.024385562;
      } else {
        if ( (data[6].missing != -1) && (data[6].fvalue < (float)0.65618908405)) {
          if ( (data[16].missing != -1) && (data[16].fvalue < (float)-0.0035335980356)) {
            result[1] += 0.061230846;
          } else {
            result[1] += 0.023946492;
          }
        } else {
          if ( (data[13].missing != -1) && (data[13].fvalue < (float)1.0956714153)) {
            result[1] += -0.022422267;
          } else {
            result[1] += 0.015109261;
          }
        }
      }
    }
  } else {
    if ( (data[3].missing != -1) && (data[3].fvalue < (float)0.88894993067)) {
      result[1] += -0.04361064;
    } else {
      result[1] += -0.0035133269;
    }
  }
  if ( (data[16].missing != -1) && (data[16].fvalue < (float)-0.018707942218)) {
    if ( (data[16].missing != -1) && (data[16].fvalue < (float)-0.031885597855)) {
      result[2] += 0.0008608172;
    } else {
      result[2] += -0.0382767;
    }
  } else {
    if ( (data[16].missing != -1) && (data[16].fvalue < (float)0.04201586172)) {
      if ( (data[10].missing != -1) && (data[10].fvalue < (float)-0.28834235668)) {
        if ( (data[11].missing != -1) && (data[11].fvalue < (float)-0.21514505148)) {
          if ( (data[8].missing != -1) && (data[8].fvalue < (float)-0.18555359542)) {
            if ( (data[11].missing != -1) && (data[11].fvalue < (float)-0.25357052684)) {
              result[2] += 0.0014956661;
            } else {
              result[2] += 0.042687494;
            }
          } else {
            result[2] += -0.037121017;
          }
        } else {
          if ( (data[5].missing != -1) && (data[5].fvalue < (float)-0.34637346864)) {
            result[2] += 0.019304236;
          } else {
            result[2] += 0.04644921;
          }
        }
      } else {
        if ( (data[11].missing != -1) && (data[11].fvalue < (float)-0.26844626665)) {
          result[2] += 0.036524035;
        } else {
          if ( (data[13].missing != -1) && (data[13].fvalue < (float)0.68191283941)) {
            if ( (data[6].missing != -1) && (data[6].fvalue < (float)0.092376641929)) {
              result[2] += -0.016505877;
            } else {
              result[2] += 0.030954337;
            }
          } else {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)-0.98316407204)) {
              result[2] += -0.013006042;
            } else {
              result[2] += -0.05081243;
            }
          }
        }
      }
    } else {
      if ( (data[7].missing != -1) && (data[7].fvalue < (float)-0.44216892123)) {
        if ( (data[5].missing != -1) && (data[5].fvalue < (float)0.35733887553)) {
          result[2] += -0.045348164;
        } else {
          result[2] += -0.011921645;
        }
      } else {
        if ( (data[3].missing != -1) && (data[3].fvalue < (float)0.72411340475)) {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)-0.84180510044)) {
            result[2] += -0.012323496;
          } else {
            result[2] += 0.039903976;
          }
        } else {
          result[2] += -0.022303639;
        }
      }
    }
  }
  if ( (data[14].missing != -1) && (data[14].fvalue < (float)-1.4259421825)) {
    result[3] += -0.039246652;
  } else {
    if ( (data[10].missing != -1) && (data[10].fvalue < (float)-0.46583351493)) {
      if ( (data[8].missing != -1) && (data[8].fvalue < (float)-0.12956127524)) {
        result[3] += -0.046384495;
      } else {
        if ( (data[5].missing != -1) && (data[5].fvalue < (float)-0.28717571497)) {
          result[3] += 0.028007207;
        } else {
          result[3] += -0.012129131;
        }
      }
    } else {
      if ( (data[14].missing != -1) && (data[14].fvalue < (float)-1.1276538372)) {
        result[3] += 0.037800405;
      } else {
        if ( (data[10].missing != -1) && (data[10].fvalue < (float)-0.2608923018)) {
          result[3] += 0.03535315;
        } else {
          if ( (data[5].missing != -1) && (data[5].fvalue < (float)-0.42040032148)) {
            result[3] += -0.023566399;
          } else {
            if ( (data[6].missing != -1) && (data[6].fvalue < (float)-0.081195987761)) {
              if ( (data[16].missing != -1) && (data[16].fvalue < (float)0.025671081617)) {
                result[3] += 0.028146897;
              } else {
                result[3] += -0.0053942404;
              }
            } else {
              if ( (data[5].missing != -1) && (data[5].fvalue < (float)-0.14007590711)) {
                result[3] += -0.038135733;
              } else {
                result[3] += 0.004049461;
              }
            }
          }
        }
      }
    }
  }
  if ( (data[7].missing != -1) && (data[7].fvalue < (float)0.13828615844)) {
    if ( (data[7].missing != -1) && (data[7].fvalue < (float)-0.0094966925681)) {
      if ( (data[11].missing != -1) && (data[11].fvalue < (float)-0.23780336976)) {
        if ( (data[10].missing != -1) && (data[10].fvalue < (float)-0.89206194878)) {
          if ( (data[13].missing != -1) && (data[13].fvalue < (float)-1.2934023142)) {
            result[0] += 0.021011718;
          } else {
            result[0] += -0.014605328;
          }
        } else {
          result[0] += 0.042517554;
        }
      } else {
        if ( (data[16].missing != -1) && (data[16].fvalue < (float)-0.03018331714)) {
          result[0] += -0.03943055;
        } else {
          if ( (data[7].missing != -1) && (data[7].fvalue < (float)-0.21360145509)) {
            if ( (data[10].missing != -1) && (data[10].fvalue < (float)-0.18654736876)) {
              if ( (data[1].missing != -1) && (data[1].fvalue < (float)0.43742504716)) {
                result[0] += 0.020648183;
              } else {
                result[0] += -0.01627967;
              }
            } else {
              if ( (data[3].missing != -1) && (data[3].fvalue < (float)0.905631423)) {
                result[0] += 0.03552186;
              } else {
                result[0] += -0.002512354;
              }
            }
          } else {
            result[0] += -0.029638398;
          }
        }
      }
    } else {
      result[0] += 0.04755795;
    }
  } else {
    if ( (data[16].missing != -1) && (data[16].fvalue < (float)0.013591933995)) {
      if ( (data[0].missing != -1) && (data[0].fvalue < (float)-1.3338936567)) {
        result[0] += -0.007872849;
      } else {
        result[0] += -0.042809017;
      }
    } else {
      if ( (data[5].missing != -1) && (data[5].fvalue < (float)-0.15271317959)) {
        if ( (data[6].missing != -1) && (data[6].fvalue < (float)-0.12928208709)) {
          result[0] += -0.015667437;
        } else {
          result[0] += 0.05873523;
        }
      } else {
        if ( (data[6].missing != -1) && (data[6].fvalue < (float)1.3642252684)) {
          result[0] += -0.03590671;
        } else {
          result[0] += 0.0019477847;
        }
      }
    }
  }
  if ( (data[6].missing != -1) && (data[6].fvalue < (float)0.041582621634)) {
    if ( (data[8].missing != -1) && (data[8].fvalue < (float)-0.21809193492)) {
      result[1] += 0.005961512;
    } else {
      result[1] += -0.046823204;
    }
  } else {
    if ( (data[3].missing != -1) && (data[3].fvalue < (float)0.86093568802)) {
      if ( (data[8].missing != -1) && (data[8].fvalue < (float)-0.21338579059)) {
        if ( (data[7].missing != -1) && (data[7].fvalue < (float)0.93881058693)) {
          result[1] += 0.03218625;
        } else {
          result[1] += -0.01259166;
        }
      } else {
        if ( (data[5].missing != -1) && (data[5].fvalue < (float)0.07551728934)) {
          result[1] += -0.007960107;
        } else {
          result[1] += -0.03923136;
        }
      }
    } else {
      if ( (data[15].missing != -1) && (data[15].fvalue < (float)-1.388064146)) {
        result[1] += -0.0053406227;
      } else {
        result[1] += 0.043270852;
      }
    }
  }
  if ( (data[12].missing != -1) && (data[12].fvalue < (float)0.15007823706)) {
    if ( (data[5].missing != -1) && (data[5].fvalue < (float)-0.24164952338)) {
      if ( (data[5].missing != -1) && (data[5].fvalue < (float)-0.40431287885)) {
        result[2] += 0.016948806;
      } else {
        if ( (data[3].missing != -1) && (data[3].fvalue < (float)-0.31944227219)) {
          result[2] += 0.006498369;
        } else {
          result[2] += -0.04807664;
        }
      }
    } else {
      if ( (data[13].missing != -1) && (data[13].fvalue < (float)1.0310770273)) {
        if ( (data[8].missing != -1) && (data[8].fvalue < (float)-0.12082034349)) {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)-0.76338773966)) {
            result[2] += 0.0063299756;
          } else {
            if ( (data[8].missing != -1) && (data[8].fvalue < (float)-0.18396270275)) {
              result[2] += 0.047858898;
            } else {
              result[2] += 0.015082471;
            }
          }
        } else {
          result[2] += -0.0029191643;
        }
      } else {
        if ( (data[15].missing != -1) && (data[15].fvalue < (float)-0.53432995081)) {
          result[2] += -0.033597887;
        } else {
          result[2] += 0.020328166;
        }
      }
    }
  } else {
    if ( (data[8].missing != -1) && (data[8].fvalue < (float)0.0070507549681)) {
      if ( (data[13].missing != -1) && (data[13].fvalue < (float)0.0066458103247)) {
        if ( (data[5].missing != -1) && (data[5].fvalue < (float)-0.019165378064)) {
          if ( (data[5].missing != -1) && (data[5].fvalue < (float)-0.19648115337)) {
            if ( (data[8].missing != -1) && (data[8].fvalue < (float)-0.18866866827)) {
              result[2] += 0.027492383;
            } else {
              if ( (data[5].missing != -1) && (data[5].fvalue < (float)-0.42040032148)) {
                result[2] += -0.03695285;
              } else {
                result[2] += 0.017686402;
              }
            }
          } else {
            result[2] += -0.037165657;
          }
        } else {
          if ( (data[6].missing != -1) && (data[6].fvalue < (float)0.85807436705)) {
            result[2] += 0.03663747;
          } else {
            result[2] += 0.007888193;
          }
        }
      } else {
        result[2] += -0.03515264;
      }
    } else {
      result[2] += -0.044350572;
    }
  }
  if ( (data[14].missing != -1) && (data[14].fvalue < (float)-1.3899236917)) {
    result[3] += -0.028854236;
  } else {
    if ( (data[12].missing != -1) && (data[12].fvalue < (float)-0.70902597904)) {
      if ( (data[7].missing != -1) && (data[7].fvalue < (float)0.61500769854)) {
        result[3] += 0.059049692;
      } else {
        if ( (data[6].missing != -1) && (data[6].fvalue < (float)-0.091145552695)) {
          result[3] += 0.036316402;
        } else {
          if ( (data[0].missing != -1) && (data[0].fvalue < (float)-0.84336972237)) {
            result[3] += 0.021303028;
          } else {
            result[3] += -0.050492257;
          }
        }
      }
    } else {
      if ( (data[0].missing != -1) && (data[0].fvalue < (float)-0.61925303936)) {
        result[3] += -0.029398737;
      } else {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)-0.84180510044)) {
          result[3] += 0.04168531;
        } else {
          if ( (data[11].missing != -1) && (data[11].fvalue < (float)-0.2405167073)) {
            result[3] += -0.031181365;
          } else {
            if ( (data[11].missing != -1) && (data[11].fvalue < (float)-0.20037463307)) {
              result[3] += 0.031143118;
            } else {
              if ( (data[7].missing != -1) && (data[7].fvalue < (float)-1.1499211788)) {
                result[3] += 0.017921994;
              } else {
                result[3] += -0.015933877;
              }
            }
          }
        }
      }
    }
  }
  if ( (data[8].missing != -1) && (data[8].fvalue < (float)-0.21849969029)) {
    result[0] += -0.031683855;
  } else {
    if ( (data[13].missing != -1) && (data[13].fvalue < (float)1.0878903866)) {
      if ( (data[3].missing != -1) && (data[3].fvalue < (float)0.905631423)) {
        if ( (data[10].missing != -1) && (data[10].fvalue < (float)0.55544275045)) {
          if ( (data[15].missing != -1) && (data[15].fvalue < (float)0.2080026269)) {
            if ( (data[7].missing != -1) && (data[7].fvalue < (float)0.5574285388)) {
              result[0] += -0.042539462;
            } else {
              result[0] += 0.0014379716;
            }
          } else {
            if ( (data[7].missing != -1) && (data[7].fvalue < (float)-0.070737503469)) {
              if ( (data[3].missing != -1) && (data[3].fvalue < (float)-1.1763842106)) {
                result[0] += -0.02633722;
              } else {
                result[0] += 0.009001716;
              }
            } else {
              result[0] += 0.043494854;
            }
          }
        } else {
          result[0] += 0.04953033;
        }
      } else {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)0.4542081356)) {
          result[0] += -0.047092065;
        } else {
          if ( (data[6].missing != -1) && (data[6].fvalue < (float)-0.6543686986)) {
            result[0] += -0.022459341;
          } else {
            result[0] += 0.022683378;
          }
        }
      }
    } else {
      if ( (data[16].missing != -1) && (data[16].fvalue < (float)0.021485496312)) {
        result[0] += 0.059040796;
      } else {
        result[0] += 0.002070231;
      }
    }
  }
  if ( (data[0].missing != -1) && (data[0].fvalue < (float)-0.42872259021)) {
    if ( (data[5].missing != -1) && (data[5].fvalue < (float)-0.41068267822)) {
      result[1] += -0.016774636;
    } else {
      if ( (data[9].missing != -1) && (data[9].fvalue < (float)-1.267203927)) {
        if ( (data[13].missing != -1) && (data[13].fvalue < (float)1.5329512358)) {
          result[1] += 0.0471496;
        } else {
          result[1] += 0.010741442;
        }
      } else {
        if ( (data[6].missing != -1) && (data[6].fvalue < (float)0.030263820663)) {
          result[1] += -0.035722148;
        } else {
          if ( (data[7].missing != -1) && (data[7].fvalue < (float)1.1074665785)) {
            result[1] += -0.00858847;
          } else {
            if ( (data[6].missing != -1) && (data[6].fvalue < (float)0.91162836552)) {
              result[1] += 0.04916532;
            } else {
              result[1] += 0.010146203;
            }
          }
        }
      }
    }
  } else {
    if ( (data[12].missing != -1) && (data[12].fvalue < (float)0.26557740569)) {
      result[1] += -0.046017032;
    } else {
      result[1] += -0.0022740355;
    }
  }
  if ( (data[3].missing != -1) && (data[3].fvalue < (float)-1.3735567331)) {
    result[2] += 0.03095985;
  } else {
    if ( (data[12].missing != -1) && (data[12].fvalue < (float)0.98061102629)) {
      if ( (data[12].missing != -1) && (data[12].fvalue < (float)0.70414102077)) {
        if ( (data[12].missing != -1) && (data[12].fvalue < (float)0.15007823706)) {
          if ( (data[6].missing != -1) && (data[6].fvalue < (float)0.13222979009)) {
            if ( (data[8].missing != -1) && (data[8].fvalue < (float)-0.21313029528)) {
              result[2] += 0.019137919;
            } else {
              if ( (data[11].missing != -1) && (data[11].fvalue < (float)-0.2405167073)) {
                result[2] += -0.044083204;
              } else {
                result[2] += 0.00027872383;
              }
            }
          } else {
            if ( (data[14].missing != -1) && (data[14].fvalue < (float)0.41728976369)) {
              if ( (data[8].missing != -1) && (data[8].fvalue < (float)-0.18456360698)) {
                result[2] += 0.014274187;
              } else {
                result[2] += -0.03116717;
              }
            } else {
              result[2] += 0.041598573;
            }
          }
        } else {
          if ( (data[13].missing != -1) && (data[13].fvalue < (float)-0.32829239964)) {
            if ( (data[11].missing != -1) && (data[11].fvalue < (float)-0.17039236426)) {
              result[2] += -0.017866215;
            } else {
              result[2] += 0.019273587;
            }
          } else {
            result[2] += -0.048993416;
          }
        }
      } else {
        result[2] += 0.03203614;
      }
    } else {
      result[2] += -0.024709942;
    }
  }
  if ( (data[13].missing != -1) && (data[13].fvalue < (float)-1.0194351673)) {
    if ( (data[5].missing != -1) && (data[5].fvalue < (float)-0.37114152312)) {
      result[3] += -0.0073870043;
    } else {
      result[3] += -0.041905235;
    }
  } else {
    if ( (data[13].missing != -1) && (data[13].fvalue < (float)-0.069796450436)) {
      if ( (data[10].missing != -1) && (data[10].fvalue < (float)-0.62923032045)) {
        result[3] += -0.015132007;
      } else {
        if ( (data[10].missing != -1) && (data[10].fvalue < (float)-0.2608923018)) {
          result[3] += 0.05672723;
        } else {
          if ( (data[7].missing != -1) && (data[7].fvalue < (float)-0.14325109124)) {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)0.69456344843)) {
              result[3] += -0.029190956;
            } else {
              result[3] += 0.029823167;
            }
          } else {
            result[3] += 0.03856567;
          }
        }
      }
    } else {
      if ( (data[15].missing != -1) && (data[15].fvalue < (float)-0.60108989477)) {
        if ( (data[15].missing != -1) && (data[15].fvalue < (float)-0.99772632122)) {
          if ( (data[5].missing != -1) && (data[5].fvalue < (float)-0.14628712833)) {
            if ( (data[10].missing != -1) && (data[10].fvalue < (float)0.96652847528)) {
              result[3] += 0.0028627168;
            } else {
              result[3] += -0.032853793;
            }
          } else {
            result[3] += 0.022196041;
          }
        } else {
          result[3] += 0.042521905;
        }
      } else {
        if ( (data[16].missing != -1) && (data[16].fvalue < (float)0.070572808385)) {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)-0.61510449648)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)-0.96758306026)) {
              result[3] += -0.04079883;
            } else {
              result[3] += 0.02017906;
            }
          } else {
            if ( (data[6].missing != -1) && (data[6].fvalue < (float)-0.50929665565)) {
              result[3] += -0.011255315;
            } else {
              result[3] += -0.0516313;
            }
          }
        } else {
          result[3] += 0.015376746;
        }
      }
    }
  }
  if ( (data[9].missing != -1) && (data[9].fvalue < (float)-0.54771786928)) {
    if ( (data[8].missing != -1) && (data[8].fvalue < (float)-0.20207519829)) {
      result[0] += -0.03412819;
    } else {
      result[0] += 0.013415242;
    }
  } else {
    if ( (data[11].missing != -1) && (data[11].fvalue < (float)-0.25357052684)) {
      if ( (data[8].missing != -1) && (data[8].fvalue < (float)-0.19620859623)) {
        if ( (data[11].missing != -1) && (data[11].fvalue < (float)-0.27120104432)) {
          result[0] += 0.030668562;
        } else {
          result[0] += -0.007092307;
        }
      } else {
        result[0] += 0.051266737;
      }
    } else {
      if ( (data[8].missing != -1) && (data[8].fvalue < (float)-0.20588018)) {
        if ( (data[11].missing != -1) && (data[11].fvalue < (float)-0.22689589858)) {
          result[0] += 0.012703667;
        } else {
          result[0] += 0.03981602;
        }
      } else {
        if ( (data[8].missing != -1) && (data[8].fvalue < (float)-0.16417980194)) {
          if ( (data[10].missing != -1) && (data[10].fvalue < (float)-0.72088116407)) {
            result[0] += -0.04858343;
          } else {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)0.04016796127)) {
              result[0] += -0.0022513368;
            } else {
              result[0] += -0.032881144;
            }
          }
        } else {
          if ( (data[6].missing != -1) && (data[6].fvalue < (float)0.902148664)) {
            if ( (data[2].missing != -1) && (data[2].fvalue < (float)0.038101356477)) {
              result[0] += -0.029137982;
            } else {
              if ( (data[12].missing != -1) && (data[12].fvalue < (float)0.91569340229)) {
                result[0] += 0.017406404;
              } else {
                result[0] += -0.014883414;
              }
            }
          } else {
            result[0] += 0.0330885;
          }
        }
      }
    }
  }
  if ( (data[6].missing != -1) && (data[6].fvalue < (float)-0.44656607509)) {
    result[1] += -0.037739296;
  } else {
    if ( (data[8].missing != -1) && (data[8].fvalue < (float)-0.21877628565)) {
      if ( (data[6].missing != -1) && (data[6].fvalue < (float)0.23682963848)) {
        result[1] += 0.047281064;
      } else {
        result[1] += 0.007457481;
      }
    } else {
      if ( (data[12].missing != -1) && (data[12].fvalue < (float)-1.3782277107)) {
        result[1] += -0.030990098;
      } else {
        if ( (data[14].missing != -1) && (data[14].fvalue < (float)-0.60067504644)) {
          if ( (data[11].missing != -1) && (data[11].fvalue < (float)-0.24807538092)) {
            result[1] += -0.013440979;
          } else {
            result[1] += 0.045988273;
          }
        } else {
          if ( (data[5].missing != -1) && (data[5].fvalue < (float)-0.28250199556)) {
            result[1] += 0.006782549;
          } else {
            if ( (data[8].missing != -1) && (data[8].fvalue < (float)-0.19492897391)) {
              result[1] += -0.008238192;
            } else {
              result[1] += -0.04417759;
            }
          }
        }
      }
    }
  }
  if ( (data[10].missing != -1) && (data[10].fvalue < (float)-0.023404598236)) {
    if ( (data[12].missing != -1) && (data[12].fvalue < (float)-0.071005865932)) {
      if ( (data[5].missing != -1) && (data[5].fvalue < (float)-0.24164952338)) {
        result[2] += 0.0031801804;
      } else {
        result[2] += 0.042664167;
      }
    } else {
      if ( (data[8].missing != -1) && (data[8].fvalue < (float)-0.20999103785)) {
        result[2] += 0.02997413;
      } else {
        if ( (data[13].missing != -1) && (data[13].fvalue < (float)-0.19670066237)) {
          if ( (data[12].missing != -1) && (data[12].fvalue < (float)0.98061102629)) {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)-0.91771012545)) {
              result[2] += 0.04324914;
            } else {
              if ( (data[3].missing != -1) && (data[3].fvalue < (float)-0.70016682148)) {
                result[2] += -0.03698373;
              } else {
                result[2] += 0.016031476;
              }
            }
          } else {
            result[2] += -0.024610836;
          }
        } else {
          result[2] += -0.039296877;
        }
      }
    }
  } else {
    if ( (data[6].missing != -1) && (data[6].fvalue < (float)0.56409221888)) {
      if ( (data[3].missing != -1) && (data[3].fvalue < (float)0.070308201015)) {
        result[2] += -0.008757042;
      } else {
        result[2] += -0.040929306;
      }
    } else {
      if ( (data[6].missing != -1) && (data[6].fvalue < (float)0.80960536003)) {
        result[2] += 0.029424256;
      } else {
        if ( (data[16].missing != -1) && (data[16].fvalue < (float)0.030924683437)) {
          result[2] += -0.041807268;
        } else {
          if ( (data[16].missing != -1) && (data[16].fvalue < (float)0.075354173779)) {
            result[2] += 0.026404738;
          } else {
            result[2] += -0.010387774;
          }
        }
      }
    }
  }
  if ( (data[8].missing != -1) && (data[8].fvalue < (float)-0.21392957866)) {
    if ( (data[14].missing != -1) && (data[14].fvalue < (float)-1.2300678492)) {
      result[3] += 0.0035530806;
    } else {
      result[3] += -0.044618562;
    }
  } else {
    if ( (data[13].missing != -1) && (data[13].fvalue < (float)-1.3841438293)) {
      result[3] += -0.025749683;
    } else {
      if ( (data[2].missing != -1) && (data[2].fvalue < (float)0.13540814817)) {
        if ( (data[0].missing != -1) && (data[0].fvalue < (float)0.11519979686)) {
          result[3] += 0.040676348;
        } else {
          if ( (data[11].missing != -1) && (data[11].fvalue < (float)0.057182505727)) {
            result[3] += -0.0041185743;
          } else {
            result[3] += 0.030927164;
          }
        }
      } else {
        if ( (data[8].missing != -1) && (data[8].fvalue < (float)-0.12956127524)) {
          if ( (data[11].missing != -1) && (data[11].fvalue < (float)-0.26536142826)) {
            result[3] += 0.038459253;
          } else {
            if ( (data[5].missing != -1) && (data[5].fvalue < (float)-0.14007590711)) {
              if ( (data[1].missing != -1) && (data[1].fvalue < (float)-0.87291449308)) {
                result[3] += 0.0014563611;
              } else {
                result[3] += -0.045994572;
              }
            } else {
              if ( (data[9].missing != -1) && (data[9].fvalue < (float)-0.31248277426)) {
                result[3] += 0.027155265;
              } else {
                result[3] += -0.025655037;
              }
            }
          }
        } else {
          if ( (data[10].missing != -1) && (data[10].fvalue < (float)-0.2608923018)) {
            result[3] += 0.046924468;
          } else {
            if ( (data[6].missing != -1) && (data[6].fvalue < (float)-0.90472733974)) {
              result[3] += 0.023773769;
            } else {
              if ( (data[14].missing != -1) && (data[14].fvalue < (float)0.54740864038)) {
                result[3] += 0.009812533;
              } else {
                result[3] += -0.023664149;
              }
            }
          }
        }
      }
    }
  }
  if ( (data[3].missing != -1) && (data[3].fvalue < (float)-1.1763842106)) {
    result[0] += -0.031505004;
  } else {
    if ( (data[11].missing != -1) && (data[11].fvalue < (float)-0.26018977165)) {
      if ( (data[6].missing != -1) && (data[6].fvalue < (float)-0.87955719233)) {
        result[0] += 0.052744627;
      } else {
        if ( (data[8].missing != -1) && (data[8].fvalue < (float)-0.21849969029)) {
          result[0] += -0.017159594;
        } else {
          result[0] += 0.020714877;
        }
      }
    } else {
      if ( (data[6].missing != -1) && (data[6].fvalue < (float)1.1539894342)) {
        if ( (data[2].missing != -1) && (data[2].fvalue < (float)0.038101356477)) {
          if ( (data[6].missing != -1) && (data[6].fvalue < (float)-0.30391672254)) {
            result[0] += -0.043957405;
          } else {
            result[0] += -0.008045333;
          }
        } else {
          if ( (data[6].missing != -1) && (data[6].fvalue < (float)0.041582621634)) {
            if ( (data[8].missing != -1) && (data[8].fvalue < (float)-0.19827085733)) {
              result[0] += 0.05204567;
            } else {
              if ( (data[6].missing != -1) && (data[6].fvalue < (float)-1.2361969948)) {
                result[0] += -0.0207311;
              } else {
                result[0] += 0.010774023;
              }
            }
          } else {
            if ( (data[5].missing != -1) && (data[5].fvalue < (float)-0.25515717268)) {
              result[0] += -0.04729147;
            } else {
              if ( (data[5].missing != -1) && (data[5].fvalue < (float)0.07551728934)) {
                result[0] += 0.010859763;
              } else {
                result[0] += -0.024144884;
              }
            }
          }
        }
      } else {
        if ( (data[5].missing != -1) && (data[5].fvalue < (float)2.3154711723)) {
          if ( (data[7].missing != -1) && (data[7].fvalue < (float)0.10274269432)) {
            result[0] += 0.05299714;
          } else {
            result[0] += 0.023190234;
          }
        } else {
          result[0] += -0.013003285;
        }
      }
    }
  }
  if ( (data[6].missing != -1) && (data[6].fvalue < (float)-0.50929665565)) {
    result[1] += -0.036722254;
  } else {
    if ( (data[16].missing != -1) && (data[16].fvalue < (float)-0.019668526947)) {
      result[1] += 0.029039392;
    } else {
      if ( (data[11].missing != -1) && (data[11].fvalue < (float)-0.2043402344)) {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)-0.66563481092)) {
          if ( (data[5].missing != -1) && (data[5].fvalue < (float)-0.14828489721)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)-1.1374278069)) {
              result[1] += 0.03232592;
            } else {
              result[1] += -0.009175772;
            }
          } else {
            result[1] += -0.023591164;
          }
        } else {
          if ( (data[7].missing != -1) && (data[7].fvalue < (float)1.4132658243)) {
            result[1] += -0.053177822;
          } else {
            result[1] += -0.012288271;
          }
        }
      } else {
        if ( (data[14].missing != -1) && (data[14].fvalue < (float)-0.53528237343)) {
          result[1] += 0.036234867;
        } else {
          result[1] += -0.012610847;
        }
      }
    }
  }
  if ( (data[12].missing != -1) && (data[12].fvalue < (float)1.0508075953)) {
    if ( (data[5].missing != -1) && (data[5].fvalue < (float)-0.47029465437)) {
      if ( (data[0].missing != -1) && (data[0].fvalue < (float)0.089116312563)) {
        result[2] += 0.051665988;
      } else {
        result[2] += -0.0010407793;
      }
    } else {
      if ( (data[10].missing != -1) && (data[10].fvalue < (float)-0.27807244658)) {
        if ( (data[5].missing != -1) && (data[5].fvalue < (float)-0.093005672097)) {
          if ( (data[5].missing != -1) && (data[5].fvalue < (float)-0.2067707926)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)0.4173142314)) {
              if ( (data[9].missing != -1) && (data[9].fvalue < (float)-0.21651561558)) {
                result[2] += 0.027332364;
              } else {
                result[2] += -0.0175838;
              }
            } else {
              result[2] += 0.041889694;
            }
          } else {
            result[2] += -0.031790894;
          }
        } else {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)0.61251276731)) {
            if ( (data[16].missing != -1) && (data[16].fvalue < (float)0.045002944767)) {
              result[2] += 0.04868142;
            } else {
              result[2] += 0.01525746;
            }
          } else {
            result[2] += -0.007973247;
          }
        }
      } else {
        if ( (data[11].missing != -1) && (data[11].fvalue < (float)-0.26893174648)) {
          result[2] += 0.021243697;
        } else {
          if ( (data[16].missing != -1) && (data[16].fvalue < (float)0.034552905709)) {
            if ( (data[16].missing != -1) && (data[16].fvalue < (float)0.02509156242)) {
              if ( (data[13].missing != -1) && (data[13].fvalue < (float)1.0127772093)) {
                result[2] += -0.001039301;
              } else {
                result[2] += -0.045269795;
              }
            } else {
              result[2] += -0.046137225;
            }
          } else {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)0.2105280757)) {
              result[2] += 0.022193113;
            } else {
              if ( (data[13].missing != -1) && (data[13].fvalue < (float)0.84097009897)) {
                result[2] += -0.025204739;
              } else {
                result[2] += 0.0033849177;
              }
            }
          }
        }
      }
    }
  } else {
    result[2] += -0.03060923;
  }
  if ( (data[8].missing != -1) && (data[8].fvalue < (float)-0.20549508929)) {
    if ( (data[2].missing != -1) && (data[2].fvalue < (float)0.16981489956)) {
      result[3] += 0.015373088;
    } else {
      if ( (data[3].missing != -1) && (data[3].fvalue < (float)0.93932986259)) {
        if ( (data[5].missing != -1) && (data[5].fvalue < (float)-0.26631891727)) {
          result[3] += -0.020540005;
        } else {
          result[3] += -0.052232422;
        }
      } else {
        result[3] += 0.0063877883;
      }
    }
  } else {
    if ( (data[13].missing != -1) && (data[13].fvalue < (float)-1.3610372543)) {
      result[3] += -0.021658143;
    } else {
      if ( (data[2].missing != -1) && (data[2].fvalue < (float)0.005992370192)) {
        if ( (data[13].missing != -1) && (data[13].fvalue < (float)-0.43979418278)) {
          result[3] += 0.023143543;
        } else {
          result[3] += 0.044795763;
        }
      } else {
        if ( (data[6].missing != -1) && (data[6].fvalue < (float)0.64755177498)) {
          if ( (data[6].missing != -1) && (data[6].fvalue < (float)-1.2536873817)) {
            result[3] += 0.023312034;
          } else {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)0.4542081356)) {
              if ( (data[13].missing != -1) && (data[13].fvalue < (float)-0.10489436239)) {
                result[3] += 0.028772408;
              } else {
                result[3] += -0.0054968796;
              }
            } else {
              if ( (data[10].missing != -1) && (data[10].fvalue < (float)0.52504515648)) {
                result[3] += -0.03941661;
              } else {
                result[3] += 0.0047164992;
              }
            }
          }
        } else {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)-0.29118299484)) {
            result[3] += 0.047967207;
          } else {
            result[3] += 0.0061762156;
          }
        }
      }
    }
  }
  if ( (data[13].missing != -1) && (data[13].fvalue < (float)-1.4362953901)) {
    result[0] += 0.027922591;
  } else {
    if ( (data[5].missing != -1) && (data[5].fvalue < (float)-0.48074766994)) {
      if ( (data[12].missing != -1) && (data[12].fvalue < (float)0.82581669092)) {
        if ( (data[8].missing != -1) && (data[8].fvalue < (float)-0.16773824394)) {
          result[0] += 0.013432761;
        } else {
          result[0] += 0.049635425;
        }
      } else {
        result[0] += -0.013160216;
      }
    } else {
      if ( (data[8].missing != -1) && (data[8].fvalue < (float)-0.21849969029)) {
        result[0] += -0.031953093;
      } else {
        if ( (data[8].missing != -1) && (data[8].fvalue < (float)-0.21592520177)) {
          result[0] += 0.03167604;
        } else {
          if ( (data[12].missing != -1) && (data[12].fvalue < (float)-0.79302626848)) {
            if ( (data[7].missing != -1) && (data[7].fvalue < (float)1.4444446564)) {
              if ( (data[8].missing != -1) && (data[8].fvalue < (float)-0.16880448163)) {
                result[0] += -0.0471662;
              } else {
                result[0] += -0.012692965;
              }
            } else {
              result[0] += 0.00084978313;
            }
          } else {
            if ( (data[12].missing != -1) && (data[12].fvalue < (float)-0.60552960634)) {
              result[0] += 0.027491901;
            } else {
              if ( (data[13].missing != -1) && (data[13].fvalue < (float)0.2598875165)) {
                result[0] += -0.00046815752;
              } else {
                result[0] += -0.029341787;
              }
            }
          }
        }
      }
    }
  }
  if ( (data[5].missing != -1) && (data[5].fvalue < (float)-0.40100291371)) {
    if ( (data[16].missing != -1) && (data[16].fvalue < (float)-0.012806731276)) {
      result[1] += -0.013751805;
    } else {
      result[1] += -0.046583865;
    }
  } else {
    if ( (data[7].missing != -1) && (data[7].fvalue < (float)1.3343400955)) {
      if ( (data[2].missing != -1) && (data[2].fvalue < (float)0.1912804395)) {
        result[1] += -0.028842961;
      } else {
        if ( (data[5].missing != -1) && (data[5].fvalue < (float)-0.2904368639)) {
          result[1] += 0.03126478;
        } else {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)0.16162702441)) {
            if ( (data[11].missing != -1) && (data[11].fvalue < (float)-0.21446585655)) {
              if ( (data[8].missing != -1) && (data[8].fvalue < (float)-0.21442578733)) {
                result[1] += 0.0047162618;
              } else {
                result[1] += -0.02885032;
              }
            } else {
              result[1] += 0.037173953;
            }
          } else {
            result[1] += -0.033292096;
          }
        }
      }
    } else {
      if ( (data[8].missing != -1) && (data[8].fvalue < (float)-0.21855989099)) {
        result[1] += 0.0441765;
      } else {
        result[1] += 0.013986523;
      }
    }
  }
  if ( (data[10].missing != -1) && (data[10].fvalue < (float)0.95288157463)) {
    if ( (data[5].missing != -1) && (data[5].fvalue < (float)-0.058216240257)) {
      if ( (data[9].missing != -1) && (data[9].fvalue < (float)-0.56608271599)) {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)-1.1704448462)) {
          result[2] += -0.017228063;
        } else {
          if ( (data[8].missing != -1) && (data[8].fvalue < (float)-0.2076972276)) {
            result[2] += 0.042940587;
          } else {
            result[2] += 0.0005512275;
          }
        }
      } else {
        if ( (data[10].missing != -1) && (data[10].fvalue < (float)-0.083548948169)) {
          if ( (data[11].missing != -1) && (data[11].fvalue < (float)-0.25357052684)) {
            if ( (data[0].missing != -1) && (data[0].fvalue < (float)0.22215533257)) {
              result[2] += -0.049478557;
            } else {
              result[2] += -0.0021600984;
            }
          } else {
            if ( (data[0].missing != -1) && (data[0].fvalue < (float)0.2320445627)) {
              result[2] += 0.027410183;
            } else {
              if ( (data[13].missing != -1) && (data[13].fvalue < (float)-0.6913408637)) {
                result[2] += 0.0039444575;
              } else {
                result[2] += -0.03433465;
              }
            }
          }
        } else {
          result[2] += -0.038011007;
        }
      }
    } else {
      if ( (data[9].missing != -1) && (data[9].fvalue < (float)0.98351091146)) {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)-0.45234051347)) {
          result[2] += -0.014748302;
        } else {
          if ( (data[8].missing != -1) && (data[8].fvalue < (float)-0.061104930937)) {
            if ( (data[7].missing != -1) && (data[7].fvalue < (float)-0.54056620598)) {
              result[2] += 0.019477405;
            } else {
              result[2] += 0.05077946;
            }
          } else {
            result[2] += 0.002692756;
          }
        }
      } else {
        result[2] += -0.019858405;
      }
    }
  } else {
    if ( (data[8].missing != -1) && (data[8].fvalue < (float)-0.21470879018)) {
      result[2] += 0.011559579;
    } else {
      result[2] += -0.034401458;
    }
  }
  if ( (data[13].missing != -1) && (data[13].fvalue < (float)-0.98894625902)) {
    if ( (data[12].missing != -1) && (data[12].fvalue < (float)1.7285039425)) {
      result[3] += -0.032297518;
    } else {
      result[3] += -0.0016617738;
    }
  } else {
    if ( (data[2].missing != -1) && (data[2].fvalue < (float)0.13540814817)) {
      if ( (data[14].missing != -1) && (data[14].fvalue < (float)0.32732778788)) {
        if ( (data[0].missing != -1) && (data[0].fvalue < (float)-0.74722385406)) {
          result[3] += 0.00880535;
        } else {
          result[3] += 0.05142596;
        }
      } else {
        result[3] += -0.0008910305;
      }
    } else {
      if ( (data[0].missing != -1) && (data[0].fvalue < (float)-1.4190087318)) {
        result[3] += -0.031242652;
      } else {
        if ( (data[0].missing != -1) && (data[0].fvalue < (float)-1.1880815029)) {
          result[3] += 0.060163315;
        } else {
          if ( (data[8].missing != -1) && (data[8].fvalue < (float)-0.21041087806)) {
            result[3] += -0.03770736;
          } else {
            if ( (data[12].missing != -1) && (data[12].fvalue < (float)0.56249433756)) {
              if ( (data[9].missing != -1) && (data[9].fvalue < (float)-0.47115305066)) {
                result[3] += 0.019493137;
              } else {
                result[3] += -0.015258293;
              }
            } else {
              if ( (data[6].missing != -1) && (data[6].fvalue < (float)-0.81779527664)) {
                result[3] += 0.043539222;
              } else {
                result[3] += 0.0015838062;
              }
            }
          }
        }
      }
    }
  }
  if ( (data[9].missing != -1) && (data[9].fvalue < (float)1.1348803043)) {
    if ( (data[6].missing != -1) && (data[6].fvalue < (float)0.041582621634)) {
      if ( (data[2].missing != -1) && (data[2].fvalue < (float)0.073168471456)) {
        result[0] += -0.03369556;
      } else {
        if ( (data[1].missing != -1) && (data[1].fvalue < (float)0.43742504716)) {
          if ( (data[8].missing != -1) && (data[8].fvalue < (float)-0.20474259555)) {
            result[0] += 0.052227575;
          } else {
            if ( (data[1].missing != -1) && (data[1].fvalue < (float)-0.80288553238)) {
              result[0] += -0.009081211;
            } else {
              result[0] += 0.037843753;
            }
          }
        } else {
          if ( (data[8].missing != -1) && (data[8].fvalue < (float)-0.079930528998)) {
            if ( (data[16].missing != -1) && (data[16].fvalue < (float)-0.0074647036381)) {
              result[0] += -0.0032037992;
            } else {
              if ( (data[5].missing != -1) && (data[5].fvalue < (float)-0.30477491021)) {
                result[0] += 0.042941626;
              } else {
                result[0] += 0.0016649746;
              }
            }
          } else {
            result[0] += -0.025889685;
          }
        }
      }
    } else {
      if ( (data[16].missing != -1) && (data[16].fvalue < (float)0.015402733348)) {
        if ( (data[7].missing != -1) && (data[7].fvalue < (float)-0.39771494269)) {
          result[0] += -0.018876141;
        } else {
          result[0] += -0.04303725;
        }
      } else {
        if ( (data[3].missing != -1) && (data[3].fvalue < (float)-0.74387270212)) {
          result[0] += 0.03090599;
        } else {
          if ( (data[0].missing != -1) && (data[0].fvalue < (float)-0.6033783555)) {
            result[0] += 0.00788924;
          } else {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)-0.24711900949)) {
              result[0] += -0.0014635645;
            } else {
              result[0] += -0.04696728;
            }
          }
        }
      }
    }
  } else {
    if ( (data[6].missing != -1) && (data[6].fvalue < (float)-0.90994179249)) {
      result[0] += -0.009573278;
    } else {
      if ( (data[0].missing != -1) && (data[0].fvalue < (float)1.2386680841)) {
        result[0] += 0.013110387;
      } else {
        result[0] += 0.04138519;
      }
    }
  }
  if ( (data[6].missing != -1) && (data[6].fvalue < (float)0.041582621634)) {
    if ( (data[9].missing != -1) && (data[9].fvalue < (float)-1.267203927)) {
      result[1] += 0.004485238;
    } else {
      if ( (data[15].missing != -1) && (data[15].fvalue < (float)-1.0328227282)) {
        result[1] += -0.023356874;
      } else {
        result[1] += -0.047498878;
      }
    }
  } else {
    if ( (data[6].missing != -1) && (data[6].fvalue < (float)0.20386244357)) {
      result[1] += 0.05552128;
    } else {
      if ( (data[10].missing != -1) && (data[10].fvalue < (float)0.18442307413)) {
        result[1] += -0.03878283;
      } else {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)0.050838146359)) {
          if ( (data[6].missing != -1) && (data[6].fvalue < (float)0.76439845562)) {
            result[1] += -0.01778135;
          } else {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)0.85090792179)) {
              result[1] += -0.0029140087;
            } else {
              result[1] += 0.050796784;
            }
          }
        } else {
          result[1] += -0.023601364;
        }
      }
    }
  }
  if ( (data[8].missing != -1) && (data[8].fvalue < (float)-0.061104930937)) {
    if ( (data[6].missing != -1) && (data[6].fvalue < (float)1.3642252684)) {
      if ( (data[6].missing != -1) && (data[6].fvalue < (float)0.82293176651)) {
        if ( (data[5].missing != -1) && (data[5].fvalue < (float)0.0089093819261)) {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)-0.54771786928)) {
            if ( (data[13].missing != -1) && (data[13].fvalue < (float)1.0310770273)) {
              if ( (data[13].missing != -1) && (data[13].fvalue < (float)0.54438400269)) {
                result[2] += 0.023103239;
              } else {
                result[2] += 0.05492686;
              }
            } else {
              result[2] += -0.005811535;
            }
          } else {
            if ( (data[14].missing != -1) && (data[14].fvalue < (float)0.5266110301)) {
              if ( (data[3].missing != -1) && (data[3].fvalue < (float)-0.45875871181)) {
                result[2] += -0.0052025253;
              } else {
                result[2] += -0.032844298;
              }
            } else {
              if ( (data[15].missing != -1) && (data[15].fvalue < (float)0.66585612297)) {
                result[2] += 0.032176573;
              } else {
                result[2] += -0.011613477;
              }
            }
          }
        } else {
          result[2] += 0.043658815;
        }
      } else {
        if ( (data[12].missing != -1) && (data[12].fvalue < (float)-0.34677696228)) {
          result[2] += -0.04621815;
        } else {
          result[2] += 0.00024799496;
        }
      }
    } else {
      if ( (data[3].missing != -1) && (data[3].fvalue < (float)0.72411340475)) {
        result[2] += 0.045310613;
      } else {
        result[2] += -0.0012417728;
      }
    }
  } else {
    if ( (data[6].missing != -1) && (data[6].fvalue < (float)-0.34593945742)) {
      result[2] += -0.037764873;
    } else {
      result[2] += -0.0012438635;
    }
  }
  if ( (data[13].missing != -1) && (data[13].fvalue < (float)-0.13281053305)) {
    if ( (data[15].missing != -1) && (data[15].fvalue < (float)0.20022596419)) {
      result[3] += 0.04754875;
    } else {
      if ( (data[12].missing != -1) && (data[12].fvalue < (float)0.32130610943)) {
        result[3] += -0.026705045;
      } else {
        if ( (data[1].missing != -1) && (data[1].fvalue < (float)0.058750249445)) {
          result[3] += -0.018031683;
        } else {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)0.1049733609)) {
            if ( (data[10].missing != -1) && (data[10].fvalue < (float)-0.72088116407)) {
              result[3] += 0.010134052;
            } else {
              result[3] += 0.067478165;
            }
          } else {
            result[3] += -0.0049176887;
          }
        }
      }
    }
  } else {
    if ( (data[11].missing != -1) && (data[11].fvalue < (float)-0.20037463307)) {
      if ( (data[8].missing != -1) && (data[8].fvalue < (float)-0.20063112676)) {
        if ( (data[0].missing != -1) && (data[0].fvalue < (float)-1.1880815029)) {
          result[3] += 0.015305081;
        } else {
          if ( (data[11].missing != -1) && (data[11].fvalue < (float)-0.26094642282)) {
            result[3] += 0.0024913664;
          } else {
            result[3] += -0.045654483;
          }
        }
      } else {
        if ( (data[5].missing != -1) && (data[5].fvalue < (float)-0.14628712833)) {
          result[3] += 0.001503743;
        } else {
          result[3] += 0.047578637;
        }
      }
    } else {
      if ( (data[6].missing != -1) && (data[6].fvalue < (float)-0.90472733974)) {
        result[3] += 0.020083232;
      } else {
        if ( (data[15].missing != -1) && (data[15].fvalue < (float)-0.58949971199)) {
          result[3] += 5.3481537e-05;
        } else {
          if ( (data[10].missing != -1) && (data[10].fvalue < (float)0.53875249624)) {
            result[3] += -0.026334895;
          } else {
            result[3] += -0.05866927;
          }
        }
      }
    }
  }
  if ( (data[2].missing != -1) && (data[2].fvalue < (float)-0.069487594068)) {
    if ( (data[12].missing != -1) && (data[12].fvalue < (float)0.73466044664)) {
      result[0] += -0.037205886;
    } else {
      result[0] += 0.014116387;
    }
  } else {
    if ( (data[6].missing != -1) && (data[6].fvalue < (float)0.041582621634)) {
      if ( (data[6].missing != -1) && (data[6].fvalue < (float)-0.12222632766)) {
        if ( (data[7].missing != -1) && (data[7].fvalue < (float)0.11927641928)) {
          if ( (data[12].missing != -1) && (data[12].fvalue < (float)0.47219729424)) {
            if ( (data[10].missing != -1) && (data[10].fvalue < (float)-0.23650088906)) {
              if ( (data[8].missing != -1) && (data[8].fvalue < (float)-0.14850510657)) {
                result[0] += -3.838921e-05;
              } else {
                result[0] += 0.031155197;
              }
            } else {
              result[0] += 0.045290146;
            }
          } else {
            if ( (data[11].missing != -1) && (data[11].fvalue < (float)-0.16485464573)) {
              result[0] += 0.025342226;
            } else {
              if ( (data[6].missing != -1) && (data[6].fvalue < (float)-0.7528821826)) {
                result[0] += -0.02371702;
              } else {
                result[0] += 0.0077548246;
              }
            }
          }
        } else {
          if ( (data[6].missing != -1) && (data[6].fvalue < (float)-0.77784711123)) {
            result[0] += -0.00084063516;
          } else {
            result[0] += -0.04251907;
          }
        }
      } else {
        result[0] += 0.04688647;
      }
    } else {
      if ( (data[5].missing != -1) && (data[5].fvalue < (float)-0.23170810938)) {
        if ( (data[5].missing != -1) && (data[5].fvalue < (float)-0.38476032019)) {
          result[0] += -0.007961345;
        } else {
          result[0] += -0.04551918;
        }
      } else {
        if ( (data[5].missing != -1) && (data[5].fvalue < (float)-0.096374280751)) {
          result[0] += 0.043392625;
        } else {
          if ( (data[6].missing != -1) && (data[6].fvalue < (float)0.91162836552)) {
            if ( (data[6].missing != -1) && (data[6].fvalue < (float)0.30593377352)) {
              result[0] += 0.0062190555;
            } else {
              result[0] += -0.045132723;
            }
          } else {
            if ( (data[16].missing != -1) && (data[16].fvalue < (float)0.046086959541)) {
              result[0] += 0.037068672;
            } else {
              if ( (data[5].missing != -1) && (data[5].fvalue < (float)1.4188649654)) {
                result[0] += 0.017936273;
              } else {
                result[0] += -0.029509252;
              }
            }
          }
        }
      }
    }
  }
  if ( (data[6].missing != -1) && (data[6].fvalue < (float)-0.44656607509)) {
    result[1] += -0.03918648;
  } else {
    if ( (data[5].missing != -1) && (data[5].fvalue < (float)-0.40100291371)) {
      result[1] += -0.02481628;
    } else {
      if ( (data[16].missing != -1) && (data[16].fvalue < (float)-0.0085348961875)) {
        result[1] += 0.038147386;
      } else {
        if ( (data[11].missing != -1) && (data[11].fvalue < (float)-0.20037463307)) {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)-0.59347981215)) {
            if ( (data[6].missing != -1) && (data[6].fvalue < (float)0.78264755011)) {
              result[1] += -0.010928322;
            } else {
              result[1] += 0.025349448;
            }
          } else {
            result[1] += -0.029923497;
          }
        } else {
          if ( (data[14].missing != -1) && (data[14].fvalue < (float)-0.60067504644)) {
            result[1] += 0.056444563;
          } else {
            result[1] += -0.003594615;
          }
        }
      }
    }
  }
  if ( (data[8].missing != -1) && (data[8].fvalue < (float)0.036357682198)) {
    if ( (data[15].missing != -1) && (data[15].fvalue < (float)-1.4866051674)) {
      result[2] += -0.022324387;
    } else {
      if ( (data[3].missing != -1) && (data[3].fvalue < (float)-0.59935802221)) {
        if ( (data[10].missing != -1) && (data[10].fvalue < (float)-0.89206194878)) {
          if ( (data[0].missing != -1) && (data[0].fvalue < (float)0.59930121899)) {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)-1.2463940382)) {
              result[2] += -0.0018574989;
            } else {
              result[2] += 0.037322424;
            }
          } else {
            result[2] += -0.008350703;
          }
        } else {
          if ( (data[7].missing != -1) && (data[7].fvalue < (float)-0.32512119412)) {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)-0.82810521126)) {
              result[2] += -0.059039123;
            } else {
              result[2] += -0.020724759;
            }
          } else {
            if ( (data[11].missing != -1) && (data[11].fvalue < (float)-0.24906308949)) {
              result[2] += -0.018469712;
            } else {
              result[2] += 0.023613818;
            }
          }
        }
      } else {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)0.91523742676)) {
          if ( (data[0].missing != -1) && (data[0].fvalue < (float)0.64019787312)) {
            if ( (data[12].missing != -1) && (data[12].fvalue < (float)-1.0734789371)) {
              result[2] += 0.036869295;
            } else {
              if ( (data[15].missing != -1) && (data[15].fvalue < (float)-0.58949971199)) {
                result[2] += -0.02416688;
              } else {
                result[2] += 0.010426248;
              }
            }
          } else {
            result[2] += 0.038707685;
          }
        } else {
          result[2] += -0.017127404;
        }
      }
    }
  } else {
    result[2] += -0.024205888;
  }
  if ( (data[13].missing != -1) && (data[13].fvalue < (float)-1.052489996)) {
    if ( (data[6].missing != -1) && (data[6].fvalue < (float)-0.44656607509)) {
      result[3] += -0.005899493;
    } else {
      result[3] += -0.040732082;
    }
  } else {
    if ( (data[13].missing != -1) && (data[13].fvalue < (float)-0.069796450436)) {
      if ( (data[10].missing != -1) && (data[10].fvalue < (float)-0.62923032045)) {
        result[3] += -0.0139255915;
      } else {
        if ( (data[11].missing != -1) && (data[11].fvalue < (float)0.025153735653)) {
          if ( (data[16].missing != -1) && (data[16].fvalue < (float)0.026835277677)) {
            result[3] += 0.053582657;
          } else {
            result[3] += 0.009252444;
          }
        } else {
          if ( (data[5].missing != -1) && (data[5].fvalue < (float)-0.050763271749)) {
            result[3] += -0.026570132;
          } else {
            result[3] += 0.03864555;
          }
        }
      }
    } else {
      if ( (data[5].missing != -1) && (data[5].fvalue < (float)-0.1428437233)) {
        if ( (data[12].missing != -1) && (data[12].fvalue < (float)-0.31976079941)) {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)-0.49538713694)) {
            if ( (data[14].missing != -1) && (data[14].fvalue < (float)-0.45737683773)) {
              result[3] += -0.024826841;
            } else {
              result[3] += -0.059608143;
            }
          } else {
            result[3] += 0.0048271953;
          }
        } else {
          result[3] += 0.011625594;
        }
      } else {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)-0.94920670986)) {
          result[3] += 0.04492892;
        } else {
          if ( (data[16].missing != -1) && (data[16].fvalue < (float)0.0526355654)) {
            if ( (data[5].missing != -1) && (data[5].fvalue < (float)0.17157076299)) {
              result[3] += -0.0071324296;
            } else {
              result[3] += -0.039628655;
            }
          } else {
            if ( (data[13].missing != -1) && (data[13].fvalue < (float)0.98732662201)) {
              result[3] += 0.041493528;
            } else {
              result[3] += -0.009044441;
            }
          }
        }
      }
    }
  }
  if ( (data[6].missing != -1) && (data[6].fvalue < (float)0.0025505779777)) {
    if ( (data[6].missing != -1) && (data[6].fvalue < (float)-0.12222632766)) {
      if ( (data[6].missing != -1) && (data[6].fvalue < (float)-0.30391672254)) {
        if ( (data[12].missing != -1) && (data[12].fvalue < (float)-0.71274340153)) {
          result[0] += -0.022122668;
        } else {
          if ( (data[2].missing != -1) && (data[2].fvalue < (float)0.073168471456)) {
            result[0] += -0.020522509;
          } else {
            if ( (data[12].missing != -1) && (data[12].fvalue < (float)0.91569340229)) {
              if ( (data[5].missing != -1) && (data[5].fvalue < (float)-0.16096504033)) {
                result[0] += 0.035917457;
              } else {
                result[0] += 0.0027715934;
              }
            } else {
              if ( (data[12].missing != -1) && (data[12].fvalue < (float)1.5374684334)) {
                result[0] += -0.018773815;
              } else {
                result[0] += 0.020687228;
              }
            }
          }
        }
      } else {
        result[0] += -0.026466304;
      }
    } else {
      result[0] += 0.04714836;
    }
  } else {
    if ( (data[6].missing != -1) && (data[6].fvalue < (float)0.91162836552)) {
      if ( (data[16].missing != -1) && (data[16].fvalue < (float)0.039527323097)) {
        if ( (data[3].missing != -1) && (data[3].fvalue < (float)-0.66428154707)) {
          result[0] += -0.0041078855;
        } else {
          if ( (data[8].missing != -1) && (data[8].fvalue < (float)-0.21416629851)) {
            result[0] += -0.011329711;
          } else {
            if ( (data[16].missing != -1) && (data[16].fvalue < (float)0.018113873899)) {
              result[0] += -0.026654115;
            } else {
              result[0] += -0.05504292;
            }
          }
        }
      } else {
        if ( (data[5].missing != -1) && (data[5].fvalue < (float)-0.027797406539)) {
          result[0] += 0.02733372;
        } else {
          result[0] += -0.022555294;
        }
      }
    } else {
      if ( (data[5].missing != -1) && (data[5].fvalue < (float)1.667165041)) {
        if ( (data[8].missing != -1) && (data[8].fvalue < (float)-0.20368315279)) {
          result[0] += -0.0052332687;
        } else {
          result[0] += 0.045885302;
        }
      } else {
        result[0] += -0.016776644;
      }
    }
  }
  if ( (data[5].missing != -1) && (data[5].fvalue < (float)-0.40100291371)) {
    if ( (data[16].missing != -1) && (data[16].fvalue < (float)-0.010007405654)) {
      result[1] += -0.0030168986;
    } else {
      result[1] += -0.05317483;
    }
  } else {
    if ( (data[0].missing != -1) && (data[0].fvalue < (float)-1.4427217245)) {
      result[1] += 0.036527604;
    } else {
      if ( (data[16].missing != -1) && (data[16].fvalue < (float)0.067746691406)) {
        if ( (data[5].missing != -1) && (data[5].fvalue < (float)-0.25318676233)) {
          result[1] += 0.0149228275;
        } else {
          if ( (data[11].missing != -1) && (data[11].fvalue < (float)-0.24779932201)) {
            result[1] += -0.05123487;
          } else {
            if ( (data[15].missing != -1) && (data[15].fvalue < (float)-0.50750309229)) {
              result[1] += 0.013988125;
            } else {
              result[1] += -0.034401625;
            }
          }
        }
      } else {
        result[1] += 0.02422502;
      }
    }
  }
  if ( (data[8].missing != -1) && (data[8].fvalue < (float)-0.088057100773)) {
    if ( (data[10].missing != -1) && (data[10].fvalue < (float)-1.3279898167)) {
      result[2] += 0.035736907;
    } else {
      if ( (data[12].missing != -1) && (data[12].fvalue < (float)0.55062735081)) {
        if ( (data[13].missing != -1) && (data[13].fvalue < (float)1.0310770273)) {
          if ( (data[16].missing != -1) && (data[16].fvalue < (float)0.0089819151908)) {
            if ( (data[11].missing != -1) && (data[11].fvalue < (float)-0.26135647297)) {
              result[2] += 0.04474551;
            } else {
              if ( (data[11].missing != -1) && (data[11].fvalue < (float)-0.2043402344)) {
                result[2] += -0.008574336;
              } else {
                result[2] += 0.03679078;
              }
            }
          } else {
            if ( (data[13].missing != -1) && (data[13].fvalue < (float)0.48812502623)) {
              if ( (data[12].missing != -1) && (data[12].fvalue < (float)0.18911541998)) {
                result[2] += -0.019311678;
              } else {
                result[2] += 0.010808254;
              }
            } else {
              result[2] += 0.017292101;
            }
          }
        } else {
          if ( (data[15].missing != -1) && (data[15].fvalue < (float)-0.47399246693)) {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)0.015094771981)) {
              result[2] += 0.028257681;
            } else {
              result[2] += -0.017787574;
            }
          } else {
            result[2] += -0.029325163;
          }
        }
      } else {
        if ( (data[13].missing != -1) && (data[13].fvalue < (float)-1.2693741322)) {
          result[2] += 0.0013920015;
        } else {
          result[2] += -0.03462135;
        }
      }
    }
  } else {
    if ( (data[11].missing != -1) && (data[11].fvalue < (float)-0.027360389009)) {
      result[2] += -0.042850878;
    } else {
      if ( (data[7].missing != -1) && (data[7].fvalue < (float)-0.46015933156)) {
        result[2] += -0.018796263;
      } else {
        result[2] += 0.015724063;
      }
    }
  }
  if ( (data[1].missing != -1) && (data[1].fvalue < (float)-2.5561361313)) {
    result[3] += -0.028724143;
  } else {
    if ( (data[0].missing != -1) && (data[0].fvalue < (float)-1.2417032719)) {
      if ( (data[0].missing != -1) && (data[0].fvalue < (float)-1.4317775965)) {
        result[3] += -0.004644995;
      } else {
        result[3] += 0.051954705;
      }
    } else {
      if ( (data[0].missing != -1) && (data[0].fvalue < (float)-0.71834218502)) {
        if ( (data[6].missing != -1) && (data[6].fvalue < (float)0.030263820663)) {
          result[3] += 0.00795609;
        } else {
          result[3] += -0.034768116;
        }
      } else {
        if ( (data[3].missing != -1) && (data[3].fvalue < (float)-0.28086575866)) {
          if ( (data[8].missing != -1) && (data[8].fvalue < (float)-0.12956127524)) {
            if ( (data[13].missing != -1) && (data[13].fvalue < (float)-0.19670066237)) {
              result[3] += -0.04493524;
            } else {
              result[3] += 0.0009717106;
            }
          } else {
            result[3] += 0.019620193;
          }
        } else {
          if ( (data[8].missing != -1) && (data[8].fvalue < (float)0.12710408866)) {
            if ( (data[12].missing != -1) && (data[12].fvalue < (float)0.054176654667)) {
              if ( (data[11].missing != -1) && (data[11].fvalue < (float)-0.20037463307)) {
                result[3] += 0.037251815;
              } else {
                result[3] += -0.0050661163;
              }
            } else {
              if ( (data[5].missing != -1) && (data[5].fvalue < (float)-0.18760381639)) {
                result[3] += 0.026495934;
              } else {
                result[3] += 0.05429817;
              }
            }
          } else {
            if ( (data[11].missing != -1) && (data[11].fvalue < (float)1.4288539886)) {
              if ( (data[6].missing != -1) && (data[6].fvalue < (float)-0.4729436636)) {
                result[3] += -0.009962294;
              } else {
                result[3] += -0.039705914;
              }
            } else {
              result[3] += 0.019096045;
            }
          }
        }
      }
    }
  }
  if ( (data[11].missing != -1) && (data[11].fvalue < (float)-0.25357052684)) {
    if ( (data[8].missing != -1) && (data[8].fvalue < (float)-0.21625265479)) {
      if ( (data[16].missing != -1) && (data[16].fvalue < (float)-0.0053107207641)) {
        result[0] += -0.037064318;
      } else {
        result[0] += 0.016254151;
      }
    } else {
      if ( (data[3].missing != -1) && (data[3].fvalue < (float)-0.55354166031)) {
        result[0] += 0.01202914;
      } else {
        result[0] += 0.049249843;
      }
    }
  } else {
    if ( (data[13].missing != -1) && (data[13].fvalue < (float)0.98732662201)) {
      if ( (data[5].missing != -1) && (data[5].fvalue < (float)1.667165041)) {
        if ( (data[6].missing != -1) && (data[6].fvalue < (float)1.1374956369)) {
          if ( (data[5].missing != -1) && (data[5].fvalue < (float)0.07551728934)) {
            if ( (data[11].missing != -1) && (data[11].fvalue < (float)0.35976424813)) {
              if ( (data[8].missing != -1) && (data[8].fvalue < (float)-0.19827085733)) {
                result[0] += 0.026116675;
              } else {
                result[0] += -0.013940373;
              }
            } else {
              result[0] += 0.029641718;
            }
          } else {
            if ( (data[0].missing != -1) && (data[0].fvalue < (float)0.91816103458)) {
              result[0] += -0.04616357;
            } else {
              result[0] += -0.008617301;
            }
          }
        } else {
          result[0] += 0.03395101;
        }
      } else {
        result[0] += -0.031270128;
      }
    } else {
      if ( (data[8].missing != -1) && (data[8].fvalue < (float)-0.18337799609)) {
        result[0] += 0.001050442;
      } else {
        result[0] += 0.04311476;
      }
    }
  }
  if ( (data[8].missing != -1) && (data[8].fvalue < (float)-0.21877628565)) {
    if ( (data[11].missing != -1) && (data[11].fvalue < (float)-0.27167388797)) {
      result[1] += -0.012185751;
    } else {
      result[1] += 0.048645537;
    }
  } else {
    if ( (data[3].missing != -1) && (data[3].fvalue < (float)1.5576634407)) {
      if ( (data[9].missing != -1) && (data[9].fvalue < (float)-1.2174545527)) {
        result[1] += 0.006143156;
      } else {
        if ( (data[10].missing != -1) && (data[10].fvalue < (float)0.74029392004)) {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)0.19738391042)) {
            if ( (data[16].missing != -1) && (data[16].fvalue < (float)0.0093680135906)) {
              result[1] += -0.017612977;
            } else {
              result[1] += -0.04382753;
            }
          } else {
            result[1] += 0.007432257;
          }
        } else {
          result[1] += -0.049800247;
        }
      }
    } else {
      result[1] += 0.014338019;
    }
  }
  if ( (data[8].missing != -1) && (data[8].fvalue < (float)0.0070507549681)) {
    if ( (data[12].missing != -1) && (data[12].fvalue < (float)0.68646353483)) {
      if ( (data[7].missing != -1) && (data[7].fvalue < (float)-0.48104423285)) {
        if ( (data[11].missing != -1) && (data[11].fvalue < (float)-0.17039236426)) {
          result[2] += -0.04344548;
        } else {
          result[2] += 0.0064343885;
        }
      } else {
        if ( (data[13].missing != -1) && (data[13].fvalue < (float)1.0310770273)) {
          if ( (data[11].missing != -1) && (data[11].fvalue < (float)-0.11270186305)) {
            if ( (data[8].missing != -1) && (data[8].fvalue < (float)-0.18830893934)) {
              if ( (data[2].missing != -1) && (data[2].fvalue < (float)0.16981489956)) {
                result[2] += -0.013962099;
              } else {
                result[2] += 0.020453602;
              }
            } else {
              if ( (data[6].missing != -1) && (data[6].fvalue < (float)0.25082111359)) {
                result[2] += -0.001593478;
              } else {
                result[2] += -0.036457274;
              }
            }
          } else {
            result[2] += 0.032554477;
          }
        } else {
          if ( (data[13].missing != -1) && (data[13].fvalue < (float)1.3775569201)) {
            result[2] += -0.03799963;
          } else {
            if ( (data[6].missing != -1) && (data[6].fvalue < (float)0.66552180052)) {
              result[2] += -0.00996618;
            } else {
              result[2] += 0.024291437;
            }
          }
        }
      }
    } else {
      if ( (data[12].missing != -1) && (data[12].fvalue < (float)0.99250650406)) {
        result[2] += 0.04741731;
      } else {
        result[2] += -0.004620756;
      }
    }
  } else {
    if ( (data[12].missing != -1) && (data[12].fvalue < (float)0.28496366739)) {
      result[2] += -0.0044927276;
    } else {
      result[2] += -0.037003167;
    }
  }
  if ( (data[12].missing != -1) && (data[12].fvalue < (float)1.8211945295)) {
    if ( (data[13].missing != -1) && (data[13].fvalue < (float)-1.052489996)) {
      result[3] += -0.025966004;
    } else {
      if ( (data[16].missing != -1) && (data[16].fvalue < (float)0.053103368729)) {
        if ( (data[16].missing != -1) && (data[16].fvalue < (float)0.033533539623)) {
          if ( (data[0].missing != -1) && (data[0].fvalue < (float)0.69700944424)) {
            if ( (data[16].missing != -1) && (data[16].fvalue < (float)0.026114549488)) {
              if ( (data[5].missing != -1) && (data[5].fvalue < (float)-0.12604095042)) {
                result[3] += 0.01153485;
              } else {
                result[3] += -0.02900204;
              }
            } else {
              result[3] += 0.030584654;
            }
          } else {
            result[3] += -0.022547912;
          }
        } else {
          if ( (data[0].missing != -1) && (data[0].fvalue < (float)-0.27494439483)) {
            result[3] += -0.03601579;
          } else {
            result[3] += -0.0129178865;
          }
        }
      } else {
        if ( (data[11].missing != -1) && (data[11].fvalue < (float)-0.033189307898)) {
          if ( (data[11].missing != -1) && (data[11].fvalue < (float)-0.21764399111)) {
            result[3] += 0.021219391;
          } else {
            result[3] += -0.032076072;
          }
        } else {
          result[3] += 0.03728901;
        }
      }
    }
  } else {
    result[3] += 0.026243377;
  }
  if ( (data[1].missing != -1) && (data[1].fvalue < (float)-2.6626296043)) {
    result[0] += 0.031147668;
  } else {
    if ( (data[9].missing != -1) && (data[9].fvalue < (float)0.48028355837)) {
      if ( (data[3].missing != -1) && (data[3].fvalue < (float)0.93932986259)) {
        if ( (data[10].missing != -1) && (data[10].fvalue < (float)0.53875249624)) {
          if ( (data[6].missing != -1) && (data[6].fvalue < (float)-0.4936747849)) {
            if ( (data[11].missing != -1) && (data[11].fvalue < (float)-0.2294845134)) {
              result[0] += 0.033102848;
            } else {
              result[0] += -0.009203103;
            }
          } else {
            if ( (data[0].missing != -1) && (data[0].fvalue < (float)0.46719673276)) {
              if ( (data[10].missing != -1) && (data[10].fvalue < (float)-0.044407144189)) {
                result[0] += -0.044443298;
              } else {
                result[0] += -0.018498586;
              }
            } else {
              result[0] += -0.007058782;
            }
          }
        } else {
          if ( (data[11].missing != -1) && (data[11].fvalue < (float)-0.22993421555)) {
            result[0] += -0.009286459;
          } else {
            result[0] += 0.040729728;
          }
        }
      } else {
        result[0] += -0.04329471;
      }
    } else {
      if ( (data[6].missing != -1) && (data[6].fvalue < (float)0.91162836552)) {
        if ( (data[5].missing != -1) && (data[5].fvalue < (float)0.07551728934)) {
          if ( (data[13].missing != -1) && (data[13].fvalue < (float)-0.75550806522)) {
            if ( (data[6].missing != -1) && (data[6].fvalue < (float)0.10018060356)) {
              if ( (data[5].missing != -1) && (data[5].fvalue < (float)-0.45687660575)) {
                result[0] += 0.0069811703;
              } else {
                result[0] += -0.030248124;
              }
            } else {
              result[0] += 0.024714706;
            }
          } else {
            if ( (data[10].missing != -1) && (data[10].fvalue < (float)0.17849488556)) {
              result[0] += 0.03648337;
            } else {
              result[0] += 0.011621488;
            }
          }
        } else {
          if ( (data[6].missing != -1) && (data[6].fvalue < (float)-0.16192410886)) {
            result[0] += -0.00013875854;
          } else {
            result[0] += -0.03604486;
          }
        }
      } else {
        result[0] += 0.032210257;
      }
    }
  }
  if ( (data[10].missing != -1) && (data[10].fvalue < (float)-0.044407144189)) {
    if ( (data[10].missing != -1) && (data[10].fvalue < (float)-0.40548467636)) {
      result[1] += -0.044068184;
    } else {
      result[1] += -0.01949714;
    }
  } else {
    if ( (data[6].missing != -1) && (data[6].fvalue < (float)0.041582621634)) {
      if ( (data[0].missing != -1) && (data[0].fvalue < (float)-1.3415445089)) {
        result[1] += -0.002491256;
      } else {
        result[1] += -0.04566021;
      }
    } else {
      if ( (data[6].missing != -1) && (data[6].fvalue < (float)0.25082111359)) {
        result[1] += 0.034862205;
      } else {
        if ( (data[6].missing != -1) && (data[6].fvalue < (float)0.71585971117)) {
          result[1] += -0.022625929;
        } else {
          if ( (data[8].missing != -1) && (data[8].fvalue < (float)-0.21625265479)) {
            result[1] += 0.039571863;
          } else {
            if ( (data[10].missing != -1) && (data[10].fvalue < (float)1.1075388193)) {
              result[1] += -0.01844175;
            } else {
              result[1] += 0.01476433;
            }
          }
        }
      }
    }
  }
  if ( (data[9].missing != -1) && (data[9].fvalue < (float)-0.53308588266)) {
    if ( (data[6].missing != -1) && (data[6].fvalue < (float)0.65618908405)) {
      if ( (data[13].missing != -1) && (data[13].fvalue < (float)1.0310770273)) {
        if ( (data[7].missing != -1) && (data[7].fvalue < (float)0.22667650878)) {
          result[2] += -0.00076513644;
        } else {
          result[2] += 0.04322779;
        }
      } else {
        result[2] += -0.023326227;
      }
    } else {
      result[2] += 0.03401545;
    }
  } else {
    if ( (data[5].missing != -1) && (data[5].fvalue < (float)-0.0057680280879)) {
      if ( (data[9].missing != -1) && (data[9].fvalue < (float)0.6549052)) {
        if ( (data[7].missing != -1) && (data[7].fvalue < (float)-0.20919252932)) {
          if ( (data[7].missing != -1) && (data[7].fvalue < (float)-0.43031197786)) {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)-0.89701044559)) {
              result[2] += 0.00035864956;
            } else {
              result[2] += -0.037193846;
            }
          } else {
            result[2] += 0.031470023;
          }
        } else {
          if ( (data[11].missing != -1) && (data[11].fvalue < (float)-0.22192882001)) {
            result[2] += -0.04638725;
          } else {
            result[2] += -0.012501352;
          }
        }
      } else {
        if ( (data[3].missing != -1) && (data[3].fvalue < (float)-0.21781335771)) {
          result[2] += 0.038128864;
        } else {
          result[2] += -0.018775767;
        }
      }
    } else {
      if ( (data[6].missing != -1) && (data[6].fvalue < (float)0.80960536003)) {
        if ( (data[3].missing != -1) && (data[3].fvalue < (float)-0.063802108169)) {
          result[2] += 0.045072354;
        } else {
          result[2] += 0.004503542;
        }
      } else {
        if ( (data[16].missing != -1) && (data[16].fvalue < (float)0.031900454313)) {
          result[2] += -0.030125678;
        } else {
          if ( (data[7].missing != -1) && (data[7].fvalue < (float)-0.52645915747)) {
            result[2] += -0.017102232;
          } else {
            if ( (data[11].missing != -1) && (data[11].fvalue < (float)-0.14802908897)) {
              result[2] += 0.033000138;
            } else {
              result[2] += -0.00442681;
            }
          }
        }
      }
    }
  }
  if ( (data[2].missing != -1) && (data[2].fvalue < (float)-0.27207258344)) {
    result[3] += 0.024406241;
  } else {
    if ( (data[8].missing != -1) && (data[8].fvalue < (float)-0.20549508929)) {
      if ( (data[11].missing != -1) && (data[11].fvalue < (float)-0.26094642282)) {
        if ( (data[5].missing != -1) && (data[5].fvalue < (float)-0.29404851794)) {
          result[3] += -0.020745115;
        } else {
          result[3] += 0.01634643;
        }
      } else {
        result[3] += -0.039840486;
      }
    } else {
      if ( (data[16].missing != -1) && (data[16].fvalue < (float)0.044379305094)) {
        if ( (data[3].missing != -1) && (data[3].fvalue < (float)-0.14372131228)) {
          if ( (data[10].missing != -1) && (data[10].fvalue < (float)-0.39829662442)) {
            result[3] += -0.014120075;
          } else {
            result[3] += 0.041991957;
          }
        } else {
          if ( (data[12].missing != -1) && (data[12].fvalue < (float)-0.46165171266)) {
            if ( (data[13].missing != -1) && (data[13].fvalue < (float)0.41300338507)) {
              result[3] += 0.0180885;
            } else {
              result[3] += -0.013835192;
            }
          } else {
            if ( (data[8].missing != -1) && (data[8].fvalue < (float)0.53447854519)) {
              result[3] += -0.042856243;
            } else {
              result[3] += -0.0043673543;
            }
          }
        }
      } else {
        if ( (data[8].missing != -1) && (data[8].fvalue < (float)0.023287266493)) {
          if ( (data[8].missing != -1) && (data[8].fvalue < (float)-0.17579722404)) {
            result[3] += 0.029032344;
          } else {
            result[3] += -0.0263262;
          }
        } else {
          result[3] += 0.044994973;
        }
      }
    }
  }
  if ( (data[3].missing != -1) && (data[3].fvalue < (float)1.1343532801)) {
    if ( (data[16].missing != -1) && (data[16].fvalue < (float)0.065039761364)) {
      if ( (data[9].missing != -1) && (data[9].fvalue < (float)-0.54771786928)) {
        if ( (data[5].missing != -1) && (data[5].fvalue < (float)-0.33703631163)) {
          result[0] += 0.00779368;
        } else {
          result[0] += -0.04659837;
        }
      } else {
        if ( (data[11].missing != -1) && (data[11].fvalue < (float)-0.26674380898)) {
          result[0] += 0.0342456;
        } else {
          if ( (data[16].missing != -1) && (data[16].fvalue < (float)-0.030906429514)) {
            result[0] += -0.024719803;
          } else {
            if ( (data[1].missing != -1) && (data[1].fvalue < (float)0.43742504716)) {
              if ( (data[7].missing != -1) && (data[7].fvalue < (float)-0.58466631174)) {
                result[0] += 0.04659755;
              } else {
                result[0] += 0.0036728065;
              }
            } else {
              if ( (data[5].missing != -1) && (data[5].fvalue < (float)-0.32934063673)) {
                result[0] += -0.020932017;
              } else {
                result[0] += 0.009318559;
              }
            }
          }
        }
      }
    } else {
      if ( (data[11].missing != -1) && (data[11].fvalue < (float)-0.15529032052)) {
        result[0] += 0.03735289;
      } else {
        result[0] += 0.0055567157;
      }
    }
  } else {
    if ( (data[7].missing != -1) && (data[7].fvalue < (float)-0.18876649439)) {
      result[0] += -0.005436244;
    } else {
      result[0] += -0.034268733;
    }
  }
  if ( (data[8].missing != -1) && (data[8].fvalue < (float)-0.21892316639)) {
    if ( (data[5].missing != -1) && (data[5].fvalue < (float)-0.38821652532)) {
      result[1] += -0.00851725;
    } else {
      result[1] += 0.043283474;
    }
  } else {
    if ( (data[14].missing != -1) && (data[14].fvalue < (float)-0.53528237343)) {
      if ( (data[11].missing != -1) && (data[11].fvalue < (float)-0.2405167073)) {
        if ( (data[6].missing != -1) && (data[6].fvalue < (float)0.29336377978)) {
          result[1] += -0.040149573;
        } else {
          result[1] += -3.5227673e-05;
        }
      } else {
        if ( (data[12].missing != -1) && (data[12].fvalue < (float)-1.3974633217)) {
          result[1] += -0.0047610365;
        } else {
          result[1] += 0.037432577;
        }
      }
    } else {
      if ( (data[9].missing != -1) && (data[9].fvalue < (float)-1.267203927)) {
        result[1] += 0.0027268524;
      } else {
        if ( (data[14].missing != -1) && (data[14].fvalue < (float)0.56459403038)) {
          result[1] += -0.051152643;
        } else {
          result[1] += -0.025659272;
        }
      }
    }
  }
  if ( (data[3].missing != -1) && (data[3].fvalue < (float)1.0523011684)) {
    if ( (data[16].missing != -1) && (data[16].fvalue < (float)-0.018707942218)) {
      if ( (data[7].missing != -1) && (data[7].fvalue < (float)-0.74306476116)) {
        result[2] += -0.038999956;
      } else {
        result[2] += -0.003778014;
      }
    } else {
      if ( (data[16].missing != -1) && (data[16].fvalue < (float)0.053103368729)) {
        if ( (data[3].missing != -1) && (data[3].fvalue < (float)-1.0847979784)) {
          result[2] += 0.04483699;
        } else {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)-0.79243505001)) {
            if ( (data[16].missing != -1) && (data[16].fvalue < (float)0.013354065828)) {
              result[2] += 8.051742e-05;
            } else {
              result[2] += -0.03424;
            }
          } else {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)-0.31944227219)) {
              if ( (data[6].missing != -1) && (data[6].fvalue < (float)-0.024934647605)) {
                result[2] += 0.018109424;
              } else {
                result[2] += 0.047729645;
              }
            } else {
              if ( (data[13].missing != -1) && (data[13].fvalue < (float)0.77784532309)) {
                result[2] += 0.010752294;
              } else {
                result[2] += -0.03254199;
              }
            }
          }
        }
      } else {
        if ( (data[16].missing != -1) && (data[16].fvalue < (float)0.06678853929)) {
          result[2] += -0.03296658;
        } else {
          if ( (data[7].missing != -1) && (data[7].fvalue < (float)-0.1410703212)) {
            result[2] += -0.017104141;
          } else {
            result[2] += 0.032988634;
          }
        }
      }
    }
  } else {
    result[2] += -0.034875937;
  }
  if ( (data[14].missing != -1) && (data[14].fvalue < (float)-1.4259421825)) {
    result[3] += -0.028680185;
  } else {
    if ( (data[3].missing != -1) && (data[3].fvalue < (float)-0.28086575866)) {
      if ( (data[7].missing != -1) && (data[7].fvalue < (float)-0.18220323324)) {
        if ( (data[5].missing != -1) && (data[5].fvalue < (float)-0.17693051696)) {
          if ( (data[7].missing != -1) && (data[7].fvalue < (float)-0.81045007706)) {
            result[3] += 0.034705583;
          } else {
            result[3] += 0.0013482126;
          }
        } else {
          result[3] += -0.020550776;
        }
      } else {
        result[3] += -0.037023276;
      }
    } else {
      if ( (data[3].missing != -1) && (data[3].fvalue < (float)-0.12851008773)) {
        result[3] += 0.037018705;
      } else {
        if ( (data[15].missing != -1) && (data[15].fvalue < (float)-0.60108989477)) {
          if ( (data[5].missing != -1) && (data[5].fvalue < (float)0.0089093819261)) {
            if ( (data[5].missing != -1) && (data[5].fvalue < (float)-0.29655107856)) {
              result[3] += 0.015732197;
            } else {
              result[3] += 0.048726298;
            }
          } else {
            result[3] += -0.0045694457;
          }
        } else {
          if ( (data[15].missing != -1) && (data[15].fvalue < (float)-0.45428651571)) {
            result[3] += -0.03741913;
          } else {
            if ( (data[16].missing != -1) && (data[16].fvalue < (float)0.053103368729)) {
              if ( (data[16].missing != -1) && (data[16].fvalue < (float)0.030153848231)) {
                result[3] += 0.009098581;
              } else {
                result[3] += -0.031087086;
              }
            } else {
              if ( (data[11].missing != -1) && (data[11].fvalue < (float)0.025153735653)) {
                result[3] += 0.0073868856;
              } else {
                result[3] += 0.048173495;
              }
            }
          }
        }
      }
    }
  }
  if ( (data[6].missing != -1) && (data[6].fvalue < (float)-0.39193168283)) {
    if ( (data[7].missing != -1) && (data[7].fvalue < (float)0.11927641928)) {
      if ( (data[12].missing != -1) && (data[12].fvalue < (float)0.42180234194)) {
        if ( (data[10].missing != -1) && (data[10].fvalue < (float)-0.46583351493)) {
          result[0] += 0.014598546;
        } else {
          if ( (data[16].missing != -1) && (data[16].fvalue < (float)0.017747782171)) {
            result[0] += 0.050475758;
          } else {
            result[0] += 0.022541175;
          }
        }
      } else {
        if ( (data[11].missing != -1) && (data[11].fvalue < (float)-0.16485464573)) {
          result[0] += 0.032110404;
        } else {
          if ( (data[11].missing != -1) && (data[11].fvalue < (float)0.28192278743)) {
            result[0] += -0.03584461;
          } else {
            result[0] += 0.0018713465;
          }
        }
      }
    } else {
      if ( (data[5].missing != -1) && (data[5].fvalue < (float)-0.39605548978)) {
        result[0] += 0.0036773526;
      } else {
        result[0] += -0.040930707;
      }
    }
  } else {
    if ( (data[9].missing != -1) && (data[9].fvalue < (float)1.1348803043)) {
      if ( (data[11].missing != -1) && (data[11].fvalue < (float)-0.22909902036)) {
        if ( (data[8].missing != -1) && (data[8].fvalue < (float)-0.20171427727)) {
          if ( (data[15].missing != -1) && (data[15].fvalue < (float)-1.7114901543)) {
            result[0] += 0.0127889365;
          } else {
            if ( (data[11].missing != -1) && (data[11].fvalue < (float)-0.25452056527)) {
              result[0] += -0.03887168;
            } else {
              result[0] += -0.0010198959;
            }
          }
        } else {
          result[0] += 0.02805381;
        }
      } else {
        if ( (data[5].missing != -1) && (data[5].fvalue < (float)-0.088755533099)) {
          if ( (data[5].missing != -1) && (data[5].fvalue < (float)-0.32110768557)) {
            result[0] += -0.03450392;
          } else {
            result[0] += 0.0062865815;
          }
        } else {
          if ( (data[16].missing != -1) && (data[16].fvalue < (float)0.025671081617)) {
            result[0] += -0.011523197;
          } else {
            result[0] += -0.045201346;
          }
        }
      }
    } else {
      if ( (data[6].missing != -1) && (data[6].fvalue < (float)0.18741211295)) {
        result[0] += -0.017742636;
      } else {
        result[0] += 0.03288389;
      }
    }
  }
  if ( (data[0].missing != -1) && (data[0].fvalue < (float)0.14035646617)) {
    if ( (data[10].missing != -1) && (data[10].fvalue < (float)1.6924813986)) {
      if ( (data[0].missing != -1) && (data[0].fvalue < (float)-1.3415445089)) {
        result[1] += 0.03540973;
      } else {
        if ( (data[12].missing != -1) && (data[12].fvalue < (float)-0.83629524708)) {
          if ( (data[5].missing != -1) && (data[5].fvalue < (float)0.092830754817)) {
            result[1] += -0.040597133;
          } else {
            result[1] += 0.0075186114;
          }
        } else {
          if ( (data[16].missing != -1) && (data[16].fvalue < (float)0.003763372777)) {
            result[1] += 0.03960518;
          } else {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)0.0089225023985)) {
              result[1] += -0.014008393;
            } else {
              result[1] += 0.025041161;
            }
          }
        }
      }
    } else {
      result[1] += -0.024123784;
    }
  } else {
    result[1] += -0.032920334;
  }
  if ( (data[8].missing != -1) && (data[8].fvalue < (float)-0.14996892214)) {
    if ( (data[0].missing != -1) && (data[0].fvalue < (float)-1.1717795134)) {
      result[2] += -0.03239368;
    } else {
      if ( (data[13].missing != -1) && (data[13].fvalue < (float)1.0310770273)) {
        if ( (data[12].missing != -1) && (data[12].fvalue < (float)-0.027997098863)) {
          if ( (data[5].missing != -1) && (data[5].fvalue < (float)-0.24522577226)) {
            result[2] += -0.0066396953;
          } else {
            if ( (data[0].missing != -1) && (data[0].fvalue < (float)-0.70224493742)) {
              result[2] += 0.06240995;
            } else {
              if ( (data[0].missing != -1) && (data[0].fvalue < (float)-0.20608408749)) {
                result[2] += 0.00853416;
              } else {
                result[2] += 0.046575505;
              }
            }
          }
        } else {
          if ( (data[14].missing != -1) && (data[14].fvalue < (float)0.5669670105)) {
            if ( (data[0].missing != -1) && (data[0].fvalue < (float)0.10080797225)) {
              result[2] += 0.029705161;
            } else {
              result[2] += -0.03705382;
            }
          } else {
            if ( (data[6].missing != -1) && (data[6].fvalue < (float)-0.069692648947)) {
              result[2] += 0.00069373724;
            } else {
              result[2] += 0.038046487;
            }
          }
        }
      } else {
        if ( (data[5].missing != -1) && (data[5].fvalue < (float)0.22934293747)) {
          result[2] += 0.009064012;
        } else {
          result[2] += -0.02737233;
        }
      }
    }
  } else {
    if ( (data[5].missing != -1) && (data[5].fvalue < (float)0.16112536192)) {
      if ( (data[16].missing != -1) && (data[16].fvalue < (float)0.0087882457301)) {
        result[2] += -0.0054210983;
      } else {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)0.38544401526)) {
          result[2] += -0.05066072;
        } else {
          result[2] += -0.026519844;
        }
      }
    } else {
      if ( (data[6].missing != -1) && (data[6].fvalue < (float)0.902148664)) {
        result[2] += 0.025134373;
      } else {
        result[2] += -0.022343064;
      }
    }
  }
  if ( (data[14].missing != -1) && (data[14].fvalue < (float)-1.4259421825)) {
    result[3] += -0.026978314;
  } else {
    if ( (data[14].missing != -1) && (data[14].fvalue < (float)-1.1020410061)) {
      result[3] += 0.026544487;
    } else {
      if ( (data[7].missing != -1) && (data[7].fvalue < (float)0.61500769854)) {
        if ( (data[12].missing != -1) && (data[12].fvalue < (float)-0.70902597904)) {
          result[3] += 0.04019452;
        } else {
          if ( (data[6].missing != -1) && (data[6].fvalue < (float)1.009770751)) {
            if ( (data[14].missing != -1) && (data[14].fvalue < (float)-0.097853966057)) {
              result[3] += -0.02268733;
            } else {
              if ( (data[14].missing != -1) && (data[14].fvalue < (float)0.13486784697)) {
                result[3] += 0.035838824;
              } else {
                result[3] += 0.0018751773;
              }
            }
          } else {
            result[3] += -0.028558163;
          }
        }
      } else {
        if ( (data[11].missing != -1) && (data[11].fvalue < (float)-0.21313621104)) {
          result[3] += -0.038979277;
        } else {
          result[3] += -0.0036132;
        }
      }
    }
  }
  if ( (data[11].missing != -1) && (data[11].fvalue < (float)-0.25357052684)) {
    if ( (data[8].missing != -1) && (data[8].fvalue < (float)-0.21861460805)) {
      result[0] += -0.017580967;
    } else {
      if ( (data[10].missing != -1) && (data[10].fvalue < (float)-0.82406896353)) {
        result[0] += -0.00308012;
      } else {
        if ( (data[15].missing != -1) && (data[15].fvalue < (float)-0.48420962691)) {
          result[0] += 0.013566104;
        } else {
          result[0] += 0.04734585;
        }
      }
    }
  } else {
    if ( (data[10].missing != -1) && (data[10].fvalue < (float)0.29595884681)) {
      if ( (data[13].missing != -1) && (data[13].fvalue < (float)-1.4362953901)) {
        result[0] += 0.021101315;
      } else {
        if ( (data[16].missing != -1) && (data[16].fvalue < (float)0.038849674165)) {
          if ( (data[6].missing != -1) && (data[6].fvalue < (float)-0.30391672254)) {
            if ( (data[7].missing != -1) && (data[7].fvalue < (float)-0.91147071123)) {
              result[0] += -0.03314982;
            } else {
              if ( (data[7].missing != -1) && (data[7].fvalue < (float)-0.4675784409)) {
                result[0] += 0.031555828;
              } else {
                result[0] += -0.01841415;
              }
            }
          } else {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)-0.19415074587)) {
              result[0] += -0.04910512;
            } else {
              result[0] += -0.022124248;
            }
          }
        } else {
          if ( (data[10].missing != -1) && (data[10].fvalue < (float)-0.35600462556)) {
            result[0] += 0.018597595;
          } else {
            result[0] += -0.024916088;
          }
        }
      }
    } else {
      if ( (data[11].missing != -1) && (data[11].fvalue < (float)-0.16485464573)) {
        result[0] += -0.015265602;
      } else {
        if ( (data[8].missing != -1) && (data[8].fvalue < (float)-0.13294763863)) {
          result[0] += 0.04311749;
        } else {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)1.4990401268)) {
            result[0] += -0.015900433;
          } else {
            result[0] += 0.015044885;
          }
        }
      }
    }
  }
  if ( (data[14].missing != -1) && (data[14].fvalue < (float)-1.3242353201)) {
    if ( (data[16].missing != -1) && (data[16].fvalue < (float)0.0042847408913)) {
      result[1] += 0.03536426;
    } else {
      result[1] += 0.0041864817;
    }
  } else {
    if ( (data[14].missing != -1) && (data[14].fvalue < (float)-1.1276538372)) {
      result[1] += -0.056424733;
    } else {
      if ( (data[15].missing != -1) && (data[15].fvalue < (float)-0.90007030964)) {
        result[1] += 0.034344323;
      } else {
        if ( (data[6].missing != -1) && (data[6].fvalue < (float)0.054371412843)) {
          result[1] += -0.042691614;
        } else {
          if ( (data[5].missing != -1) && (data[5].fvalue < (float)-0.045041881502)) {
            result[1] += 0.018102743;
          } else {
            result[1] += -0.031498443;
          }
        }
      }
    }
  }
  if ( (data[8].missing != -1) && (data[8].fvalue < (float)0.011566273868)) {
    if ( (data[11].missing != -1) && (data[11].fvalue < (float)-0.11270186305)) {
      if ( (data[8].missing != -1) && (data[8].fvalue < (float)-0.20639407635)) {
        if ( (data[13].missing != -1) && (data[13].fvalue < (float)0.94390970469)) {
          if ( (data[6].missing != -1) && (data[6].fvalue < (float)0.14617690444)) {
            result[2] += -0.0017823152;
          } else {
            if ( (data[10].missing != -1) && (data[10].fvalue < (float)0.18442307413)) {
              result[2] += 0.046001885;
            } else {
              result[2] += 0.021056203;
            }
          }
        } else {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)-1.3696166277)) {
            result[2] += 0.019134354;
          } else {
            result[2] += -0.021089675;
          }
        }
      } else {
        if ( (data[14].missing != -1) && (data[14].fvalue < (float)0.56459403038)) {
          if ( (data[7].missing != -1) && (data[7].fvalue < (float)-0.36472955346)) {
            result[2] += -0.049924556;
          } else {
            if ( (data[8].missing != -1) && (data[8].fvalue < (float)-0.18396270275)) {
              if ( (data[9].missing != -1) && (data[9].fvalue < (float)-0.73631227016)) {
                result[2] += -0.024667842;
              } else {
                result[2] += 0.02641399;
              }
            } else {
              if ( (data[8].missing != -1) && (data[8].fvalue < (float)-0.15919555724)) {
                result[2] += -0.042296153;
              } else {
                result[2] += -0.00450799;
              }
            }
          }
        } else {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)-0.8880417943)) {
            result[2] += 0.030493377;
          } else {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)0.62931138277)) {
              result[2] += -0.015287392;
            } else {
              result[2] += 0.027871693;
            }
          }
        }
      }
    } else {
      if ( (data[12].missing != -1) && (data[12].fvalue < (float)-0.14010675251)) {
        result[2] += 0.0009499485;
      } else {
        if ( (data[15].missing != -1) && (data[15].fvalue < (float)0.63466179371)) {
          result[2] += 0.03869771;
        } else {
          result[2] += 0.020610388;
        }
      }
    }
  } else {
    result[2] += -0.02118824;
  }
  if ( (data[7].missing != -1) && (data[7].fvalue < (float)1.3343400955)) {
    if ( (data[9].missing != -1) && (data[9].fvalue < (float)-0.18324759603)) {
      if ( (data[5].missing != -1) && (data[5].fvalue < (float)-0.1428437233)) {
        if ( (data[13].missing != -1) && (data[13].fvalue < (float)-0.017879812047)) {
          result[3] += 0.034289252;
        } else {
          if ( (data[11].missing != -1) && (data[11].fvalue < (float)-0.25700798631)) {
            result[3] += 0.0013532228;
          } else {
            result[3] += -0.026959712;
          }
        }
      } else {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)-0.91897934675)) {
          result[3] += 0.056855317;
        } else {
          result[3] += 0.015605288;
        }
      }
    } else {
      if ( (data[5].missing != -1) && (data[5].fvalue < (float)-0.34237021208)) {
        if ( (data[1].missing != -1) && (data[1].fvalue < (float)0.058750249445)) {
          result[3] += -0.012439287;
        } else {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)-0.038952160627)) {
            result[3] += 0.05208059;
          } else {
            result[3] += 0.0054089082;
          }
        }
      } else {
        if ( (data[3].missing != -1) && (data[3].fvalue < (float)-0.24711900949)) {
          result[3] += -0.039767105;
        } else {
          if ( (data[11].missing != -1) && (data[11].fvalue < (float)-0.14382907748)) {
            result[3] += 0.020746736;
          } else {
            if ( (data[11].missing != -1) && (data[11].fvalue < (float)0.20511458814)) {
              result[3] += -0.024218414;
            } else {
              if ( (data[11].missing != -1) && (data[11].fvalue < (float)0.81832867861)) {
                result[3] += 0.024678474;
              } else {
                result[3] += -0.01443465;
              }
            }
          }
        }
      }
    }
  } else {
    result[3] += -0.03718727;
  }
  if ( (data[5].missing != -1) && (data[5].fvalue < (float)2.3154711723)) {
    if ( (data[3].missing != -1) && (data[3].fvalue < (float)1.4000630379)) {
      if ( (data[10].missing != -1) && (data[10].fvalue < (float)0.53875249624)) {
        if ( (data[13].missing != -1) && (data[13].fvalue < (float)0.19216702878)) {
          if ( (data[11].missing != -1) && (data[11].fvalue < (float)-0.2367080003)) {
            if ( (data[8].missing != -1) && (data[8].fvalue < (float)-0.20835191011)) {
              result[0] += 0.0007636576;
            } else {
              if ( (data[12].missing != -1) && (data[12].fvalue < (float)0.63036763668)) {
                result[0] += 0.053857077;
              } else {
                result[0] += 0.008831663;
              }
            }
          } else {
            if ( (data[7].missing != -1) && (data[7].fvalue < (float)-0.4675784409)) {
              if ( (data[13].missing != -1) && (data[13].fvalue < (float)-1.3232319355)) {
                result[0] += -0.023772117;
              } else {
                result[0] += 0.016831856;
              }
            } else {
              if ( (data[5].missing != -1) && (data[5].fvalue < (float)-0.34496054053)) {
                result[0] += 0.007818948;
              } else {
                result[0] += -0.022821642;
              }
            }
          }
        } else {
          if ( (data[8].missing != -1) && (data[8].fvalue < (float)-0.21793171763)) {
            result[0] += 0.014102529;
          } else {
            result[0] += -0.038599487;
          }
        }
      } else {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)-1.0456593037)) {
          result[0] += -0.0030246198;
        } else {
          if ( (data[13].missing != -1) && (data[13].fvalue < (float)0.80325615406)) {
            result[0] += 0.018852746;
          } else {
            result[0] += 0.043223888;
          }
        }
      }
    } else {
      result[0] += -0.021269096;
    }
  } else {
    result[0] += -0.030090148;
  }
  if ( (data[5].missing != -1) && (data[5].fvalue < (float)-0.41068267822)) {
    result[1] += -0.03403338;
  } else {
    if ( (data[5].missing != -1) && (data[5].fvalue < (float)-0.2904368639)) {
      if ( (data[6].missing != -1) && (data[6].fvalue < (float)-0.031989078969)) {
        result[1] += 0.010205044;
      } else {
        result[1] += 0.03977373;
      }
    } else {
      if ( (data[6].missing != -1) && (data[6].fvalue < (float)0.088294439018)) {
        result[1] += -0.03917226;
      } else {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)0.17808239162)) {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)-0.50485175848)) {
            if ( (data[11].missing != -1) && (data[11].fvalue < (float)-0.25257846713)) {
              result[1] += -0.023130614;
            } else {
              result[1] += 0.015194753;
            }
          } else {
            result[1] += 0.041515224;
          }
        } else {
          result[1] += -0.016456513;
        }
      }
    }
  }
  if ( (data[7].missing != -1) && (data[7].fvalue < (float)-0.73344153166)) {
    if ( (data[0].missing != -1) && (data[0].fvalue < (float)0.78292393684)) {
      result[2] += -0.04027412;
    } else {
      result[2] += -0.006276452;
    }
  } else {
    if ( (data[10].missing != -1) && (data[10].fvalue < (float)-1.0263878107)) {
      result[2] += 0.029108731;
    } else {
      if ( (data[7].missing != -1) && (data[7].fvalue < (float)-0.32512119412)) {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)0.31589466333)) {
          result[2] += -0.044111725;
        } else {
          result[2] += 0.01850503;
        }
      } else {
        if ( (data[3].missing != -1) && (data[3].fvalue < (float)-0.31944227219)) {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)-1.227191925)) {
            result[2] += -0.012650765;
          } else {
            if ( (data[5].missing != -1) && (data[5].fvalue < (float)-0.27472487092)) {
              result[2] += 0.047143564;
            } else {
              result[2] += 0.021302486;
            }
          }
        } else {
          if ( (data[6].missing != -1) && (data[6].fvalue < (float)1.3642252684)) {
            if ( (data[12].missing != -1) && (data[12].fvalue < (float)-0.5130815506)) {
              if ( (data[12].missing != -1) && (data[12].fvalue < (float)-1.0734789371)) {
                result[2] += -0.001776783;
              } else {
                result[2] += -0.039409522;
              }
            } else {
              if ( (data[16].missing != -1) && (data[16].fvalue < (float)0.022840771824)) {
                result[2] += -0.013881634;
              } else {
                result[2] += 0.015329281;
              }
            }
          } else {
            result[2] += 0.013498338;
          }
        }
      }
    }
  }
  if ( (data[8].missing != -1) && (data[8].fvalue < (float)-0.12956127524)) {
    if ( (data[11].missing != -1) && (data[11].fvalue < (float)-0.16485464573)) {
      if ( (data[3].missing != -1) && (data[3].fvalue < (float)-0.25331288576)) {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)-0.87846332788)) {
          result[3] += 0.0031582415;
        } else {
          result[3] += -0.02800217;
        }
      } else {
        if ( (data[0].missing != -1) && (data[0].fvalue < (float)-1.4190087318)) {
          result[3] += -0.016383914;
        } else {
          if ( (data[16].missing != -1) && (data[16].fvalue < (float)0.015151453204)) {
            result[3] += 0.043663617;
          } else {
            if ( (data[10].missing != -1) && (data[10].fvalue < (float)0.96652847528)) {
              result[3] += -0.013506527;
            } else {
              result[3] += 0.028193066;
            }
          }
        }
      }
    } else {
      if ( (data[0].missing != -1) && (data[0].fvalue < (float)-0.32232868671)) {
        result[3] += -0.04069701;
      } else {
        result[3] += -0.019982208;
      }
    }
  } else {
    if ( (data[9].missing != -1) && (data[9].fvalue < (float)0.48028355837)) {
      if ( (data[12].missing != -1) && (data[12].fvalue < (float)0.11260662228)) {
        result[3] += 0.0002695527;
      } else {
        result[3] += 0.05216629;
      }
    } else {
      if ( (data[11].missing != -1) && (data[11].fvalue < (float)-0.073542796075)) {
        result[3] += -0.021800198;
      } else {
        if ( (data[16].missing != -1) && (data[16].fvalue < (float)0.0526355654)) {
          if ( (data[16].missing != -1) && (data[16].fvalue < (float)0.0023125449661)) {
            result[3] += 0.018646698;
          } else {
            if ( (data[7].missing != -1) && (data[7].fvalue < (float)-1.0147081614)) {
              result[3] += -0.00028593547;
            } else {
              result[3] += -0.023686653;
            }
          }
        } else {
          result[3] += 0.033640493;
        }
      }
    }
  }
  if ( (data[9].missing != -1) && (data[9].fvalue < (float)-0.54771786928)) {
    if ( (data[8].missing != -1) && (data[8].fvalue < (float)-0.20207519829)) {
      result[0] += -0.03281047;
    } else {
      result[0] += 0.0012086453;
    }
  } else {
    if ( (data[13].missing != -1) && (data[13].fvalue < (float)0.079274237156)) {
      if ( (data[13].missing != -1) && (data[13].fvalue < (float)-0.5950601697)) {
        if ( (data[13].missing != -1) && (data[13].fvalue < (float)-0.73032397032)) {
          if ( (data[8].missing != -1) && (data[8].fvalue < (float)-0.20588018)) {
            result[0] += 0.03151954;
          } else {
            if ( (data[8].missing != -1) && (data[8].fvalue < (float)-0.14603298903)) {
              result[0] += -0.029830275;
            } else {
              if ( (data[11].missing != -1) && (data[11].fvalue < (float)-0.17039236426)) {
                result[0] += 0.028186575;
              } else {
                result[0] += -0.015739886;
              }
            }
          }
        } else {
          result[0] += 0.030218074;
        }
      } else {
        if ( (data[5].missing != -1) && (data[5].fvalue < (float)-0.30885031819)) {
          result[0] += 0.0053248173;
        } else {
          if ( (data[11].missing != -1) && (data[11].fvalue < (float)-0.076629474759)) {
            result[0] += -0.04763252;
          } else {
            result[0] += -0.0059778616;
          }
        }
      }
    } else {
      if ( (data[13].missing != -1) && (data[13].fvalue < (float)0.2598875165)) {
        result[0] += 0.043446273;
      } else {
        if ( (data[16].missing != -1) && (data[16].fvalue < (float)0.067746691406)) {
          if ( (data[5].missing != -1) && (data[5].fvalue < (float)0.54972690344)) {
            if ( (data[16].missing != -1) && (data[16].fvalue < (float)0.026114549488)) {
              result[0] += -0.011470034;
            } else {
              result[0] += 0.02052516;
            }
          } else {
            result[0] += 0.041497517;
          }
        } else {
          result[0] += -0.026848068;
        }
      }
    }
  }
  if ( (data[6].missing != -1) && (data[6].fvalue < (float)-0.50929665565)) {
    result[1] += -0.034779232;
  } else {
    if ( (data[12].missing != -1) && (data[12].fvalue < (float)0.15007823706)) {
      if ( (data[7].missing != -1) && (data[7].fvalue < (float)0.37159153819)) {
        result[1] += -0.029235734;
      } else {
        if ( (data[12].missing != -1) && (data[12].fvalue < (float)-0.83629524708)) {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)1.7281014919)) {
            if ( (data[14].missing != -1) && (data[14].fvalue < (float)-1.1473143101)) {
              if ( (data[13].missing != -1) && (data[13].fvalue < (float)1.3953338861)) {
                result[1] += -0.015686788;
              } else {
                result[1] += 0.02937664;
              }
            } else {
              result[1] += -0.041589778;
            }
          } else {
            result[1] += 0.026251445;
          }
        } else {
          result[1] += 0.03520312;
        }
      }
    } else {
      result[1] += 0.03262342;
    }
  }
  if ( (data[8].missing != -1) && (data[8].fvalue < (float)-0.18396270275)) {
    if ( (data[8].missing != -1) && (data[8].fvalue < (float)-0.19982936978)) {
      if ( (data[5].missing != -1) && (data[5].fvalue < (float)-0.40884578228)) {
        result[2] += 0.026370322;
      } else {
        if ( (data[0].missing != -1) && (data[0].fvalue < (float)-1.0904041529)) {
          result[2] += -0.032867085;
        } else {
          if ( (data[8].missing != -1) && (data[8].fvalue < (float)-0.20639407635)) {
            if ( (data[14].missing != -1) && (data[14].fvalue < (float)0.40396893024)) {
              if ( (data[13].missing != -1) && (data[13].fvalue < (float)1.0127772093)) {
                result[2] += 0.040157467;
              } else {
                result[2] += -0.008323585;
              }
            } else {
              result[2] += -0.018515244;
            }
          } else {
            result[2] += -0.02205733;
          }
        }
      }
    } else {
      if ( (data[11].missing != -1) && (data[11].fvalue < (float)-0.22255906463)) {
        result[2] += 0.00782259;
      } else {
        result[2] += 0.039629724;
      }
    }
  } else {
    if ( (data[11].missing != -1) && (data[11].fvalue < (float)-0.19597181678)) {
      if ( (data[8].missing != -1) && (data[8].fvalue < (float)-0.16341301799)) {
        result[2] += -0.03876949;
      } else {
        result[2] += -0.01406405;
      }
    } else {
      if ( (data[11].missing != -1) && (data[11].fvalue < (float)-0.14700852334)) {
        result[2] += 0.025443984;
      } else {
        if ( (data[11].missing != -1) && (data[11].fvalue < (float)-0.097746968269)) {
          result[2] += -0.032566015;
        } else {
          if ( (data[8].missing != -1) && (data[8].fvalue < (float)-0.0026854926255)) {
            if ( (data[7].missing != -1) && (data[7].fvalue < (float)-0.48896437883)) {
              result[2] += -0.0038021512;
            } else {
              result[2] += 0.027018026;
            }
          } else {
            result[2] += -0.017862136;
          }
        }
      }
    }
  }
  if ( (data[3].missing != -1) && (data[3].fvalue < (float)1.1452996731)) {
    if ( (data[9].missing != -1) && (data[9].fvalue < (float)-0.47115305066)) {
      if ( (data[5].missing != -1) && (data[5].fvalue < (float)-0.1428437233)) {
        if ( (data[12].missing != -1) && (data[12].fvalue < (float)-0.31976079941)) {
          result[3] += -0.03265998;
        } else {
          result[3] += 0.023491716;
        }
      } else {
        if ( (data[12].missing != -1) && (data[12].fvalue < (float)-0.48623552918)) {
          result[3] += 0.054623153;
        } else {
          result[3] += 0.0057947407;
        }
      }
    } else {
      if ( (data[5].missing != -1) && (data[5].fvalue < (float)-0.13766139746)) {
        if ( (data[6].missing != -1) && (data[6].fvalue < (float)-0.68742364645)) {
          if ( (data[13].missing != -1) && (data[13].fvalue < (float)-0.5950601697)) {
            result[3] += -0.030516392;
          } else {
            result[3] += 0.0037916151;
          }
        } else {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)0.31589466333)) {
            result[3] += 0.031990778;
          } else {
            result[3] += -0.005597091;
          }
        }
      } else {
        if ( (data[8].missing != -1) && (data[8].fvalue < (float)-0.095086917281)) {
          result[3] += -0.04618819;
        } else {
          if ( (data[7].missing != -1) && (data[7].fvalue < (float)-0.57088547945)) {
            result[3] += -0.020891644;
          } else {
            result[3] += 0.019971192;
          }
        }
      }
    }
  } else {
    if ( (data[10].missing != -1) && (data[10].fvalue < (float)1.0367903709)) {
      result[3] += 0.03469382;
    } else {
      if ( (data[16].missing != -1) && (data[16].fvalue < (float)0.041384216398)) {
        result[3] += -0.004166788;
      } else {
        result[3] += 0.016562814;
      }
    }
  }
  if ( (data[8].missing != -1) && (data[8].fvalue < (float)-0.21849969029)) {
    result[0] += -0.03278732;
  } else {
    if ( (data[13].missing != -1) && (data[13].fvalue < (float)1.0878903866)) {
      if ( (data[10].missing != -1) && (data[10].fvalue < (float)1.2165125608)) {
        if ( (data[10].missing != -1) && (data[10].fvalue < (float)0.53875249624)) {
          if ( (data[13].missing != -1) && (data[13].fvalue < (float)0.19216702878)) {
            if ( (data[13].missing != -1) && (data[13].fvalue < (float)-0.19670066237)) {
              if ( (data[7].missing != -1) && (data[7].fvalue < (float)-0.73344153166)) {
                result[0] += 0.0074086147;
              } else {
                result[0] += -0.012819298;
              }
            } else {
              result[0] += 0.021674357;
            }
          } else {
            result[0] += -0.03127081;
          }
        } else {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)0.905631423)) {
            result[0] += 0.04734413;
          } else {
            result[0] += 0.008754587;
          }
        }
      } else {
        result[0] += -0.027360255;
      }
    } else {
      if ( (data[13].missing != -1) && (data[13].fvalue < (float)1.3775569201)) {
        result[0] += 0.05057564;
      } else {
        result[0] += 0.0036810252;
      }
    }
  }
  if ( (data[8].missing != -1) && (data[8].fvalue < (float)-0.19121129811)) {
    if ( (data[10].missing != -1) && (data[10].fvalue < (float)0.77467292547)) {
      if ( (data[11].missing != -1) && (data[11].fvalue < (float)-0.25583276153)) {
        result[1] += 0.0013750028;
      } else {
        result[1] += 0.033152208;
      }
    } else {
      if ( (data[13].missing != -1) && (data[13].fvalue < (float)0.96250289679)) {
        result[1] += 0.018313857;
      } else {
        if ( (data[12].missing != -1) && (data[12].fvalue < (float)-1.2760870457)) {
          result[1] += -0.051051844;
        } else {
          result[1] += -0.011663484;
        }
      }
    }
  } else {
    result[1] += -0.039649405;
  }
  if ( (data[8].missing != -1) && (data[8].fvalue < (float)-0.20639407635)) {
    if ( (data[13].missing != -1) && (data[13].fvalue < (float)0.94390970469)) {
      if ( (data[6].missing != -1) && (data[6].fvalue < (float)0.17723160982)) {
        result[2] += 0.0067070606;
      } else {
        if ( (data[3].missing != -1) && (data[3].fvalue < (float)0.0089225023985)) {
          result[2] += 0.044727392;
        } else {
          result[2] += 0.023767961;
        }
      }
    } else {
      if ( (data[9].missing != -1) && (data[9].fvalue < (float)-1.3696166277)) {
        result[2] += 0.014463762;
      } else {
        result[2] += -0.025381079;
      }
    }
  } else {
    if ( (data[11].missing != -1) && (data[11].fvalue < (float)-0.23627480865)) {
      if ( (data[9].missing != -1) && (data[9].fvalue < (float)-0.028089480475)) {
        result[2] += -0.042772613;
      } else {
        result[2] += -0.0049097864;
      }
    } else {
      if ( (data[3].missing != -1) && (data[3].fvalue < (float)0.1855404079)) {
        if ( (data[7].missing != -1) && (data[7].fvalue < (float)-0.40445777774)) {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)0.32867220044)) {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)-0.91361236572)) {
              result[2] += -0.0013385054;
            } else {
              result[2] += -0.04151438;
            }
          } else {
            if ( (data[5].missing != -1) && (data[5].fvalue < (float)0.14037305117)) {
              result[2] += 0.009316809;
            } else {
              result[2] += 0.034241892;
            }
          }
        } else {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)-0.45875871181)) {
            result[2] += 0.040914122;
          } else {
            if ( (data[7].missing != -1) && (data[7].fvalue < (float)0.057101707906)) {
              result[2] += -0.0060575805;
            } else {
              result[2] += 0.026962107;
            }
          }
        }
      } else {
        if ( (data[8].missing != -1) && (data[8].fvalue < (float)-0.17387378216)) {
          result[2] += 0.005298371;
        } else {
          if ( (data[11].missing != -1) && (data[11].fvalue < (float)0.0071482318453)) {
            result[2] += -0.041536868;
          } else {
            result[2] += -0.00791246;
          }
        }
      }
    }
  }
  if ( (data[0].missing != -1) && (data[0].fvalue < (float)-1.3575376272)) {
    result[3] += 0.02222804;
  } else {
    if ( (data[8].missing != -1) && (data[8].fvalue < (float)-0.21313029528)) {
      result[3] += -0.03702139;
    } else {
      if ( (data[12].missing != -1) && (data[12].fvalue < (float)-0.9207880497)) {
        result[3] += -0.02008629;
      } else {
        if ( (data[5].missing != -1) && (data[5].fvalue < (float)1.4188649654)) {
          if ( (data[1].missing != -1) && (data[1].fvalue < (float)-1.332406044)) {
            result[3] += 0.027295709;
          } else {
            if ( (data[1].missing != -1) && (data[1].fvalue < (float)-0.2499011606)) {
              result[3] += -0.03222997;
            } else {
              if ( (data[3].missing != -1) && (data[3].fvalue < (float)-0.038952160627)) {
                result[3] += 0.016772194;
              } else {
                result[3] += -0.00934775;
              }
            }
          }
        } else {
          result[3] += 0.037405625;
        }
      }
    }
  }
  if ( (data[9].missing != -1) && (data[9].fvalue < (float)-0.54771786928)) {
    if ( (data[6].missing != -1) && (data[6].fvalue < (float)0.0025505779777)) {
      result[0] += -0.00017232427;
    } else {
      result[0] += -0.036382664;
    }
  } else {
    if ( (data[11].missing != -1) && (data[11].fvalue < (float)-0.23780336976)) {
      if ( (data[8].missing != -1) && (data[8].fvalue < (float)-0.18742009997)) {
        if ( (data[1].missing != -1) && (data[1].fvalue < (float)-0.55968827009)) {
          result[0] += -0.019876415;
        } else {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)0.13314658403)) {
            result[0] += -0.004644266;
          } else {
            result[0] += 0.03240058;
          }
        }
      } else {
        result[0] += 0.04570934;
      }
    } else {
      if ( (data[7].missing != -1) && (data[7].fvalue < (float)-0.94923579693)) {
        if ( (data[3].missing != -1) && (data[3].fvalue < (float)0.030459327623)) {
          result[0] += -0.04099015;
        } else {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)0.87656605244)) {
            result[0] += 0.025438536;
          } else {
            result[0] += -0.021808926;
          }
        }
      } else {
        if ( (data[11].missing != -1) && (data[11].fvalue < (float)-0.14085152745)) {
          if ( (data[15].missing != -1) && (data[15].fvalue < (float)0.57690554857)) {
            if ( (data[8].missing != -1) && (data[8].fvalue < (float)-0.18866866827)) {
              result[0] += -0.034906697;
            } else {
              result[0] += -0.008475501;
            }
          } else {
            result[0] += 0.008383925;
          }
        } else {
          if ( (data[5].missing != -1) && (data[5].fvalue < (float)2.1140592098)) {
            if ( (data[16].missing != -1) && (data[16].fvalue < (float)0.023775557056)) {
              if ( (data[0].missing != -1) && (data[0].fvalue < (float)0.59084939957)) {
                result[0] += -0.019380942;
              } else {
                result[0] += 0.022460574;
              }
            } else {
              result[0] += 0.035990797;
            }
          } else {
            result[0] += -0.0152403405;
          }
        }
      }
    }
  }
  if ( (data[8].missing != -1) && (data[8].fvalue < (float)-0.19492897391)) {
    if ( (data[16].missing != -1) && (data[16].fvalue < (float)-0.019668526947)) {
      result[1] += 0.04032455;
    } else {
      if ( (data[11].missing != -1) && (data[11].fvalue < (float)-0.24779932201)) {
        if ( (data[0].missing != -1) && (data[0].fvalue < (float)-1.4317775965)) {
          result[1] += 0.017710038;
        } else {
          if ( (data[12].missing != -1) && (data[12].fvalue < (float)-0.93122935295)) {
            result[1] += -0.047495503;
          } else {
            result[1] += -0.015464275;
          }
        }
      } else {
        if ( (data[16].missing != -1) && (data[16].fvalue < (float)0.061377741396)) {
          result[1] += 0.0017778944;
        } else {
          result[1] += 0.040323626;
        }
      }
    }
  } else {
    if ( (data[9].missing != -1) && (data[9].fvalue < (float)0.20340718329)) {
      result[1] += -0.015454699;
    } else {
      result[1] += -0.04326157;
    }
  }
  if ( (data[3].missing != -1) && (data[3].fvalue < (float)-0.94150280952)) {
    if ( (data[3].missing != -1) && (data[3].fvalue < (float)-1.1986523867)) {
      result[2] += -0.0022913737;
    } else {
      result[2] += 0.030909782;
    }
  } else {
    if ( (data[1].missing != -1) && (data[1].fvalue < (float)-1.0610685349)) {
      result[2] += -0.030853087;
    } else {
      if ( (data[3].missing != -1) && (data[3].fvalue < (float)-0.80415892601)) {
        result[2] += -0.031340625;
      } else {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)0.92333030701)) {
          if ( (data[0].missing != -1) && (data[0].fvalue < (float)0.64492481947)) {
            if ( (data[8].missing != -1) && (data[8].fvalue < (float)-0.12082034349)) {
              if ( (data[3].missing != -1) && (data[3].fvalue < (float)0.98283171654)) {
                result[2] += 0.0042582545;
              } else {
                result[2] += 0.033099238;
              }
            } else {
              result[2] += -0.02998997;
            }
          } else {
            if ( (data[0].missing != -1) && (data[0].fvalue < (float)0.8779335022)) {
              result[2] += 0.036006425;
            } else {
              result[2] += 0.0086646825;
            }
          }
        } else {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)0.35766488314)) {
            result[2] += -0.00065936736;
          } else {
            result[2] += -0.03137998;
          }
        }
      }
    }
  }
  if ( (data[13].missing != -1) && (data[13].fvalue < (float)1.2225931883)) {
    if ( (data[10].missing != -1) && (data[10].fvalue < (float)-0.72088116407)) {
      if ( (data[8].missing != -1) && (data[8].fvalue < (float)-0.13102070987)) {
        result[3] += -0.029677426;
      } else {
        result[3] += 0.006537214;
      }
    } else {
      if ( (data[3].missing != -1) && (data[3].fvalue < (float)-0.038952160627)) {
        if ( (data[10].missing != -1) && (data[10].fvalue < (float)-0.40548467636)) {
          result[3] += 0.002560054;
        } else {
          if ( (data[16].missing != -1) && (data[16].fvalue < (float)0.016788505018)) {
            result[3] += 0.01564611;
          } else {
            result[3] += 0.04739006;
          }
        }
      } else {
        if ( (data[3].missing != -1) && (data[3].fvalue < (float)1.0671726465)) {
          if ( (data[12].missing != -1) && (data[12].fvalue < (float)-0.44223231077)) {
            if ( (data[8].missing != -1) && (data[8].fvalue < (float)-0.17387378216)) {
              result[3] += -0.0071488903;
            } else {
              result[3] += 0.025826281;
            }
          } else {
            if ( (data[10].missing != -1) && (data[10].fvalue < (float)-0.15075722337)) {
              result[3] += 0.0115092285;
            } else {
              if ( (data[7].missing != -1) && (data[7].fvalue < (float)-0.97206634283)) {
                result[3] += -0.012507078;
              } else {
                result[3] += -0.033954028;
              }
            }
          }
        } else {
          if ( (data[10].missing != -1) && (data[10].fvalue < (float)1.4411821365)) {
            result[3] += 0.03267927;
          } else {
            result[3] += 0.0002651418;
          }
        }
      }
    }
  } else {
    if ( (data[10].missing != -1) && (data[10].fvalue < (float)1.4570474625)) {
      result[3] += -0.034273203;
    } else {
      result[3] += 0.007609742;
    }
  }
  if ( (data[3].missing != -1) && (data[3].fvalue < (float)-1.1763842106)) {
    result[0] += -0.024872225;
  } else {
    if ( (data[5].missing != -1) && (data[5].fvalue < (float)-0.48989018798)) {
      if ( (data[16].missing != -1) && (data[16].fvalue < (float)-0.0035335980356)) {
        result[0] += 0.0434375;
      } else {
        result[0] += -1.3094347e-05;
      }
    } else {
      if ( (data[16].missing != -1) && (data[16].fvalue < (float)-0.0004766578495)) {
        if ( (data[6].missing != -1) && (data[6].fvalue < (float)-0.62424135208)) {
          result[0] += 0.0014160525;
        } else {
          if ( (data[6].missing != -1) && (data[6].fvalue < (float)-0.069692648947)) {
            result[0] += -0.03423375;
          } else {
            result[0] += -0.005979925;
          }
        }
      } else {
        if ( (data[10].missing != -1) && (data[10].fvalue < (float)-0.59525871277)) {
          if ( (data[0].missing != -1) && (data[0].fvalue < (float)0.72153884172)) {
            if ( (data[14].missing != -1) && (data[14].fvalue < (float)0.5669670105)) {
              result[0] += 0.049460303;
            } else {
              result[0] += 0.024791704;
            }
          } else {
            result[0] += -0.005877096;
          }
        } else {
          if ( (data[10].missing != -1) && (data[10].fvalue < (float)-0.18654736876)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)0.87035739422)) {
              result[0] += -0.039426092;
            } else {
              result[0] += -0.0014010229;
            }
          } else {
            if ( (data[7].missing != -1) && (data[7].fvalue < (float)0.6512581706)) {
              if ( (data[15].missing != -1) && (data[15].fvalue < (float)-0.45428651571)) {
                result[0] += 0.039314423;
              } else {
                result[0] += 0.002880882;
              }
            } else {
              if ( (data[14].missing != -1) && (data[14].fvalue < (float)-1.4515353441)) {
                result[0] += 0.008275345;
              } else {
                result[0] += -0.02710439;
              }
            }
          }
        }
      }
    }
  }
  if ( (data[0].missing != -1) && (data[0].fvalue < (float)0.10887497663)) {
    if ( (data[6].missing != -1) && (data[6].fvalue < (float)-0.22760552168)) {
      result[1] += -0.02954273;
    } else {
      if ( (data[11].missing != -1) && (data[11].fvalue < (float)-0.26018977165)) {
        if ( (data[8].missing != -1) && (data[8].fvalue < (float)-0.21920143068)) {
          result[1] += 0.015873782;
        } else {
          result[1] += -0.03162929;
        }
      } else {
        if ( (data[6].missing != -1) && (data[6].fvalue < (float)1.3929610252)) {
          if ( (data[8].missing != -1) && (data[8].fvalue < (float)-0.21041087806)) {
            result[1] += 0.049753275;
          } else {
            result[1] += 0.015875109;
          }
        } else {
          result[1] += -0.0077680834;
        }
      }
    }
  } else {
    result[1] += -0.044148237;
  }
  if ( (data[8].missing != -1) && (data[8].fvalue < (float)-0.2189950645)) {
    result[2] += 0.024034468;
  } else {
    if ( (data[11].missing != -1) && (data[11].fvalue < (float)-0.25357052684)) {
      if ( (data[6].missing != -1) && (data[6].fvalue < (float)0.37815955281)) {
        if ( (data[5].missing != -1) && (data[5].fvalue < (float)-0.2904368639)) {
          result[2] += -0.045604642;
        } else {
          result[2] += -0.017506735;
        }
      } else {
        result[2] += 0.0020705024;
      }
    } else {
      if ( (data[3].missing != -1) && (data[3].fvalue < (float)1.1059601307)) {
        if ( (data[11].missing != -1) && (data[11].fvalue < (float)-0.24741731584)) {
          result[2] += 0.033445694;
        } else {
          if ( (data[15].missing != -1) && (data[15].fvalue < (float)-0.56099760532)) {
            result[2] += -0.024187965;
          } else {
            if ( (data[7].missing != -1) && (data[7].fvalue < (float)0.33324235678)) {
              if ( (data[16].missing != -1) && (data[16].fvalue < (float)0.060172878206)) {
                result[2] += 0.007605064;
              } else {
                result[2] += -0.019521022;
              }
            } else {
              result[2] += 0.04499303;
            }
          }
        }
      } else {
        result[2] += -0.034348622;
      }
    }
  }
  if ( (data[13].missing != -1) && (data[13].fvalue < (float)-0.13281053305)) {
    if ( (data[15].missing != -1) && (data[15].fvalue < (float)0.25749254227)) {
      result[3] += 0.044117298;
    } else {
      if ( (data[12].missing != -1) && (data[12].fvalue < (float)0.99250650406)) {
        if ( (data[14].missing != -1) && (data[14].fvalue < (float)0.79492980242)) {
          if ( (data[8].missing != -1) && (data[8].fvalue < (float)-0.075811803341)) {
            result[3] += -0.030748893;
          } else {
            result[3] += 0.027024899;
          }
        } else {
          result[3] += -0.038809028;
        }
      } else {
        if ( (data[11].missing != -1) && (data[11].fvalue < (float)-0.073542796075)) {
          result[3] += 0.001067347;
        } else {
          result[3] += 0.030989597;
        }
      }
    }
  } else {
    if ( (data[12].missing != -1) && (data[12].fvalue < (float)-0.3120880723)) {
      if ( (data[12].missing != -1) && (data[12].fvalue < (float)-0.56675463915)) {
        if ( (data[11].missing != -1) && (data[11].fvalue < (float)-0.24379661679)) {
          if ( (data[11].missing != -1) && (data[11].fvalue < (float)-0.26215565205)) {
            result[3] += -0.008104433;
          } else {
            result[3] += 0.036117088;
          }
        } else {
          if ( (data[11].missing != -1) && (data[11].fvalue < (float)-0.12578228116)) {
            if ( (data[5].missing != -1) && (data[5].fvalue < (float)-0.12604095042)) {
              result[3] += -0.011838752;
            } else {
              result[3] += -0.03454089;
            }
          } else {
            result[3] += 0.003963446;
          }
        }
      } else {
        result[3] += -0.048793558;
      }
    } else {
      if ( (data[13].missing != -1) && (data[13].fvalue < (float)0.2598875165)) {
        result[3] += -0.013227376;
      } else {
        if ( (data[3].missing != -1) && (data[3].fvalue < (float)-0.28086575866)) {
          result[3] += 0.0037989784;
        } else {
          result[3] += 0.029149203;
        }
      }
    }
  }
  if ( (data[0].missing != -1) && (data[0].fvalue < (float)-1.2417032719)) {
    result[0] += -0.027677227;
  } else {
    if ( (data[13].missing != -1) && (data[13].fvalue < (float)0.079274237156)) {
      if ( (data[12].missing != -1) && (data[12].fvalue < (float)1.1993442774)) {
        if ( (data[5].missing != -1) && (data[5].fvalue < (float)0.14037305117)) {
          if ( (data[2].missing != -1) && (data[2].fvalue < (float)0.09942278266)) {
            result[0] += -0.027772108;
          } else {
            if ( (data[12].missing != -1) && (data[12].fvalue < (float)0.91569340229)) {
              if ( (data[16].missing != -1) && (data[16].fvalue < (float)0.0067399716936)) {
                result[0] += -0.0007936225;
              } else {
                result[0] += 0.022911606;
              }
            } else {
              result[0] += -0.01933912;
            }
          }
        } else {
          if ( (data[13].missing != -1) && (data[13].fvalue < (float)-0.5950601697)) {
            result[0] += 0.00012143926;
          } else {
            result[0] += -0.036293283;
          }
        }
      } else {
        if ( (data[7].missing != -1) && (data[7].fvalue < (float)-1.4934316874)) {
          result[0] += 0.008584964;
        } else {
          result[0] += 0.036000032;
        }
      }
    } else {
      if ( (data[13].missing != -1) && (data[13].fvalue < (float)0.19216702878)) {
        result[0] += 0.04330235;
      } else {
        if ( (data[3].missing != -1) && (data[3].fvalue < (float)-0.33466351032)) {
          result[0] += -0.027965248;
        } else {
          if ( (data[12].missing != -1) && (data[12].fvalue < (float)-1.2861771584)) {
            result[0] += 0.03810796;
          } else {
            if ( (data[10].missing != -1) && (data[10].fvalue < (float)0.53875249624)) {
              result[0] += -0.016497562;
            } else {
              if ( (data[8].missing != -1) && (data[8].fvalue < (float)-0.18866866827)) {
                result[0] += -0.0010021984;
              } else {
                result[0] += 0.027027532;
              }
            }
          }
        }
      }
    }
  }
  if ( (data[6].missing != -1) && (data[6].fvalue < (float)0.041582621634)) {
    if ( (data[13].missing != -1) && (data[13].fvalue < (float)0.92155778408)) {
      result[1] += -0.049410902;
    } else {
      result[1] += -0.0075005563;
    }
  } else {
    if ( (data[9].missing != -1) && (data[9].fvalue < (float)0.17808239162)) {
      if ( (data[11].missing != -1) && (data[11].fvalue < (float)-0.2053707242)) {
        if ( (data[8].missing != -1) && (data[8].fvalue < (float)-0.21392957866)) {
          if ( (data[11].missing != -1) && (data[11].fvalue < (float)-0.26135647297)) {
            result[1] += -0.0012000616;
          } else {
            result[1] += 0.031749643;
          }
        } else {
          result[1] += -0.032899067;
        }
      } else {
        result[1] += 0.043907445;
      }
    } else {
      result[1] += -0.021106616;
    }
  }
  if ( (data[12].missing != -1) && (data[12].fvalue < (float)1.0508075953)) {
    if ( (data[12].missing != -1) && (data[12].fvalue < (float)0.70414102077)) {
      if ( (data[9].missing != -1) && (data[9].fvalue < (float)-0.98316407204)) {
        if ( (data[3].missing != -1) && (data[3].fvalue < (float)-0.48395431042)) {
          result[2] += -0.0053054276;
        } else {
          result[2] += 0.028568164;
        }
      } else {
        if ( (data[5].missing != -1) && (data[5].fvalue < (float)1.8541356325)) {
          if ( (data[10].missing != -1) && (data[10].fvalue < (float)-0.023404598236)) {
            if ( (data[15].missing != -1) && (data[15].fvalue < (float)0.17556777596)) {
              result[2] += 0.025494894;
            } else {
              if ( (data[13].missing != -1) && (data[13].fvalue < (float)-0.32829239964)) {
                result[2] += 0.003615623;
              } else {
                result[2] += -0.034058806;
              }
            }
          } else {
            if ( (data[13].missing != -1) && (data[13].fvalue < (float)0.77784532309)) {
              if ( (data[6].missing != -1) && (data[6].fvalue < (float)0.092376641929)) {
                result[2] += -0.033356406;
              } else {
                result[2] += -0.002557321;
              }
            } else {
              result[2] += -0.043805607;
            }
          }
        } else {
          result[2] += 0.01867928;
        }
      }
    } else {
      result[2] += 0.029844869;
    }
  } else {
    result[2] += -0.0240411;
  }
  if ( (data[5].missing != -1) && (data[5].fvalue < (float)-0.47404417396)) {
    if ( (data[12].missing != -1) && (data[12].fvalue < (float)1.020488739)) {
      result[3] += -0.04669521;
    } else {
      result[3] += 0.0033627418;
    }
  } else {
    if ( (data[5].missing != -1) && (data[5].fvalue < (float)0.24856686592)) {
      if ( (data[5].missing != -1) && (data[5].fvalue < (float)0.092830754817)) {
        if ( (data[6].missing != -1) && (data[6].fvalue < (float)0.4216991365)) {
          if ( (data[11].missing != -1) && (data[11].fvalue < (float)-0.26094642282)) {
            result[3] += 0.03170422;
          } else {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)-0.784265697)) {
              result[3] += -0.038157634;
            } else {
              if ( (data[5].missing != -1) && (data[5].fvalue < (float)-0.12604095042)) {
                result[3] += 0.0151745;
              } else {
                result[3] += -0.01939496;
              }
            }
          }
        } else {
          result[3] += -0.033474382;
        }
      } else {
        result[3] += 0.04113754;
      }
    } else {
      if ( (data[11].missing != -1) && (data[11].fvalue < (float)-0.018274491653)) {
        if ( (data[13].missing != -1) && (data[13].fvalue < (float)0.66503226757)) {
          result[3] += -0.039480716;
        } else {
          result[3] += -0.009089571;
        }
      } else {
        if ( (data[5].missing != -1) && (data[5].fvalue < (float)1.4188649654)) {
          result[3] += -0.020394333;
        } else {
          result[3] += 0.028285507;
        }
      }
    }
  }
  if ( (data[11].missing != -1) && (data[11].fvalue < (float)-0.25399804115)) {
    if ( (data[8].missing != -1) && (data[8].fvalue < (float)-0.21861460805)) {
      result[0] += -0.0168371;
    } else {
      if ( (data[5].missing != -1) && (data[5].fvalue < (float)-0.1428437233)) {
        if ( (data[8].missing != -1) && (data[8].fvalue < (float)-0.20631541312)) {
          result[0] += 0.018749472;
        } else {
          result[0] += 0.042757194;
        }
      } else {
        result[0] += 0.0017692897;
      }
    }
  } else {
    if ( (data[1].missing != -1) && (data[1].fvalue < (float)-1.2598539591)) {
      result[0] += -0.0355064;
    } else {
      if ( (data[10].missing != -1) && (data[10].fvalue < (float)-0.18654736876)) {
        if ( (data[1].missing != -1) && (data[1].fvalue < (float)0.43742504716)) {
          if ( (data[15].missing != -1) && (data[15].fvalue < (float)0.64013510942)) {
            result[0] += -0.0076579005;
          } else {
            result[0] += 0.030213892;
          }
        } else {
          if ( (data[6].missing != -1) && (data[6].fvalue < (float)1.1266809702)) {
            if ( (data[13].missing != -1) && (data[13].fvalue < (float)-1.4043353796)) {
              result[0] += -0.007579346;
            } else {
              if ( (data[8].missing != -1) && (data[8].fvalue < (float)-0.12956127524)) {
                result[0] += -0.021991244;
              } else {
                result[0] += -0.04582205;
              }
            }
          } else {
            result[0] += 0.011568555;
          }
        }
      } else {
        if ( (data[16].missing != -1) && (data[16].fvalue < (float)0.048564616591)) {
          if ( (data[6].missing != -1) && (data[6].fvalue < (float)-0.90994179249)) {
            result[0] += -0.0089418655;
          } else {
            if ( (data[0].missing != -1) && (data[0].fvalue < (float)-0.75421535969)) {
              result[0] += -0.0019231215;
            } else {
              if ( (data[13].missing != -1) && (data[13].fvalue < (float)-0.10917767882)) {
                result[0] += 0.016727366;
              } else {
                result[0] += 0.0400463;
              }
            }
          }
        } else {
          if ( (data[6].missing != -1) && (data[6].fvalue < (float)0.60769373178)) {
            result[0] += 0.007990366;
          } else {
            result[0] += -0.027385319;
          }
        }
      }
    }
  }
  if ( (data[0].missing != -1) && (data[0].fvalue < (float)-1.4317775965)) {
    if ( (data[16].missing != -1) && (data[16].fvalue < (float)-0.002628286602)) {
      result[1] += 0.042422157;
    } else {
      result[1] += 0.0034586247;
    }
  } else {
    if ( (data[13].missing != -1) && (data[13].fvalue < (float)1.2953075171)) {
      if ( (data[6].missing != -1) && (data[6].fvalue < (float)0.12343075126)) {
        result[1] += -0.040967736;
      } else {
        if ( (data[6].missing != -1) && (data[6].fvalue < (float)0.60769373178)) {
          result[1] += 0.02372579;
        } else {
          result[1] += -0.025798801;
        }
      }
    } else {
      if ( (data[13].missing != -1) && (data[13].fvalue < (float)1.4316567183)) {
        result[1] += 0.036146414;
      } else {
        if ( (data[10].missing != -1) && (data[10].fvalue < (float)0.72595649958)) {
          result[1] += 0.0155304;
        } else {
          result[1] += -0.022198608;
        }
      }
    }
  }
  if ( (data[7].missing != -1) && (data[7].fvalue < (float)-0.73344153166)) {
    if ( (data[10].missing != -1) && (data[10].fvalue < (float)-0.89206194878)) {
      result[2] += 0.00035788296;
    } else {
      result[2] += -0.036243465;
    }
  } else {
    if ( (data[11].missing != -1) && (data[11].fvalue < (float)-0.27167388797)) {
      result[2] += 0.031169338;
    } else {
      if ( (data[3].missing != -1) && (data[3].fvalue < (float)1.0523011684)) {
        if ( (data[11].missing != -1) && (data[11].fvalue < (float)-0.097746968269)) {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)-0.53308588266)) {
            if ( (data[12].missing != -1) && (data[12].fvalue < (float)-0.3120880723)) {
              if ( (data[16].missing != -1) && (data[16].fvalue < (float)0.028659338132)) {
                result[2] += 0.004715002;
              } else {
                result[2] += 0.04583166;
              }
            } else {
              if ( (data[10].missing != -1) && (data[10].fvalue < (float)-0.20835523307)) {
                result[2] += 0.017674886;
              } else {
                result[2] += -0.023396838;
              }
            }
          } else {
            if ( (data[7].missing != -1) && (data[7].fvalue < (float)-0.55856341124)) {
              result[2] += 0.028195187;
            } else {
              if ( (data[7].missing != -1) && (data[7].fvalue < (float)0.27180051804)) {
                result[2] += -0.022625878;
              } else {
                result[2] += 0.0024947287;
              }
            }
          }
        } else {
          if ( (data[5].missing != -1) && (data[5].fvalue < (float)0.07551728934)) {
            result[2] += 0.004482123;
          } else {
            result[2] += 0.04496422;
          }
        }
      } else {
        result[2] += -0.03578797;
      }
    }
  }
  if ( (data[2].missing != -1) && (data[2].fvalue < (float)0.13540814817)) {
    if ( (data[12].missing != -1) && (data[12].fvalue < (float)0.38598513603)) {
      if ( (data[7].missing != -1) && (data[7].fvalue < (float)-0.0094966925681)) {
        result[3] += 0.04676368;
      } else {
        result[3] += 0.011266412;
      }
    } else {
      result[3] += -0.012173311;
    }
  } else {
    if ( (data[9].missing != -1) && (data[9].fvalue < (float)0.21868021786)) {
      if ( (data[14].missing != -1) && (data[14].fvalue < (float)0.14165844023)) {
        if ( (data[14].missing != -1) && (data[14].fvalue < (float)-0.12999746203)) {
          if ( (data[15].missing != -1) && (data[15].fvalue < (float)-0.60108989477)) {
            if ( (data[12].missing != -1) && (data[12].fvalue < (float)-1.1154152155)) {
              result[3] += -0.018713642;
            } else {
              result[3] += 0.018492078;
            }
          } else {
            result[3] += -0.032434866;
          }
        } else {
          result[3] += 0.02704297;
        }
      } else {
        result[3] += -0.040543016;
      }
    } else {
      if ( (data[3].missing != -1) && (data[3].fvalue < (float)0.030459327623)) {
        if ( (data[7].missing != -1) && (data[7].fvalue < (float)-0.94923579693)) {
          result[3] += 0.042133164;
        } else {
          result[3] += -0.0016609263;
        }
      } else {
        if ( (data[0].missing != -1) && (data[0].fvalue < (float)0.46719673276)) {
          result[3] += 0.016006388;
        } else {
          if ( (data[6].missing != -1) && (data[6].fvalue < (float)-0.90472733974)) {
            result[3] += 0.010261749;
          } else {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)1.4478132725)) {
              result[3] += -0.011757448;
            } else {
              result[3] += -0.0383355;
            }
          }
        }
      }
    }
  }
  if ( (data[9].missing != -1) && (data[9].fvalue < (float)-0.47115305066)) {
    if ( (data[5].missing != -1) && (data[5].fvalue < (float)-0.23767796159)) {
      result[0] += 0.00012971865;
    } else {
      result[0] += -0.03691301;
    }
  } else {
    if ( (data[11].missing != -1) && (data[11].fvalue < (float)1.2037239075)) {
      if ( (data[9].missing != -1) && (data[9].fvalue < (float)1.7302501202)) {
        if ( (data[3].missing != -1) && (data[3].fvalue < (float)1.1343532801)) {
          if ( (data[8].missing != -1) && (data[8].fvalue < (float)-0.20588018)) {
            if ( (data[16].missing != -1) && (data[16].fvalue < (float)0.018835080788)) {
              result[0] += 0.0020577249;
            } else {
              result[0] += 0.042949345;
            }
          } else {
            if ( (data[6].missing != -1) && (data[6].fvalue < (float)-0.50929665565)) {
              if ( (data[11].missing != -1) && (data[11].fvalue < (float)-0.027360389009)) {
                result[0] += 0.0016186096;
              } else {
                result[0] += 0.035637077;
              }
            } else {
              if ( (data[11].missing != -1) && (data[11].fvalue < (float)-0.0027782414109)) {
                result[0] += 0.0021816974;
              } else {
                result[0] += -0.028841792;
              }
            }
          }
        } else {
          result[0] += -0.027550101;
        }
      } else {
        result[0] += 0.03593674;
      }
    } else {
      result[0] += -0.022210639;
    }
  }
  if ( (data[5].missing != -1) && (data[5].fvalue < (float)-0.40100291371)) {
    result[1] += -0.02961859;
  } else {
    if ( (data[3].missing != -1) && (data[3].fvalue < (float)0.56793439388)) {
      if ( (data[3].missing != -1) && (data[3].fvalue < (float)0.1049733609)) {
        if ( (data[11].missing != -1) && (data[11].fvalue < (float)-0.24323554337)) {
          result[1] += 0.020777589;
        } else {
          result[1] += -0.022986585;
        }
      } else {
        result[1] += -0.03511454;
      }
    } else {
      if ( (data[3].missing != -1) && (data[3].fvalue < (float)0.99943822622)) {
        result[1] += 0.028917149;
      } else {
        if ( (data[13].missing != -1) && (data[13].fvalue < (float)0.96250289679)) {
          result[1] += 0.01941554;
        } else {
          result[1] += -0.018103493;
        }
      }
    }
  }
  if ( (data[8].missing != -1) && (data[8].fvalue < (float)-0.088057100773)) {
    if ( (data[16].missing != -1) && (data[16].fvalue < (float)0.091937877238)) {
      if ( (data[0].missing != -1) && (data[0].fvalue < (float)-0.81611019373)) {
        if ( (data[5].missing != -1) && (data[5].fvalue < (float)-0.33703631163)) {
          result[2] += 0.011657228;
        } else {
          result[2] += -0.034440007;
        }
      } else {
        if ( (data[7].missing != -1) && (data[7].fvalue < (float)0.3541572988)) {
          if ( (data[10].missing != -1) && (data[10].fvalue < (float)0.2830029726)) {
            if ( (data[5].missing != -1) && (data[5].fvalue < (float)-0.019165378064)) {
              if ( (data[5].missing != -1) && (data[5].fvalue < (float)-0.2067707926)) {
                result[2] += 0.008652019;
              } else {
                result[2] += -0.025489373;
              }
            } else {
              if ( (data[6].missing != -1) && (data[6].fvalue < (float)0.902148664)) {
                result[2] += 0.0342939;
              } else {
                result[2] += 0.010483668;
              }
            }
          } else {
            result[2] += -0.029597834;
          }
        } else {
          if ( (data[11].missing != -1) && (data[11].fvalue < (float)-0.21764399111)) {
            result[2] += 0.036850136;
          } else {
            result[2] += 0.0037854314;
          }
        }
      }
    } else {
      result[2] += 0.032767445;
    }
  } else {
    if ( (data[12].missing != -1) && (data[12].fvalue < (float)0.18131288886)) {
      result[2] += -0.0012971013;
    } else {
      result[2] += -0.029666876;
    }
  }
  if ( (data[16].missing != -1) && (data[16].fvalue < (float)0.053103368729)) {
    if ( (data[2].missing != -1) && (data[2].fvalue < (float)-0.27207258344)) {
      result[3] += 0.024458414;
    } else {
      if ( (data[7].missing != -1) && (data[7].fvalue < (float)0.61500769854)) {
        if ( (data[15].missing != -1) && (data[15].fvalue < (float)0.19386711717)) {
          if ( (data[11].missing != -1) && (data[11].fvalue < (float)-0.25058192015)) {
            result[3] += 0.0384017;
          } else {
            result[3] += 0.002416101;
          }
        } else {
          if ( (data[12].missing != -1) && (data[12].fvalue < (float)0.37132626772)) {
            result[3] += -0.026355822;
          } else {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)0.030459327623)) {
              result[3] += 0.015570114;
            } else {
              result[3] += -0.010193663;
            }
          }
        }
      } else {
        if ( (data[13].missing != -1) && (data[13].fvalue < (float)0.47263112664)) {
          result[3] += 0.0048999377;
        } else {
          if ( (data[16].missing != -1) && (data[16].fvalue < (float)0.0067399716936)) {
            result[3] += -0.012152013;
          } else {
            result[3] += -0.039379887;
          }
        }
      }
    }
  } else {
    if ( (data[16].missing != -1) && (data[16].fvalue < (float)0.080004297197)) {
      if ( (data[10].missing != -1) && (data[10].fvalue < (float)0.96652847528)) {
        result[3] += 0.010252786;
      } else {
        result[3] += 0.043690365;
      }
    } else {
      result[3] += -0.005156442;
    }
  }
  if ( (data[6].missing != -1) && (data[6].fvalue < (float)-0.39193168283)) {
    if ( (data[6].missing != -1) && (data[6].fvalue < (float)-0.53989446163)) {
      if ( (data[11].missing != -1) && (data[11].fvalue < (float)-0.25990229845)) {
        result[0] += 0.031521488;
      } else {
        if ( (data[12].missing != -1) && (data[12].fvalue < (float)0.91569340229)) {
          if ( (data[7].missing != -1) && (data[7].fvalue < (float)0.11927641928)) {
            if ( (data[5].missing != -1) && (data[5].fvalue < (float)-0.27255088091)) {
              result[0] += 0.02798408;
            } else {
              result[0] += -0.0070214565;
            }
          } else {
            result[0] += -0.025993472;
          }
        } else {
          result[0] += -0.026323592;
        }
      }
    } else {
      result[0] += 0.03970999;
    }
  } else {
    if ( (data[6].missing != -1) && (data[6].fvalue < (float)0.83127039671)) {
      if ( (data[16].missing != -1) && (data[16].fvalue < (float)0.039527323097)) {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)0.60564881563)) {
          if ( (data[16].missing != -1) && (data[16].fvalue < (float)0.015978958458)) {
            if ( (data[11].missing != -1) && (data[11].fvalue < (float)-0.23627480865)) {
              if ( (data[12].missing != -1) && (data[12].fvalue < (float)-0.096406295896)) {
                result[0] += -0.0039548366;
              } else {
                result[0] += 0.031416472;
              }
            } else {
              result[0] += -0.018893573;
            }
          } else {
            result[0] += -0.030630657;
          }
        } else {
          result[0] += -0.042603757;
        }
      } else {
        if ( (data[15].missing != -1) && (data[15].fvalue < (float)0.6977673173)) {
          result[0] += -0.012230997;
        } else {
          result[0] += 0.016088173;
        }
      }
    } else {
      if ( (data[10].missing != -1) && (data[10].fvalue < (float)0.96652847528)) {
        if ( (data[3].missing != -1) && (data[3].fvalue < (float)0.030459327623)) {
          result[0] += 0.0034581695;
        } else {
          result[0] += 0.03150366;
        }
      } else {
        result[0] += -0.017633608;
      }
    }
  }
  if ( (data[5].missing != -1) && (data[5].fvalue < (float)-0.40100291371)) {
    result[1] += -0.028049588;
  } else {
    if ( (data[9].missing != -1) && (data[9].fvalue < (float)0.050838146359)) {
      if ( (data[0].missing != -1) && (data[0].fvalue < (float)-0.4628483355)) {
        if ( (data[0].missing != -1) && (data[0].fvalue < (float)-0.88791364431)) {
          if ( (data[5].missing != -1) && (data[5].fvalue < (float)-0.14628712833)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)-1.2174545527)) {
              result[1] += 0.046760026;
            } else {
              result[1] += 0.0034767375;
            }
          } else {
            result[1] += -0.0018369043;
          }
        } else {
          result[1] += -0.020684572;
        }
      } else {
        result[1] += 0.04502391;
      }
    } else {
      if ( (data[13].missing != -1) && (data[13].fvalue < (float)1.0956714153)) {
        result[1] += -0.047739517;
      } else {
        result[1] += 0.016953263;
      }
    }
  }
  if ( (data[0].missing != -1) && (data[0].fvalue < (float)-1.1717795134)) {
    result[2] += -0.03026287;
  } else {
    if ( (data[8].missing != -1) && (data[8].fvalue < (float)-0.18396270275)) {
      if ( (data[12].missing != -1) && (data[12].fvalue < (float)-1.0734789371)) {
        result[2] += 0.033850618;
      } else {
        if ( (data[8].missing != -1) && (data[8].fvalue < (float)-0.21442578733)) {
          result[2] += -0.013183899;
        } else {
          if ( (data[12].missing != -1) && (data[12].fvalue < (float)0.37799793482)) {
            if ( (data[12].missing != -1) && (data[12].fvalue < (float)-0.48623552918)) {
              result[2] += -0.010479709;
            } else {
              if ( (data[5].missing != -1) && (data[5].fvalue < (float)-0.33163931966)) {
                result[2] += -0.00071585306;
              } else {
                result[2] += 0.050775517;
              }
            }
          } else {
            result[2] += -0.009278454;
          }
        }
      }
    } else {
      if ( (data[5].missing != -1) && (data[5].fvalue < (float)-0.15271317959)) {
        if ( (data[3].missing != -1) && (data[3].fvalue < (float)-0.31944227219)) {
          if ( (data[11].missing != -1) && (data[11].fvalue < (float)-0.2053707242)) {
            result[2] += -0.02422758;
          } else {
            result[2] += 0.004149756;
          }
        } else {
          result[2] += -0.03906282;
        }
      } else {
        if ( (data[10].missing != -1) && (data[10].fvalue < (float)-0.023404598236)) {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)-0.38037589192)) {
            result[2] += 0.00040250528;
          } else {
            result[2] += 0.029349148;
          }
        } else {
          result[2] += -0.013609859;
        }
      }
    }
  }
  if ( (data[8].missing != -1) && (data[8].fvalue < (float)-0.20549508929)) {
    if ( (data[11].missing != -1) && (data[11].fvalue < (float)-0.26087924838)) {
      if ( (data[8].missing != -1) && (data[8].fvalue < (float)-0.21569140255)) {
        result[3] += -0.013881843;
      } else {
        result[3] += 0.017074825;
      }
    } else {
      result[3] += -0.043890063;
    }
  } else {
    if ( (data[0].missing != -1) && (data[0].fvalue < (float)1.2386680841)) {
      if ( (data[8].missing != -1) && (data[8].fvalue < (float)0.011566273868)) {
        if ( (data[8].missing != -1) && (data[8].fvalue < (float)-0.16569210589)) {
          if ( (data[8].missing != -1) && (data[8].fvalue < (float)-0.18396270275)) {
            if ( (data[11].missing != -1) && (data[11].fvalue < (float)-0.22117689252)) {
              result[3] += 0.018498398;
            } else {
              result[3] += -0.01915933;
            }
          } else {
            result[3] += 0.032367226;
          }
        } else {
          if ( (data[5].missing != -1) && (data[5].fvalue < (float)-0.23170810938)) {
            if ( (data[16].missing != -1) && (data[16].fvalue < (float)0.017584664747)) {
              result[3] += 0.017483419;
            } else {
              result[3] += -0.006972631;
            }
          } else {
            if ( (data[8].missing != -1) && (data[8].fvalue < (float)-0.12082034349)) {
              result[3] += -0.04118549;
            } else {
              result[3] += -0.012734626;
            }
          }
        }
      } else {
        if ( (data[13].missing != -1) && (data[13].fvalue < (float)-0.39758077264)) {
          result[3] += 0.034580436;
        } else {
          result[3] += 0.0049786456;
        }
      }
    } else {
      if ( (data[6].missing != -1) && (data[6].fvalue < (float)-0.72838789225)) {
        result[3] += 0.008966375;
      } else {
        result[3] += -0.039546277;
      }
    }
  }
  if ( (data[10].missing != -1) && (data[10].fvalue < (float)-0.20835523307)) {
    if ( (data[6].missing != -1) && (data[6].fvalue < (float)-0.50929665565)) {
      if ( (data[13].missing != -1) && (data[13].fvalue < (float)-0.55282837152)) {
        if ( (data[11].missing != -1) && (data[11].fvalue < (float)-0.21514505148)) {
          result[0] += 0.03274373;
        } else {
          result[0] += 0.009777254;
        }
      } else {
        result[0] += -0.017951645;
      }
    } else {
      if ( (data[6].missing != -1) && (data[6].fvalue < (float)-0.014626559801)) {
        result[0] += -0.03993308;
      } else {
        if ( (data[5].missing != -1) && (data[5].fvalue < (float)-0.019165378064)) {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)0.35134255886)) {
            result[0] += -0.021702483;
          } else {
            result[0] += 0.031739816;
          }
        } else {
          result[0] += -0.025529591;
        }
      }
    }
  } else {
    if ( (data[10].missing != -1) && (data[10].fvalue < (float)0.18442307413)) {
      if ( (data[7].missing != -1) && (data[7].fvalue < (float)-0.27611738443)) {
        result[0] += 0.04153813;
      } else {
        if ( (data[11].missing != -1) && (data[11].fvalue < (float)-0.2053707242)) {
          result[0] += 0.03441808;
        } else {
          result[0] += -0.017808972;
        }
      }
    } else {
      if ( (data[12].missing != -1) && (data[12].fvalue < (float)0.34852361679)) {
        if ( (data[1].missing != -1) && (data[1].fvalue < (float)-0.091976709664)) {
          result[0] += 0.02891568;
        } else {
          if ( (data[0].missing != -1) && (data[0].fvalue < (float)-1.0674057007)) {
            result[0] += -0.029719105;
          } else {
            if ( (data[5].missing != -1) && (data[5].fvalue < (float)1.667165041)) {
              if ( (data[6].missing != -1) && (data[6].fvalue < (float)0.4599981606)) {
                result[0] += -0.0028272085;
              } else {
                result[0] += 0.037100855;
              }
            } else {
              result[0] += -0.014136639;
            }
          }
        }
      } else {
        result[0] += -0.03392085;
      }
    }
  }
  if ( (data[8].missing != -1) && (data[8].fvalue < (float)-0.18918262422)) {
    if ( (data[8].missing != -1) && (data[8].fvalue < (float)-0.20368315279)) {
      if ( (data[8].missing != -1) && (data[8].fvalue < (float)-0.21968281269)) {
        result[1] += 0.024977682;
      } else {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)-1.3696166277)) {
          result[1] += -0.04050189;
        } else {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)-0.37011244893)) {
            if ( (data[11].missing != -1) && (data[11].fvalue < (float)-0.26087924838)) {
              result[1] += -0.013023825;
            } else {
              result[1] += 0.037656754;
            }
          } else {
            result[1] += -0.021600243;
          }
        }
      }
    } else {
      result[1] += 0.027235687;
    }
  } else {
    result[1] += -0.038081102;
  }
  if ( (data[10].missing != -1) && (data[10].fvalue < (float)-0.023404598236)) {
    if ( (data[16].missing != -1) && (data[16].fvalue < (float)0.040303114802)) {
      if ( (data[5].missing != -1) && (data[5].fvalue < (float)-0.13766139746)) {
        if ( (data[5].missing != -1) && (data[5].fvalue < (float)-0.21281275153)) {
          if ( (data[11].missing != -1) && (data[11].fvalue < (float)-0.25888600945)) {
            result[2] += -0.020791208;
          } else {
            if ( (data[8].missing != -1) && (data[8].fvalue < (float)-0.17229938507)) {
              result[2] += 0.04215584;
            } else {
              if ( (data[11].missing != -1) && (data[11].fvalue < (float)-0.14700852334)) {
                result[2] += -0.018605052;
              } else {
                result[2] += -0.0006716926;
              }
            }
          }
        } else {
          result[2] += -0.029335126;
        }
      } else {
        if ( (data[0].missing != -1) && (data[0].fvalue < (float)0.62456172705)) {
          result[2] += 0.034953114;
        } else {
          result[2] += 0.010716646;
        }
      }
    } else {
      if ( (data[5].missing != -1) && (data[5].fvalue < (float)0.35202333331)) {
        result[2] += -0.039110523;
      } else {
        result[2] += 0.010722668;
      }
    }
  } else {
    if ( (data[16].missing != -1) && (data[16].fvalue < (float)0.033994093537)) {
      if ( (data[14].missing != -1) && (data[14].fvalue < (float)-1.1276538372)) {
        result[2] += 0.007353265;
      } else {
        if ( (data[12].missing != -1) && (data[12].fvalue < (float)-0.48623552918)) {
          result[2] += -0.04856811;
        } else {
          result[2] += -0.015376932;
        }
      }
    } else {
      if ( (data[16].missing != -1) && (data[16].fvalue < (float)0.050249256194)) {
        result[2] += 0.023267334;
      } else {
        if ( (data[8].missing != -1) && (data[8].fvalue < (float)-0.19982936978)) {
          result[2] += -0.018929048;
        } else {
          result[2] += 0.009597509;
        }
      }
    }
  }
  if ( (data[3].missing != -1) && (data[3].fvalue < (float)1.2488398552)) {
    if ( (data[14].missing != -1) && (data[14].fvalue < (float)-1.2981345654)) {
      result[3] += -0.027173115;
    } else {
      if ( (data[15].missing != -1) && (data[15].fvalue < (float)-0.60108989477)) {
        if ( (data[3].missing != -1) && (data[3].fvalue < (float)0.69456344843)) {
          result[3] += 0.042446904;
        } else {
          result[3] += 0.0032447816;
        }
      } else {
        if ( (data[10].missing != -1) && (data[10].fvalue < (float)-0.2608923018)) {
          if ( (data[10].missing != -1) && (data[10].fvalue < (float)-0.40548467636)) {
            if ( (data[12].missing != -1) && (data[12].fvalue < (float)0.64476305246)) {
              result[3] += -0.030652598;
            } else {
              if ( (data[10].missing != -1) && (data[10].fvalue < (float)-1.0263878107)) {
                result[3] += 0.0006952426;
              } else {
                result[3] += 0.025280474;
              }
            }
          } else {
            result[3] += 0.041061454;
          }
        } else {
          if ( (data[5].missing != -1) && (data[5].fvalue < (float)0.11830360442)) {
            if ( (data[16].missing != -1) && (data[16].fvalue < (float)0.022840771824)) {
              if ( (data[12].missing != -1) && (data[12].fvalue < (float)-0.20998249948)) {
                result[3] += 0.014065372;
              } else {
                result[3] += -0.02871854;
              }
            } else {
              result[3] += -0.041275192;
            }
          } else {
            if ( (data[6].missing != -1) && (data[6].fvalue < (float)0.91162836552)) {
              result[3] += 0.016880976;
            } else {
              result[3] += -0.014191846;
            }
          }
        }
      }
    }
  } else {
    if ( (data[10].missing != -1) && (data[10].fvalue < (float)1.4570474625)) {
      result[3] += 0.035745453;
    } else {
      result[3] += 0.003583472;
    }
  }
  if ( (data[2].missing != -1) && (data[2].fvalue < (float)-0.069487594068)) {
    if ( (data[9].missing != -1) && (data[9].fvalue < (float)0.67599290609)) {
      result[0] += -0.029689971;
    } else {
      result[0] += -0.0010950664;
    }
  } else {
    if ( (data[12].missing != -1) && (data[12].fvalue < (float)0.68646353483)) {
      if ( (data[9].missing != -1) && (data[9].fvalue < (float)-0.47115305066)) {
        if ( (data[8].missing != -1) && (data[8].fvalue < (float)-0.20263934135)) {
          result[0] += -0.027549664;
        } else {
          result[0] += 0.009204475;
        }
      } else {
        if ( (data[16].missing != -1) && (data[16].fvalue < (float)0.048564616591)) {
          if ( (data[5].missing != -1) && (data[5].fvalue < (float)0.59251761436)) {
            if ( (data[5].missing != -1) && (data[5].fvalue < (float)-0.072991624475)) {
              if ( (data[14].missing != -1) && (data[14].fvalue < (float)-0.032462161034)) {
                result[0] += -0.0015716335;
              } else {
                result[0] += 0.027531758;
              }
            } else {
              result[0] += -0.013741816;
            }
          } else {
            result[0] += 0.042314768;
          }
        } else {
          if ( (data[13].missing != -1) && (data[13].fvalue < (float)0.41300338507)) {
            result[0] += 0.007947956;
          } else {
            result[0] += -0.031806663;
          }
        }
      }
    } else {
      if ( (data[6].missing != -1) && (data[6].fvalue < (float)-0.40938580036)) {
        if ( (data[12].missing != -1) && (data[12].fvalue < (float)1.2605309486)) {
          result[0] += -0.0103112;
        } else {
          result[0] += 0.018574355;
        }
      } else {
        if ( (data[16].missing != -1) && (data[16].fvalue < (float)0.040853574872)) {
          result[0] += -0.041339513;
        } else {
          result[0] += 0.004792449;
        }
      }
    }
  }
  if ( (data[5].missing != -1) && (data[5].fvalue < (float)-0.40100291371)) {
    result[1] += -0.027748445;
  } else {
    if ( (data[9].missing != -1) && (data[9].fvalue < (float)0.17808239162)) {
      if ( (data[2].missing != -1) && (data[2].fvalue < (float)0.17732004821)) {
        result[1] += -0.021408617;
      } else {
        if ( (data[0].missing != -1) && (data[0].fvalue < (float)-0.50663286448)) {
          if ( (data[8].missing != -1) && (data[8].fvalue < (float)-0.21194139123)) {
            if ( (data[13].missing != -1) && (data[13].fvalue < (float)1.0023117065)) {
              result[1] += 0.007651165;
            } else {
              result[1] += 0.045058455;
            }
          } else {
            result[1] += -0.01033645;
          }
        } else {
          result[1] += 0.0513933;
        }
      }
    } else {
      if ( (data[13].missing != -1) && (data[13].fvalue < (float)1.23132658)) {
        result[1] += -0.03536714;
      } else {
        result[1] += 0.0039047834;
      }
    }
  }
  if ( (data[15].missing != -1) && (data[15].fvalue < (float)-1.388064146)) {
    result[2] += 0.024649737;
  } else {
    if ( (data[9].missing != -1) && (data[9].fvalue < (float)0.94407975674)) {
      if ( (data[9].missing != -1) && (data[9].fvalue < (float)0.63800871372)) {
        if ( (data[3].missing != -1) && (data[3].fvalue < (float)-1.2579658031)) {
          result[2] += 0.0124609275;
        } else {
          if ( (data[11].missing != -1) && (data[11].fvalue < (float)-0.11270186305)) {
            if ( (data[12].missing != -1) && (data[12].fvalue < (float)-0.18233750761)) {
              if ( (data[12].missing != -1) && (data[12].fvalue < (float)-0.5130815506)) {
                result[2] += -0.018271213;
              } else {
                result[2] += 0.017844653;
              }
            } else {
              if ( (data[0].missing != -1) && (data[0].fvalue < (float)0.73645710945)) {
                result[2] += -0.024047423;
              } else {
                result[2] += 0.004763148;
              }
            }
          } else {
            if ( (data[11].missing != -1) && (data[11].fvalue < (float)0.0071482318453)) {
              result[2] += 0.02368284;
            } else {
              result[2] += -0.005865729;
            }
          }
        }
      } else {
        result[2] += 0.026799304;
      }
    } else {
      result[2] += -0.025590703;
    }
  }
  if ( (data[3].missing != -1) && (data[3].fvalue < (float)0.54964464903)) {
    if ( (data[12].missing != -1) && (data[12].fvalue < (float)-0.3120880723)) {
      if ( (data[3].missing != -1) && (data[3].fvalue < (float)0.1049733609)) {
        result[3] += -0.031141618;
      } else {
        result[3] += -0.003979227;
      }
    } else {
      if ( (data[9].missing != -1) && (data[9].fvalue < (float)-0.84180510044)) {
        result[3] += 0.03011704;
      } else {
        if ( (data[6].missing != -1) && (data[6].fvalue < (float)-0.27162119746)) {
          if ( (data[7].missing != -1) && (data[7].fvalue < (float)-0.83256447315)) {
            result[3] += 0.00077581516;
          } else {
            result[3] += -0.030445194;
          }
        } else {
          if ( (data[6].missing != -1) && (data[6].fvalue < (float)0.15546032786)) {
            result[3] += 0.031494346;
          } else {
            result[3] += -0.01578306;
          }
        }
      }
    }
  } else {
    if ( (data[6].missing != -1) && (data[6].fvalue < (float)-0.90472733974)) {
      result[3] += 0.034314148;
    } else {
      if ( (data[12].missing != -1) && (data[12].fvalue < (float)-0.70902597904)) {
        if ( (data[0].missing != -1) && (data[0].fvalue < (float)-1.3883382082)) {
          result[3] += -0.0076022493;
        } else {
          if ( (data[0].missing != -1) && (data[0].fvalue < (float)-0.81611019373)) {
            result[3] += 0.041033942;
          } else {
            result[3] += 0.0025562644;
          }
        }
      } else {
        result[3] += -0.013661362;
      }
    }
  }
  if ( (data[13].missing != -1) && (data[13].fvalue < (float)0.079274237156)) {
    if ( (data[15].missing != -1) && (data[15].fvalue < (float)0.20022596419)) {
      result[0] += -0.036370877;
    } else {
      if ( (data[7].missing != -1) && (data[7].fvalue < (float)-0.16502712667)) {
        if ( (data[7].missing != -1) && (data[7].fvalue < (float)-0.4675784409)) {
          if ( (data[5].missing != -1) && (data[5].fvalue < (float)-0.17693051696)) {
            if ( (data[12].missing != -1) && (data[12].fvalue < (float)0.56249433756)) {
              result[0] += 0.015178258;
            } else {
              if ( (data[11].missing != -1) && (data[11].fvalue < (float)-0.16485464573)) {
                result[0] += 0.003940083;
              } else {
                result[0] += -0.031048892;
              }
            }
          } else {
            if ( (data[5].missing != -1) && (data[5].fvalue < (float)0.07551728934)) {
              result[0] += 0.041271;
            } else {
              if ( (data[5].missing != -1) && (data[5].fvalue < (float)0.49404135346)) {
                result[0] += -0.008345303;
              } else {
                result[0] += 0.013340195;
              }
            }
          }
        } else {
          if ( (data[5].missing != -1) && (data[5].fvalue < (float)-0.19134612381)) {
            result[0] += 0.0023662373;
          } else {
            result[0] += -0.049216937;
          }
        }
      } else {
        result[0] += 0.031639006;
      }
    }
  } else {
    if ( (data[0].missing != -1) && (data[0].fvalue < (float)-0.88791364431)) {
      if ( (data[7].missing != -1) && (data[7].fvalue < (float)1.5922026634)) {
        result[0] += -0.029350365;
      } else {
        result[0] += 0.009675252;
      }
    } else {
      if ( (data[8].missing != -1) && (data[8].fvalue < (float)-0.13294763863)) {
        if ( (data[3].missing != -1) && (data[3].fvalue < (float)0.030459327623)) {
          result[0] += 0.005436106;
        } else {
          if ( (data[5].missing != -1) && (data[5].fvalue < (float)0.51325875521)) {
            result[0] += 0.05410045;
          } else {
            result[0] += 0.022701774;
          }
        }
      } else {
        result[0] += -0.0033202437;
      }
    }
  }
  if ( (data[6].missing != -1) && (data[6].fvalue < (float)0.041582621634)) {
    if ( (data[13].missing != -1) && (data[13].fvalue < (float)0.92155778408)) {
      result[1] += -0.048645135;
    } else {
      result[1] += -0.0042448486;
    }
  } else {
    if ( (data[6].missing != -1) && (data[6].fvalue < (float)0.25082111359)) {
      result[1] += 0.046366576;
    } else {
      if ( (data[6].missing != -1) && (data[6].fvalue < (float)0.71585971117)) {
        result[1] += -0.03170077;
      } else {
        if ( (data[0].missing != -1) && (data[0].fvalue < (float)-1.1880815029)) {
          result[1] += 0.03880904;
        } else {
          if ( (data[10].missing != -1) && (data[10].fvalue < (float)0.99988812208)) {
            result[1] += -0.02315857;
          } else {
            result[1] += -0.0018537696;
          }
        }
      }
    }
  }
  if ( (data[3].missing != -1) && (data[3].fvalue < (float)-1.2579658031)) {
    result[2] += 0.03125505;
  } else {
    if ( (data[9].missing != -1) && (data[9].fvalue < (float)0.92333030701)) {
      if ( (data[9].missing != -1) && (data[9].fvalue < (float)0.63800871372)) {
        if ( (data[8].missing != -1) && (data[8].fvalue < (float)-0.21849969029)) {
          result[2] += 0.020997537;
        } else {
          if ( (data[5].missing != -1) && (data[5].fvalue < (float)0.0089093819261)) {
            if ( (data[0].missing != -1) && (data[0].fvalue < (float)0.62456172705)) {
              if ( (data[12].missing != -1) && (data[12].fvalue < (float)-0.65827143192)) {
                result[2] += -0.0414958;
              } else {
                result[2] += -0.0011630355;
              }
            } else {
              result[2] += -0.044074956;
            }
          } else {
            if ( (data[10].missing != -1) && (data[10].fvalue < (float)0.90767478943)) {
              if ( (data[3].missing != -1) && (data[3].fvalue < (float)-0.09566282481)) {
                result[2] += 0.0074442453;
              } else {
                result[2] += 0.038806286;
              }
            } else {
              result[2] += -0.022061942;
            }
          }
        }
      } else {
        result[2] += 0.023933304;
      }
    } else {
      if ( (data[3].missing != -1) && (data[3].fvalue < (float)0.19738391042)) {
        result[2] += -0.004030546;
      } else {
        result[2] += -0.032318223;
      }
    }
  }
  if ( (data[4].missing != -1) && (data[4].fvalue < (float)-1.5712811947)) {
    result[3] += 0.025697848;
  } else {
    if ( (data[13].missing != -1) && (data[13].fvalue < (float)1.6964927912)) {
      if ( (data[8].missing != -1) && (data[8].fvalue < (float)-0.21442578733)) {
        result[3] += -0.035211522;
      } else {
        if ( (data[11].missing != -1) && (data[11].fvalue < (float)-0.26087924838)) {
          result[3] += 0.028426586;
        } else {
          if ( (data[8].missing != -1) && (data[8].fvalue < (float)-0.19620859623)) {
            result[3] += -0.03299157;
          } else {
            if ( (data[12].missing != -1) && (data[12].fvalue < (float)-0.70902597904)) {
              if ( (data[16].missing != -1) && (data[16].fvalue < (float)0.027447698638)) {
                result[3] += 0.00088907976;
              } else {
                result[3] += 0.032867383;
              }
            } else {
              if ( (data[8].missing != -1) && (data[8].fvalue < (float)-0.12956127524)) {
                result[3] += -0.024213273;
              } else {
                result[3] += 0.0020121797;
              }
            }
          }
        }
      }
    } else {
      result[3] += 0.024153559;
    }
  }
  if ( (data[10].missing != -1) && (data[10].fvalue < (float)-1.2233704329)) {
    result[0] += -0.025930887;
  } else {
    if ( (data[11].missing != -1) && (data[11].fvalue < (float)-0.25357052684)) {
      if ( (data[8].missing != -1) && (data[8].fvalue < (float)-0.21625265479)) {
        result[0] += -0.002674832;
      } else {
        if ( (data[3].missing != -1) && (data[3].fvalue < (float)-0.55354166031)) {
          result[0] += 0.004086933;
        } else {
          result[0] += 0.045365747;
        }
      }
    } else {
      if ( (data[9].missing != -1) && (data[9].fvalue < (float)-0.35524612665)) {
        result[0] += -0.019575637;
      } else {
        if ( (data[3].missing != -1) && (data[3].fvalue < (float)-0.35361146927)) {
          if ( (data[13].missing != -1) && (data[13].fvalue < (float)-0.6045524478)) {
            result[0] += 0.03217174;
          } else {
            result[0] += 0.00028556978;
          }
        } else {
          if ( (data[12].missing != -1) && (data[12].fvalue < (float)-0.9207880497)) {
            if ( (data[7].missing != -1) && (data[7].fvalue < (float)1.1750278473)) {
              result[0] += 0.029525658;
            } else {
              result[0] += -0.003217452;
            }
          } else {
            if ( (data[14].missing != -1) && (data[14].fvalue < (float)0.1809091419)) {
              result[0] += -0.032060053;
            } else {
              if ( (data[12].missing != -1) && (data[12].fvalue < (float)0.010684866458)) {
                result[0] += 0.020968204;
              } else {
                result[0] += -0.0069062444;
              }
            }
          }
        }
      }
    }
  }
  if ( (data[5].missing != -1) && (data[5].fvalue < (float)-0.39917689562)) {
    result[1] += -0.029577201;
  } else {
    if ( (data[12].missing != -1) && (data[12].fvalue < (float)0.1261908561)) {
      if ( (data[14].missing != -1) && (data[14].fvalue < (float)-0.53528237343)) {
        if ( (data[11].missing != -1) && (data[11].fvalue < (float)-0.24807538092)) {
          if ( (data[5].missing != -1) && (data[5].fvalue < (float)-0.24164952338)) {
            result[1] += 0.022799475;
          } else {
            result[1] += -0.041497145;
          }
        } else {
          if ( (data[15].missing != -1) && (data[15].fvalue < (float)-1.3751341105)) {
            result[1] += 1.9873874e-05;
          } else {
            result[1] += 0.04159206;
          }
        }
      } else {
        result[1] += -0.025556246;
      }
    } else {
      result[1] += 0.036890876;
    }
  }
  if ( (data[8].missing != -1) && (data[8].fvalue < (float)-0.13294763863)) {
    if ( (data[11].missing != -1) && (data[11].fvalue < (float)-0.22117689252)) {
      if ( (data[8].missing != -1) && (data[8].fvalue < (float)-0.20368315279)) {
        if ( (data[6].missing != -1) && (data[6].fvalue < (float)0.64755177498)) {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)-0.59347981215)) {
            result[2] += 0.009403153;
          } else {
            result[2] += -0.025840506;
          }
        } else {
          if ( (data[0].missing != -1) && (data[0].fvalue < (float)-0.74722385406)) {
            result[2] += 0.030924106;
          } else {
            result[2] += 0.015626429;
          }
        }
      } else {
        if ( (data[13].missing != -1) && (data[13].fvalue < (float)-0.65177553892)) {
          result[2] += 0.016048243;
        } else {
          if ( (data[11].missing != -1) && (data[11].fvalue < (float)-0.23627480865)) {
            result[2] += -0.04635958;
          } else {
            result[2] += -0.011442638;
          }
        }
      }
    } else {
      if ( (data[12].missing != -1) && (data[12].fvalue < (float)-0.5130815506)) {
        if ( (data[13].missing != -1) && (data[13].fvalue < (float)0.90258133411)) {
          result[2] += -0.0014970171;
        } else {
          result[2] += -0.007220987;
        }
      } else {
        if ( (data[12].missing != -1) && (data[12].fvalue < (float)0.093780785799)) {
          result[2] += 0.048525155;
        } else {
          result[2] += 0.015368082;
        }
      }
    }
  } else {
    if ( (data[3].missing != -1) && (data[3].fvalue < (float)-0.09566282481)) {
      if ( (data[0].missing != -1) && (data[0].fvalue < (float)0.68868225813)) {
        result[2] += -0.017103793;
      } else {
        result[2] += 0.022775192;
      }
    } else {
      result[2] += -0.03045632;
    }
  }
  if ( (data[16].missing != -1) && (data[16].fvalue < (float)0.053103368729)) {
    if ( (data[2].missing != -1) && (data[2].fvalue < (float)-0.27207258344)) {
      result[3] += 0.021054247;
    } else {
      if ( (data[8].missing != -1) && (data[8].fvalue < (float)-0.21442578733)) {
        result[3] += -0.027448235;
      } else {
        if ( (data[16].missing != -1) && (data[16].fvalue < (float)0.011750927195)) {
          if ( (data[0].missing != -1) && (data[0].fvalue < (float)-0.20608408749)) {
            result[3] += 0.026728919;
          } else {
            if ( (data[12].missing != -1) && (data[12].fvalue < (float)0.56249433756)) {
              result[3] += -0.025999213;
            } else {
              result[3] += 0.009853493;
            }
          }
        } else {
          if ( (data[11].missing != -1) && (data[11].fvalue < (float)-0.23548963666)) {
            result[3] += 0.010286577;
          } else {
            if ( (data[13].missing != -1) && (data[13].fvalue < (float)0.47263112664)) {
              if ( (data[14].missing != -1) && (data[14].fvalue < (float)0.37157514691)) {
                result[3] += 0.014868601;
              } else {
                result[3] += -0.024676312;
              }
            } else {
              result[3] += -0.042006638;
            }
          }
        }
      }
    }
  } else {
    if ( (data[16].missing != -1) && (data[16].fvalue < (float)0.085194684565)) {
      if ( (data[10].missing != -1) && (data[10].fvalue < (float)0.96652847528)) {
        result[3] += 0.009548771;
      } else {
        result[3] += 0.041731924;
      }
    } else {
      result[3] += -0.012700918;
    }
  }
  if ( (data[13].missing != -1) && (data[13].fvalue < (float)0.90779399872)) {
    if ( (data[12].missing != -1) && (data[12].fvalue < (float)-0.79302626848)) {
      result[0] += -0.032523297;
    } else {
      if ( (data[7].missing != -1) && (data[7].fvalue < (float)-0.034397810698)) {
        if ( (data[6].missing != -1) && (data[6].fvalue < (float)-0.35151079297)) {
          if ( (data[6].missing != -1) && (data[6].fvalue < (float)-0.7999060154)) {
            if ( (data[12].missing != -1) && (data[12].fvalue < (float)0.56249433756)) {
              result[0] += 0.021336732;
            } else {
              result[0] += -0.019609949;
            }
          } else {
            result[0] += 0.025970433;
          }
        } else {
          if ( (data[12].missing != -1) && (data[12].fvalue < (float)0.99250650406)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)0.94407975674)) {
              if ( (data[5].missing != -1) && (data[5].fvalue < (float)-0.19134612381)) {
                result[0] += -0.01028162;
              } else {
                result[0] += -0.042951256;
              }
            } else {
              result[0] += -0.00045878356;
            }
          } else {
            result[0] += 0.009776118;
          }
        }
      } else {
        if ( (data[6].missing != -1) && (data[6].fvalue < (float)-0.05884642154)) {
          result[0] += -0.0019643388;
        } else {
          result[0] += 0.040155876;
        }
      }
    }
  } else {
    if ( (data[13].missing != -1) && (data[13].fvalue < (float)1.3775569201)) {
      if ( (data[8].missing != -1) && (data[8].fvalue < (float)-0.21392957866)) {
        result[0] += 0.04447474;
      } else {
        result[0] += 0.009587444;
      }
    } else {
      if ( (data[13].missing != -1) && (data[13].fvalue < (float)1.8422523737)) {
        result[0] += -0.019774972;
      } else {
        result[0] += 0.013943969;
      }
    }
  }
  if ( (data[10].missing != -1) && (data[10].fvalue < (float)1.6924813986)) {
    if ( (data[9].missing != -1) && (data[9].fvalue < (float)-1.2174545527)) {
      result[1] += 0.029478747;
    } else {
      if ( (data[14].missing != -1) && (data[14].fvalue < (float)-0.60067504644)) {
        if ( (data[11].missing != -1) && (data[11].fvalue < (float)-0.24807538092)) {
          if ( (data[16].missing != -1) && (data[16].fvalue < (float)-0.0004766578495)) {
            result[1] += 0.01583436;
          } else {
            result[1] += -0.019715503;
          }
        } else {
          result[1] += 0.024348559;
        }
      } else {
        if ( (data[12].missing != -1) && (data[12].fvalue < (float)0.15007823706)) {
          result[1] += -0.031605598;
        } else {
          result[1] += -0.009553923;
        }
      }
    }
  } else {
    result[1] += -0.029050836;
  }
  if ( (data[10].missing != -1) && (data[10].fvalue < (float)1.0438103676)) {
    if ( (data[0].missing != -1) && (data[0].fvalue < (float)0.91816103458)) {
      if ( (data[6].missing != -1) && (data[6].fvalue < (float)1.4019529819)) {
        if ( (data[16].missing != -1) && (data[16].fvalue < (float)0.069090053439)) {
          if ( (data[5].missing != -1) && (data[5].fvalue < (float)0.46061888337)) {
            if ( (data[6].missing != -1) && (data[6].fvalue < (float)0.0025505779777)) {
              if ( (data[6].missing != -1) && (data[6].fvalue < (float)-0.5930570364)) {
                result[2] += 0.012695621;
              } else {
                result[2] += -0.008193168;
              }
            } else {
              if ( (data[9].missing != -1) && (data[9].fvalue < (float)0.23856493831)) {
                result[2] += 0.031470444;
              } else {
                result[2] += 0.004516782;
              }
            }
          } else {
            result[2] += -0.017692054;
          }
        } else {
          result[2] += -0.03236554;
        }
      } else {
        result[2] += 0.029355688;
      }
    } else {
      result[2] += -0.022636766;
    }
  } else {
    result[2] += -0.027490733;
  }
  if ( (data[6].missing != -1) && (data[6].fvalue < (float)1.009770751)) {
    if ( (data[16].missing != -1) && (data[16].fvalue < (float)0.070572808385)) {
      if ( (data[5].missing != -1) && (data[5].fvalue < (float)0.30486577749)) {
        if ( (data[16].missing != -1) && (data[16].fvalue < (float)0.00039073103108)) {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)0.32902181149)) {
            if ( (data[15].missing != -1) && (data[15].fvalue < (float)0.28146448731)) {
              result[3] += 0.01936195;
            } else {
              result[3] += -0.008840048;
            }
          } else {
            result[3] += -0.021959173;
          }
        } else {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)0.32902181149)) {
            if ( (data[6].missing != -1) && (data[6].fvalue < (float)-0.62424135208)) {
              result[3] += -0.02103539;
            } else {
              if ( (data[7].missing != -1) && (data[7].fvalue < (float)-0.18220323324)) {
                result[3] += 0.03887167;
              } else {
                result[3] += -0.008719869;
              }
            }
          } else {
            if ( (data[11].missing != -1) && (data[11].fvalue < (float)-0.0027782414109)) {
              result[3] += 0.042461164;
            } else {
              result[3] += 0.006016073;
            }
          }
        }
      } else {
        result[3] += -0.023151292;
      }
    } else {
      result[3] += 0.031138027;
    }
  } else {
    if ( (data[10].missing != -1) && (data[10].fvalue < (float)0.95288157463)) {
      result[3] += -0.032817006;
    } else {
      result[3] += 0.000186868;
    }
  }
  if ( (data[8].missing != -1) && (data[8].fvalue < (float)-0.21849969029)) {
    result[0] += -0.020916916;
  } else {
    if ( (data[14].missing != -1) && (data[14].fvalue < (float)0.5266110301)) {
      if ( (data[0].missing != -1) && (data[0].fvalue < (float)0.13511149585)) {
        if ( (data[6].missing != -1) && (data[6].fvalue < (float)0.84444600344)) {
          if ( (data[10].missing != -1) && (data[10].fvalue < (float)0.018758390099)) {
            result[0] += -0.010113189;
          } else {
            if ( (data[16].missing != -1) && (data[16].fvalue < (float)0.021485496312)) {
              result[0] += 0.029249761;
            } else {
              if ( (data[6].missing != -1) && (data[6].fvalue < (float)-0.05884642154)) {
                result[0] += -0.011231343;
              } else {
                result[0] += 0.021778299;
              }
            }
          }
        } else {
          result[0] += -0.01930078;
        }
      } else {
        if ( (data[16].missing != -1) && (data[16].fvalue < (float)0.0093680135906)) {
          result[0] += 0.0064098756;
        } else {
          result[0] += 0.039746005;
        }
      }
    } else {
      if ( (data[14].missing != -1) && (data[14].fvalue < (float)0.59280955791)) {
        result[0] += -0.04302464;
      } else {
        if ( (data[5].missing != -1) && (data[5].fvalue < (float)-0.15271317959)) {
          if ( (data[8].missing != -1) && (data[8].fvalue < (float)0.023287266493)) {
            if ( (data[14].missing != -1) && (data[14].fvalue < (float)0.74485391378)) {
              result[0] += 0.0017585481;
            } else {
              result[0] += -0.03607297;
            }
          } else {
            result[0] += 0.00897535;
          }
        } else {
          if ( (data[5].missing != -1) && (data[5].fvalue < (float)0.07551728934)) {
            result[0] += 0.041857325;
          } else {
            if ( (data[11].missing != -1) && (data[11].fvalue < (float)0.13876245916)) {
              result[0] += 0.015291865;
            } else {
              result[0] += -0.021058993;
            }
          }
        }
      }
    }
  }
  if ( (data[5].missing != -1) && (data[5].fvalue < (float)-0.41068267822)) {
    result[1] += -0.032852087;
  } else {
    if ( (data[5].missing != -1) && (data[5].fvalue < (float)-0.25318676233)) {
      if ( (data[6].missing != -1) && (data[6].fvalue < (float)0.11079970002)) {
        result[1] += 0.008012039;
      } else {
        result[1] += 0.03723483;
      }
    } else {
      if ( (data[6].missing != -1) && (data[6].fvalue < (float)0.72252488136)) {
        result[1] += -0.026996383;
      } else {
        if ( (data[0].missing != -1) && (data[0].fvalue < (float)-0.80280572176)) {
          result[1] += 0.016115589;
        } else {
          result[1] += -0.014645574;
        }
      }
    }
  }
  if ( (data[16].missing != -1) && (data[16].fvalue < (float)0.093919016421)) {
    if ( (data[16].missing != -1) && (data[16].fvalue < (float)0.053103368729)) {
      if ( (data[16].missing != -1) && (data[16].fvalue < (float)0.034552905709)) {
        if ( (data[10].missing != -1) && (data[10].fvalue < (float)-0.89206194878)) {
          if ( (data[16].missing != -1) && (data[16].fvalue < (float)-0.019200904295)) {
            result[2] += -0.004466449;
          } else {
            result[2] += 0.03183897;
          }
        } else {
          if ( (data[6].missing != -1) && (data[6].fvalue < (float)0.82943028212)) {
            if ( (data[8].missing != -1) && (data[8].fvalue < (float)-0.21849969029)) {
              result[2] += 0.02767972;
            } else {
              if ( (data[11].missing != -1) && (data[11].fvalue < (float)-0.10747343302)) {
                result[2] += -0.015089646;
              } else {
                result[2] += 0.012415013;
              }
            }
          } else {
            result[2] += -0.038737547;
          }
        }
      } else {
        if ( (data[12].missing != -1) && (data[12].fvalue < (float)0.10337144136)) {
          result[2] += 0.03152196;
        } else {
          result[2] += -0.0043036593;
        }
      }
    } else {
      if ( (data[7].missing != -1) && (data[7].fvalue < (float)-0.44216892123)) {
        result[2] += -0.039942697;
      } else {
        result[2] += -0.011370876;
      }
    }
  } else {
    result[2] += 0.029419715;
  }
  if ( (data[3].missing != -1) && (data[3].fvalue < (float)1.2488398552)) {
    if ( (data[15].missing != -1) && (data[15].fvalue < (float)-0.27798226476)) {
      if ( (data[6].missing != -1) && (data[6].fvalue < (float)-0.081195987761)) {
        if ( (data[15].missing != -1) && (data[15].fvalue < (float)-0.80401325226)) {
          result[3] += -0.009260111;
        } else {
          result[3] += 0.02134719;
        }
      } else {
        if ( (data[0].missing != -1) && (data[0].fvalue < (float)-0.80280572176)) {
          result[3] += -0.021360788;
        } else {
          result[3] += -0.048741184;
        }
      }
    } else {
      if ( (data[14].missing != -1) && (data[14].fvalue < (float)0.76945388317)) {
        if ( (data[10].missing != -1) && (data[10].fvalue < (float)-0.62923032045)) {
          result[3] += -0.008220908;
        } else {
          if ( (data[12].missing != -1) && (data[12].fvalue < (float)-0.24093179405)) {
            result[3] += 0.00072932325;
          } else {
            if ( (data[6].missing != -1) && (data[6].fvalue < (float)-0.28908264637)) {
              result[3] += 0.009099864;
            } else {
              if ( (data[10].missing != -1) && (data[10].fvalue < (float)-0.2608923018)) {
                result[3] += 0.056359477;
              } else {
                result[3] += 0.014663902;
              }
            }
          }
        }
      } else {
        if ( (data[7].missing != -1) && (data[7].fvalue < (float)-1.4934316874)) {
          result[3] += 0.012932318;
        } else {
          if ( (data[16].missing != -1) && (data[16].fvalue < (float)0.028983056545)) {
            result[3] += -0.03451446;
          } else {
            result[3] += -0.0037940983;
          }
        }
      }
    }
  } else {
    if ( (data[10].missing != -1) && (data[10].fvalue < (float)1.4962197542)) {
      result[3] += 0.03618543;
    } else {
      result[3] += 0.005530964;
    }
  }
  if ( (data[16].missing != -1) && (data[16].fvalue < (float)-0.031885597855)) {
    result[0] += -0.015953163;
  } else {
    if ( (data[5].missing != -1) && (data[5].fvalue < (float)-0.41925215721)) {
      if ( (data[10].missing != -1) && (data[10].fvalue < (float)-0.23168973625)) {
        result[0] += 0.002133539;
      } else {
        result[0] += 0.034262527;
      }
    } else {
      if ( (data[2].missing != -1) && (data[2].fvalue < (float)-0.069487594068)) {
        result[0] += -0.019604718;
      } else {
        if ( (data[16].missing != -1) && (data[16].fvalue < (float)0.048564616591)) {
          if ( (data[6].missing != -1) && (data[6].fvalue < (float)0.83127039671)) {
            if ( (data[11].missing != -1) && (data[11].fvalue < (float)0.22571912408)) {
              if ( (data[8].missing != -1) && (data[8].fvalue < (float)-0.19956482947)) {
                result[0] += 0.019179713;
              } else {
                result[0] += -0.013181323;
              }
            } else {
              result[0] += 0.02756085;
            }
          } else {
            result[0] += 0.031591963;
          }
        } else {
          if ( (data[13].missing != -1) && (data[13].fvalue < (float)0.086246587336)) {
            result[0] += -0.023166195;
          } else {
            result[0] += 0.0028441742;
          }
        }
      }
    }
  }
  if ( (data[8].missing != -1) && (data[8].fvalue < (float)-0.18918262422)) {
    if ( (data[5].missing != -1) && (data[5].fvalue < (float)-0.40100291371)) {
      result[1] += -0.02501314;
    } else {
      if ( (data[16].missing != -1) && (data[16].fvalue < (float)-0.0085348961875)) {
        result[1] += 0.03734998;
      } else {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)-0.099990054965)) {
          if ( (data[8].missing != -1) && (data[8].fvalue < (float)-0.21131891012)) {
            if ( (data[6].missing != -1) && (data[6].fvalue < (float)0.70052707195)) {
              result[1] += -0.008518072;
            } else {
              result[1] += 0.019940963;
            }
          } else {
            result[1] += -0.03409214;
          }
        } else {
          result[1] += 0.028224135;
        }
      }
    }
  } else {
    result[1] += -0.034053475;
  }
  if ( (data[8].missing != -1) && (data[8].fvalue < (float)-0.0026854926255)) {
    if ( (data[16].missing != -1) && (data[16].fvalue < (float)-0.018707942218)) {
      if ( (data[16].missing != -1) && (data[16].fvalue < (float)-0.031885597855)) {
        result[2] += 0.011048821;
      } else {
        result[2] += -0.032448918;
      }
    } else {
      if ( (data[16].missing != -1) && (data[16].fvalue < (float)0.0029992943164)) {
        if ( (data[3].missing != -1) && (data[3].fvalue < (float)-0.40506112576)) {
          result[2] += 0.03757435;
        } else {
          result[2] += -0.0043006926;
        }
      } else {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)0.34409162402)) {
          if ( (data[7].missing != -1) && (data[7].fvalue < (float)-0.32512119412)) {
            if ( (data[6].missing != -1) && (data[6].fvalue < (float)0.65618908405)) {
              result[2] += -0.040946074;
            } else {
              result[2] += -0.016781999;
            }
          } else {
            if ( (data[10].missing != -1) && (data[10].fvalue < (float)-0.16315969825)) {
              result[2] += 0.028812746;
            } else {
              if ( (data[16].missing != -1) && (data[16].fvalue < (float)0.013591933995)) {
                result[2] += -0.029217267;
              } else {
                result[2] += 0.0054544336;
              }
            }
          }
        } else {
          if ( (data[8].missing != -1) && (data[8].fvalue < (float)-0.12803848088)) {
            if ( (data[11].missing != -1) && (data[11].fvalue < (float)-0.1759417206)) {
              result[2] += 0.011519737;
            } else {
              result[2] += -0.011805624;
            }
          } else {
            result[2] += 0.033799656;
          }
        }
      }
    }
  } else {
    result[2] += -0.02345413;
  }
  if ( (data[3].missing != -1) && (data[3].fvalue < (float)-0.25331288576)) {
    if ( (data[11].missing != -1) && (data[11].fvalue < (float)-0.15529032052)) {
      if ( (data[5].missing != -1) && (data[5].fvalue < (float)-0.28371223807)) {
        result[3] += -0.044245522;
      } else {
        result[3] += -0.018349906;
      }
    } else {
      result[3] += 0.009617868;
    }
  } else {
    if ( (data[5].missing != -1) && (data[5].fvalue < (float)-0.1428437233)) {
      if ( (data[6].missing != -1) && (data[6].fvalue < (float)-0.33870640397)) {
        if ( (data[6].missing != -1) && (data[6].fvalue < (float)-0.74072551727)) {
          if ( (data[13].missing != -1) && (data[13].fvalue < (float)-0.45244047046)) {
            result[3] += 0.012565863;
          } else {
            result[3] += -0.013120259;
          }
        } else {
          result[3] += 0.02423846;
        }
      } else {
        if ( (data[11].missing != -1) && (data[11].fvalue < (float)-0.24906308949)) {
          result[3] += -0.015868863;
        } else {
          result[3] += -0.03738972;
        }
      }
    } else {
      if ( (data[9].missing != -1) && (data[9].fvalue < (float)-0.61510449648)) {
        result[3] += 0.040940657;
      } else {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)0.26863145828)) {
          result[3] += -0.02759484;
        } else {
          if ( (data[0].missing != -1) && (data[0].fvalue < (float)1.2524466515)) {
            if ( (data[8].missing != -1) && (data[8].fvalue < (float)0.011566273868)) {
              result[3] += 0.00062918273;
            } else {
              result[3] += 0.038755704;
            }
          } else {
            result[3] += -0.020016205;
          }
        }
      }
    }
  }
  if ( (data[1].missing != -1) && (data[1].fvalue < (float)-0.091976709664)) {
    if ( (data[2].missing != -1) && (data[2].fvalue < (float)0.09942278266)) {
      result[0] += -0.025682533;
    } else {
      if ( (data[3].missing != -1) && (data[3].fvalue < (float)-0.58809620142)) {
        result[0] += -0.0030346476;
      } else {
        if ( (data[16].missing != -1) && (data[16].fvalue < (float)0.013839308172)) {
          result[0] += 0.04293307;
        } else {
          result[0] += 0.019407837;
        }
      }
    }
  } else {
    if ( (data[5].missing != -1) && (data[5].fvalue < (float)1.667165041)) {
      if ( (data[6].missing != -1) && (data[6].fvalue < (float)0.91162836552)) {
        if ( (data[11].missing != -1) && (data[11].fvalue < (float)0.37818393111)) {
          if ( (data[5].missing != -1) && (data[5].fvalue < (float)-0.51371687651)) {
            result[0] += 0.007472157;
          } else {
            if ( (data[13].missing != -1) && (data[13].fvalue < (float)-1.2934023142)) {
              result[0] += -0.04489669;
            } else {
              if ( (data[10].missing != -1) && (data[10].fvalue < (float)-0.8168155551)) {
                result[0] += 0.006926016;
              } else {
                result[0] += -0.020672109;
              }
            }
          }
        } else {
          if ( (data[8].missing != -1) && (data[8].fvalue < (float)0.39282861352)) {
            result[0] += 0.03343081;
          } else {
            result[0] += -0.017443556;
          }
        }
      } else {
        if ( (data[8].missing != -1) && (data[8].fvalue < (float)-0.20263934135)) {
          result[0] += -0.010291859;
        } else {
          result[0] += 0.0435547;
        }
      }
    } else {
      result[0] += -0.033477142;
    }
  }
  if ( (data[10].missing != -1) && (data[10].fvalue < (float)-0.044407144189)) {
    result[1] += -0.02367648;
  } else {
    if ( (data[10].missing != -1) && (data[10].fvalue < (float)0.72595649958)) {
      if ( (data[12].missing != -1) && (data[12].fvalue < (float)-0.83629524708)) {
        result[1] += 0.008386308;
      } else {
        result[1] += 0.034080893;
      }
    } else {
      if ( (data[0].missing != -1) && (data[0].fvalue < (float)-1.4317775965)) {
        result[1] += 0.01868486;
      } else {
        if ( (data[14].missing != -1) && (data[14].fvalue < (float)-1.1134285927)) {
          result[1] += -0.040177174;
        } else {
          result[1] += -0.0038723846;
        }
      }
    }
  }
  if ( (data[3].missing != -1) && (data[3].fvalue < (float)-1.2235993147)) {
    result[2] += 0.032709703;
  } else {
    if ( (data[11].missing != -1) && (data[11].fvalue < (float)-0.19597181678)) {
      if ( (data[13].missing != -1) && (data[13].fvalue < (float)0.82622277737)) {
        if ( (data[14].missing != -1) && (data[14].fvalue < (float)0.43576472998)) {
          if ( (data[8].missing != -1) && (data[8].fvalue < (float)-0.19264282286)) {
            if ( (data[10].missing != -1) && (data[10].fvalue < (float)0.19718895853)) {
              result[2] += 0.03240588;
            } else {
              result[2] += 0.0036067162;
            }
          } else {
            result[2] += -0.010266888;
          }
        } else {
          if ( (data[12].missing != -1) && (data[12].fvalue < (float)0.68646353483)) {
            result[2] += -0.03424634;
          } else {
            result[2] += 0.0006262138;
          }
        }
      } else {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)-1.3696166277)) {
          result[2] += 0.0054823393;
        } else {
          result[2] += -0.039548468;
        }
      }
    } else {
      if ( (data[5].missing != -1) && (data[5].fvalue < (float)-0.15271317959)) {
        if ( (data[10].missing != -1) && (data[10].fvalue < (float)-0.49577108026)) {
          result[2] += 0.0029694322;
        } else {
          result[2] += -0.026777074;
        }
      } else {
        if ( (data[16].missing != -1) && (data[16].fvalue < (float)0.010555835441)) {
          result[2] += 0.037365574;
        } else {
          if ( (data[13].missing != -1) && (data[13].fvalue < (float)-0.52175492048)) {
            result[2] += -0.014488776;
          } else {
            if ( (data[16].missing != -1) && (data[16].fvalue < (float)0.048564616591)) {
              result[2] += -0.008775692;
            } else {
              result[2] += 0.037311364;
            }
          }
        }
      }
    }
  }
  if ( (data[5].missing != -1) && (data[5].fvalue < (float)-0.48074766994)) {
    result[3] += -0.022382716;
  } else {
    if ( (data[11].missing != -1) && (data[11].fvalue < (float)-0.1723369211)) {
      if ( (data[7].missing != -1) && (data[7].fvalue < (float)-0.33559387922)) {
        result[3] += 0.032382213;
      } else {
        if ( (data[3].missing != -1) && (data[3].fvalue < (float)-0.23574270308)) {
          result[3] += -0.024554642;
        } else {
          if ( (data[14].missing != -1) && (data[14].fvalue < (float)-1.1276538372)) {
            result[3] += 0.027456868;
          } else {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)-0.61510449648)) {
              result[3] += 0.014031911;
            } else {
              result[3] += -0.014004844;
            }
          }
        }
      }
    } else {
      if ( (data[6].missing != -1) && (data[6].fvalue < (float)-0.92730844021)) {
        result[3] += 0.022692343;
      } else {
        if ( (data[11].missing != -1) && (data[11].fvalue < (float)-0.12281290442)) {
          result[3] += -0.026966134;
        } else {
          if ( (data[16].missing != -1) && (data[16].fvalue < (float)0.020611567423)) {
            result[3] += -0.023609048;
          } else {
            if ( (data[13].missing != -1) && (data[13].fvalue < (float)-0.069796450436)) {
              result[3] += 0.020053502;
            } else {
              result[3] += -0.009971876;
            }
          }
        }
      }
    }
  }
  if ( (data[6].missing != -1) && (data[6].fvalue < (float)-0.39193168283)) {
    if ( (data[7].missing != -1) && (data[7].fvalue < (float)0.11927641928)) {
      if ( (data[14].missing != -1) && (data[14].fvalue < (float)0.33318528533)) {
        result[0] += 0.044550166;
      } else {
        if ( (data[15].missing != -1) && (data[15].fvalue < (float)0.86124765873)) {
          if ( (data[0].missing != -1) && (data[0].fvalue < (float)0.68868225813)) {
            result[0] += 0.0116655575;
          } else {
            result[0] += -0.024042128;
          }
        } else {
          result[0] += 0.021185623;
        }
      }
    } else {
      result[0] += -0.015599583;
    }
  } else {
    if ( (data[11].missing != -1) && (data[11].fvalue < (float)0.0071482318453)) {
      if ( (data[3].missing != -1) && (data[3].fvalue < (float)0.030459327623)) {
        if ( (data[16].missing != -1) && (data[16].fvalue < (float)0.040303114802)) {
          if ( (data[11].missing != -1) && (data[11].fvalue < (float)-0.23780336976)) {
            result[0] += -0.011930662;
          } else {
            result[0] += -0.044158287;
          }
        } else {
          if ( (data[12].missing != -1) && (data[12].fvalue < (float)0.79552692175)) {
            result[0] += -0.00787241;
          } else {
            result[0] += 0.022625986;
          }
        }
      } else {
        if ( (data[11].missing != -1) && (data[11].fvalue < (float)-0.14802908897)) {
          if ( (data[8].missing != -1) && (data[8].fvalue < (float)-0.21442578733)) {
            result[0] += 0.014251373;
          } else {
            result[0] += -0.013014369;
          }
        } else {
          result[0] += 0.043334592;
        }
      }
    } else {
      result[0] += -0.03340746;
    }
  }
  if ( (data[16].missing != -1) && (data[16].fvalue < (float)-0.019668526947)) {
    result[1] += 0.01918636;
  } else {
    if ( (data[16].missing != -1) && (data[16].fvalue < (float)0.076959848404)) {
      if ( (data[0].missing != -1) && (data[0].fvalue < (float)-0.95640921593)) {
        if ( (data[11].missing != -1) && (data[11].fvalue < (float)-0.26135647297)) {
          if ( (data[6].missing != -1) && (data[6].fvalue < (float)0.23682963848)) {
            result[1] += -0.035151273;
          } else {
            result[1] += -0.008563893;
          }
        } else {
          result[1] += 0.010024616;
        }
      } else {
        if ( (data[11].missing != -1) && (data[11].fvalue < (float)-0.19872634113)) {
          result[1] += -0.017696735;
        } else {
          result[1] += -0.042933486;
        }
      }
    } else {
      result[1] += 0.016058806;
    }
  }
  if ( (data[8].missing != -1) && (data[8].fvalue < (float)-0.028149537742)) {
    if ( (data[3].missing != -1) && (data[3].fvalue < (float)-1.2354074717)) {
      result[2] += 0.029533377;
    } else {
      if ( (data[0].missing != -1) && (data[0].fvalue < (float)0.72153884172)) {
        if ( (data[0].missing != -1) && (data[0].fvalue < (float)0.59084939957)) {
          if ( (data[13].missing != -1) && (data[13].fvalue < (float)-0.32171311975)) {
            if ( (data[6].missing != -1) && (data[6].fvalue < (float)-0.30391672254)) {
              result[2] += 0.0058017173;
            } else {
              result[2] += 0.029964602;
            }
          } else {
            if ( (data[7].missing != -1) && (data[7].fvalue < (float)0.27180051804)) {
              if ( (data[7].missing != -1) && (data[7].fvalue < (float)-0.18220323324)) {
                result[2] += -0.032353804;
              } else {
                result[2] += -0.010442813;
              }
            } else {
              if ( (data[7].missing != -1) && (data[7].fvalue < (float)0.46818193793)) {
                result[2] += 0.02873442;
              } else {
                result[2] += 0.0018749696;
              }
            }
          }
        } else {
          result[2] += -0.03281476;
        }
      } else {
        if ( (data[13].missing != -1) && (data[13].fvalue < (float)-1.1851713657)) {
          result[2] += 0.0017613418;
        } else {
          result[2] += 0.036423236;
        }
      }
    }
  } else {
    if ( (data[5].missing != -1) && (data[5].fvalue < (float)0.20715114474)) {
      result[2] += -0.029921168;
    } else {
      result[2] += -0.005313308;
    }
  }
  if ( (data[13].missing != -1) && (data[13].fvalue < (float)0.98732662201)) {
    if ( (data[13].missing != -1) && (data[13].fvalue < (float)0.84097009897)) {
      if ( (data[6].missing != -1) && (data[6].fvalue < (float)0.87583655119)) {
        if ( (data[3].missing != -1) && (data[3].fvalue < (float)-0.44355535507)) {
          if ( (data[6].missing != -1) && (data[6].fvalue < (float)-0.2457845062)) {
            result[3] += -0.009659906;
          } else {
            result[3] += 0.03247915;
          }
        } else {
          if ( (data[5].missing != -1) && (data[5].fvalue < (float)-0.44998666644)) {
            result[3] += -0.021244202;
          } else {
            if ( (data[2].missing != -1) && (data[2].fvalue < (float)0.13540814817)) {
              result[3] += 0.025297279;
            } else {
              if ( (data[3].missing != -1) && (data[3].fvalue < (float)1.0671726465)) {
                result[3] += -0.009148997;
              } else {
                result[3] += 0.01952449;
              }
            }
          }
        }
      } else {
        result[3] += -0.02777215;
      }
    } else {
      result[3] += 0.033243906;
    }
  } else {
    if ( (data[13].missing != -1) && (data[13].fvalue < (float)1.6390570402)) {
      result[3] += -0.025729364;
    } else {
      result[3] += 0.010668773;
    }
  }
  if ( (data[5].missing != -1) && (data[5].fvalue < (float)-0.41755524278)) {
    if ( (data[10].missing != -1) && (data[10].fvalue < (float)-0.23168973625)) {
      if ( (data[13].missing != -1) && (data[13].fvalue < (float)-0.59007966518)) {
        result[0] += 0.015623446;
      } else {
        result[0] += -0.009949748;
      }
    } else {
      if ( (data[3].missing != -1) && (data[3].fvalue < (float)0.64966541529)) {
        result[0] += 0.04270357;
      } else {
        result[0] += 0.009870603;
      }
    }
  } else {
    if ( (data[5].missing != -1) && (data[5].fvalue < (float)-0.25515717268)) {
      if ( (data[16].missing != -1) && (data[16].fvalue < (float)0.028035547584)) {
        if ( (data[1].missing != -1) && (data[1].fvalue < (float)-0.043292935938)) {
          result[0] += -0.040551808;
        } else {
          result[0] += -0.011926031;
        }
      } else {
        result[0] += 0.009481895;
      }
    } else {
      if ( (data[11].missing != -1) && (data[11].fvalue < (float)-0.25357052684)) {
        result[0] += 0.024143873;
      } else {
        if ( (data[0].missing != -1) && (data[0].fvalue < (float)0.59084939957)) {
          if ( (data[13].missing != -1) && (data[13].fvalue < (float)1.0310770273)) {
            if ( (data[5].missing != -1) && (data[5].fvalue < (float)-0.13195152581)) {
              result[0] += -0.006289478;
            } else {
              result[0] += -0.02966292;
            }
          } else {
            result[0] += 0.00649219;
          }
        } else {
          if ( (data[0].missing != -1) && (data[0].fvalue < (float)0.72153884172)) {
            result[0] += 0.0411507;
          } else {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)0.35766488314)) {
              result[0] += -0.016313823;
            } else {
              result[0] += 0.018838774;
            }
          }
        }
      }
    }
  }
  if ( (data[5].missing != -1) && (data[5].fvalue < (float)-0.41068267822)) {
    result[1] += -0.022222472;
  } else {
    if ( (data[5].missing != -1) && (data[5].fvalue < (float)-0.2904368639)) {
      if ( (data[14].missing != -1) && (data[14].fvalue < (float)-1.1020410061)) {
        result[1] += 0.008248399;
      } else {
        result[1] += 0.040491767;
      }
    } else {
      if ( (data[16].missing != -1) && (data[16].fvalue < (float)0.067746691406)) {
        if ( (data[8].missing != -1) && (data[8].fvalue < (float)-0.21338579059)) {
          if ( (data[11].missing != -1) && (data[11].fvalue < (float)-0.26135647297)) {
            result[1] += -0.014225944;
          } else {
            result[1] += 0.024662348;
          }
        } else {
          result[1] += -0.021968663;
        }
      } else {
        result[1] += 0.028672272;
      }
    }
  }
  if ( (data[16].missing != -1) && (data[16].fvalue < (float)0.053103368729)) {
    if ( (data[11].missing != -1) && (data[11].fvalue < (float)-0.10564584285)) {
      if ( (data[11].missing != -1) && (data[11].fvalue < (float)-0.14802908897)) {
        if ( (data[16].missing != -1) && (data[16].fvalue < (float)0.019959939644)) {
          if ( (data[5].missing != -1) && (data[5].fvalue < (float)-0.2067707926)) {
            if ( (data[10].missing != -1) && (data[10].fvalue < (float)-1.0263878107)) {
              result[2] += 0.029260028;
            } else {
              if ( (data[8].missing != -1) && (data[8].fvalue < (float)-0.2068105191)) {
                result[2] += 0.012761416;
              } else {
                result[2] += -0.021933649;
              }
            }
          } else {
            if ( (data[6].missing != -1) && (data[6].fvalue < (float)0.28376331925)) {
              result[2] += -0.033331912;
            } else {
              result[2] += 0.0017682901;
            }
          }
        } else {
          if ( (data[6].missing != -1) && (data[6].fvalue < (float)0.66552180052)) {
            result[2] += 0.030060539;
          } else {
            result[2] += -0.001365903;
          }
        }
      } else {
        result[2] += -0.03317011;
      }
    } else {
      if ( (data[3].missing != -1) && (data[3].fvalue < (float)-0.17497244477)) {
        result[2] += 0.031500727;
      } else {
        result[2] += 0.003900251;
      }
    }
  } else {
    if ( (data[5].missing != -1) && (data[5].fvalue < (float)1.8541356325)) {
      if ( (data[7].missing != -1) && (data[7].fvalue < (float)-0.44216892123)) {
        result[2] += -0.03973944;
      } else {
        result[2] += -0.00962385;
      }
    } else {
      result[2] += 0.008271321;
    }
  }
  if ( (data[6].missing != -1) && (data[6].fvalue < (float)1.0815649033)) {
    if ( (data[10].missing != -1) && (data[10].fvalue < (float)-0.72088116407)) {
      if ( (data[8].missing != -1) && (data[8].fvalue < (float)-0.12956127524)) {
        result[3] += -0.029645888;
      } else {
        result[3] += 0.0124968905;
      }
    } else {
      if ( (data[13].missing != -1) && (data[13].fvalue < (float)0.92155778408)) {
        if ( (data[8].missing != -1) && (data[8].fvalue < (float)0.17657822371)) {
          if ( (data[13].missing != -1) && (data[13].fvalue < (float)-0.069796450436)) {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)-0.14372131228)) {
              result[3] += 0.04184671;
            } else {
              if ( (data[7].missing != -1) && (data[7].fvalue < (float)-0.23054815829)) {
                result[3] += 0.003082227;
              } else {
                result[3] += 0.0232369;
              }
            }
          } else {
            if ( (data[13].missing != -1) && (data[13].fvalue < (float)0.61966365576)) {
              if ( (data[6].missing != -1) && (data[6].fvalue < (float)-0.081195987761)) {
                result[3] += 0.014872349;
              } else {
                result[3] += -0.024153808;
              }
            } else {
              result[3] += 0.0243389;
            }
          }
        } else {
          if ( (data[6].missing != -1) && (data[6].fvalue < (float)-0.5930570364)) {
            result[3] += 0.013996548;
          } else {
            result[3] += -0.026033556;
          }
        }
      } else {
        if ( (data[6].missing != -1) && (data[6].fvalue < (float)0.15546032786)) {
          result[3] += -0.028179208;
        } else {
          result[3] += 0.017953476;
        }
      }
    }
  } else {
    result[3] += -0.022410406;
  }
  if ( (data[3].missing != -1) && (data[3].fvalue < (float)0.84174287319)) {
    if ( (data[11].missing != -1) && (data[11].fvalue < (float)-0.23136755824)) {
      if ( (data[8].missing != -1) && (data[8].fvalue < (float)-0.18742009997)) {
        if ( (data[3].missing != -1) && (data[3].fvalue < (float)-0.5254278779)) {
          if ( (data[10].missing != -1) && (data[10].fvalue < (float)-0.89955693483)) {
            result[0] += -0.013300592;
          } else {
            result[0] += -0.001662927;
          }
        } else {
          if ( (data[10].missing != -1) && (data[10].fvalue < (float)0.14474117756)) {
            result[0] += 0.03373031;
          } else {
            result[0] += 0.00047138645;
          }
        }
      } else {
        result[0] += 0.039831597;
      }
    } else {
      if ( (data[6].missing != -1) && (data[6].fvalue < (float)-1.0832853317)) {
        result[0] += -0.02368657;
      } else {
        if ( (data[3].missing != -1) && (data[3].fvalue < (float)-0.38782459497)) {
          if ( (data[16].missing != -1) && (data[16].fvalue < (float)0.040853574872)) {
            result[0] += -0.022293096;
          } else {
            result[0] += 0.012468769;
          }
        } else {
          if ( (data[8].missing != -1) && (data[8].fvalue < (float)0.023287266493)) {
            if ( (data[14].missing != -1) && (data[14].fvalue < (float)0.49461621046)) {
              if ( (data[11].missing != -1) && (data[11].fvalue < (float)-0.16165800393)) {
                result[0] += -0.0018577281;
              } else {
                result[0] += 0.02809167;
              }
            } else {
              result[0] += -0.017112581;
            }
          } else {
            result[0] += 0.030888287;
          }
        }
      }
    }
  } else {
    if ( (data[5].missing != -1) && (data[5].fvalue < (float)-0.31662553549)) {
      result[0] += -0.03345562;
    } else {
      if ( (data[3].missing != -1) && (data[3].fvalue < (float)1.4000630379)) {
        result[0] += 0.019420294;
      } else {
        result[0] += -0.02542514;
      }
    }
  }
  if ( (data[10].missing != -1) && (data[10].fvalue < (float)1.6924813986)) {
    if ( (data[0].missing != -1) && (data[0].fvalue < (float)-1.4317775965)) {
      result[1] += 0.04065771;
    } else {
      if ( (data[12].missing != -1) && (data[12].fvalue < (float)-0.83629524708)) {
        if ( (data[12].missing != -1) && (data[12].fvalue < (float)-1.168685317)) {
          result[1] += -0.0017048083;
        } else {
          result[1] += -0.03528559;
        }
      } else {
        if ( (data[5].missing != -1) && (data[5].fvalue < (float)-0.045041881502)) {
          if ( (data[6].missing != -1) && (data[6].fvalue < (float)0.12343075126)) {
            result[1] += 0.0011595461;
          } else {
            result[1] += 0.048985437;
          }
        } else {
          result[1] += -0.009251501;
        }
      }
    }
  } else {
    result[1] += -0.025199855;
  }
  if ( (data[14].missing != -1) && (data[14].fvalue < (float)0.84300607443)) {
    if ( (data[16].missing != -1) && (data[16].fvalue < (float)0.076959848404)) {
      if ( (data[11].missing != -1) && (data[11].fvalue < (float)-0.10564584285)) {
        if ( (data[8].missing != -1) && (data[8].fvalue < (float)-0.13294763863)) {
          if ( (data[13].missing != -1) && (data[13].fvalue < (float)-0.32829239964)) {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)-0.99287575483)) {
              result[2] += 0.03516334;
            } else {
              if ( (data[3].missing != -1) && (data[3].fvalue < (float)-0.65983861685)) {
                result[2] += -0.011198019;
              } else {
                result[2] += 0.02128731;
              }
            }
          } else {
            if ( (data[0].missing != -1) && (data[0].fvalue < (float)0.10080797225)) {
              if ( (data[14].missing != -1) && (data[14].fvalue < (float)-1.3242353201)) {
                result[2] += -0.022819448;
              } else {
                result[2] += 0.008707514;
              }
            } else {
              result[2] += -0.04759637;
            }
          }
        } else {
          result[2] += -0.029236546;
        }
      } else {
        if ( (data[5].missing != -1) && (data[5].fvalue < (float)0.07551728934)) {
          result[2] += 0.006206405;
        } else {
          result[2] += 0.037097994;
        }
      }
    } else {
      result[2] += -0.026408052;
    }
  } else {
    result[2] += -0.03186211;
  }
  if ( (data[13].missing != -1) && (data[13].fvalue < (float)-1.3610372543)) {
    result[3] += -0.02226019;
  } else {
    if ( (data[13].missing != -1) && (data[13].fvalue < (float)-0.069796450436)) {
      if ( (data[0].missing != -1) && (data[0].fvalue < (float)0.12998342514)) {
        result[3] += 0.037140958;
      } else {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)0.25500673056)) {
          result[3] += -0.020654893;
        } else {
          if ( (data[10].missing != -1) && (data[10].fvalue < (float)-0.136102736)) {
            if ( (data[5].missing != -1) && (data[5].fvalue < (float)-0.30345416069)) {
              result[3] += 0.036483973;
            } else {
              result[3] += 0.0074195773;
            }
          } else {
            result[3] += -0.0013749041;
          }
        }
      }
    } else {
      if ( (data[5].missing != -1) && (data[5].fvalue < (float)-0.38272061944)) {
        result[3] += -0.026607921;
      } else {
        if ( (data[11].missing != -1) && (data[11].fvalue < (float)-0.24379661679)) {
          if ( (data[10].missing != -1) && (data[10].fvalue < (float)0.96652847528)) {
            result[3] += 0.0013743029;
          } else {
            result[3] += 0.032097995;
          }
        } else {
          if ( (data[12].missing != -1) && (data[12].fvalue < (float)-0.24093179405)) {
            if ( (data[15].missing != -1) && (data[15].fvalue < (float)-0.60108989477)) {
              result[3] += -0.00064620184;
            } else {
              result[3] += -0.030834382;
            }
          } else {
            result[3] += 0.009611154;
          }
        }
      }
    }
  }
  if ( (data[11].missing != -1) && (data[11].fvalue < (float)-0.25357052684)) {
    if ( (data[8].missing != -1) && (data[8].fvalue < (float)-0.20171427727)) {
      if ( (data[7].missing != -1) && (data[7].fvalue < (float)1.5922026634)) {
        if ( (data[15].missing != -1) && (data[15].fvalue < (float)0.043172951788)) {
          result[0] += -0.02441604;
        } else {
          result[0] += 0.0052217664;
        }
      } else {
        result[0] += 0.020380063;
      }
    } else {
      result[0] += 0.033462565;
    }
  } else {
    if ( (data[11].missing != -1) && (data[11].fvalue < (float)-0.24118795991)) {
      result[0] += -0.02828966;
    } else {
      if ( (data[0].missing != -1) && (data[0].fvalue < (float)0.73645710945)) {
        if ( (data[0].missing != -1) && (data[0].fvalue < (float)0.59084939957)) {
          if ( (data[8].missing != -1) && (data[8].fvalue < (float)-0.091414183378)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)-0.35524612665)) {
              result[0] += -0.01574345;
            } else {
              if ( (data[14].missing != -1) && (data[14].fvalue < (float)-0.84807819128)) {
                result[0] += 0.025400326;
              } else {
                result[0] += -0.00016197728;
              }
            }
          } else {
            result[0] += -0.02620994;
          }
        } else {
          result[0] += 0.027056012;
        }
      } else {
        if ( (data[8].missing != -1) && (data[8].fvalue < (float)0.2076176405)) {
          if ( (data[7].missing != -1) && (data[7].fvalue < (float)-1.0694894791)) {
            result[0] += -0.03771659;
          } else {
            result[0] += -0.012703118;
          }
        } else {
          result[0] += -0.00028806896;
        }
      }
    }
  }
  if ( (data[10].missing != -1) && (data[10].fvalue < (float)1.6924813986)) {
    if ( (data[3].missing != -1) && (data[3].fvalue < (float)0.86093568802)) {
      if ( (data[13].missing != -1) && (data[13].fvalue < (float)0.26775252819)) {
        result[1] += -0.025988722;
      } else {
        if ( (data[16].missing != -1) && (data[16].fvalue < (float)0.013591933995)) {
          result[1] += 0.01969306;
        } else {
          result[1] += -0.013312094;
        }
      }
    } else {
      if ( (data[10].missing != -1) && (data[10].fvalue < (float)1.2422872782)) {
        result[1] += 0.0028724708;
      } else {
        result[1] += 0.052703064;
      }
    }
  } else {
    result[1] += -0.032804865;
  }
  if ( (data[16].missing != -1) && (data[16].fvalue < (float)0.049449585378)) {
    if ( (data[16].missing != -1) && (data[16].fvalue < (float)-0.018707942218)) {
      if ( (data[16].missing != -1) && (data[16].fvalue < (float)-0.033748015761)) {
        result[2] += 0.002474665;
      } else {
        result[2] += -0.027861431;
      }
    } else {
      if ( (data[14].missing != -1) && (data[14].fvalue < (float)0.74485391378)) {
        if ( (data[7].missing != -1) && (data[7].fvalue < (float)0.18711844087)) {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)-0.94150280952)) {
            result[2] += 0.019942693;
          } else {
            if ( (data[11].missing != -1) && (data[11].fvalue < (float)-0.11270186305)) {
              if ( (data[10].missing != -1) && (data[10].fvalue < (float)-0.61503177881)) {
                result[2] += -0.044421252;
              } else {
                result[2] += -0.012481142;
              }
            } else {
              result[2] += 0.010006375;
            }
          }
        } else {
          if ( (data[11].missing != -1) && (data[11].fvalue < (float)-0.21764399111)) {
            if ( (data[0].missing != -1) && (data[0].fvalue < (float)-0.88791364431)) {
              result[2] += 0.0058065094;
            } else {
              result[2] += 0.046154257;
            }
          } else {
            result[2] += -0.013062291;
          }
        }
      } else {
        result[2] += 0.024477106;
      }
    }
  } else {
    if ( (data[3].missing != -1) && (data[3].fvalue < (float)0.046019136906)) {
      if ( (data[5].missing != -1) && (data[5].fvalue < (float)0.20715114474)) {
        result[2] += -0.024897251;
      } else {
        result[2] += 0.012764411;
      }
    } else {
      result[2] += -0.0330204;
    }
  }
  if ( (data[2].missing != -1) && (data[2].fvalue < (float)-0.27207258344)) {
    result[3] += 0.024513133;
  } else {
    if ( (data[9].missing != -1) && (data[9].fvalue < (float)-0.95808929205)) {
      if ( (data[9].missing != -1) && (data[9].fvalue < (float)-1.3426074982)) {
        result[3] += -0.0039783954;
      } else {
        result[3] += -0.028144134;
      }
    } else {
      if ( (data[10].missing != -1) && (data[10].fvalue < (float)0.8628975153)) {
        if ( (data[8].missing != -1) && (data[8].fvalue < (float)-0.19827085733)) {
          result[3] += -0.020821182;
        } else {
          if ( (data[11].missing != -1) && (data[11].fvalue < (float)-0.15352447331)) {
            if ( (data[11].missing != -1) && (data[11].fvalue < (float)-0.22332780063)) {
              result[3] += -0.0018289523;
            } else {
              if ( (data[16].missing != -1) && (data[16].fvalue < (float)0.018113873899)) {
                result[3] += 0.042241406;
              } else {
                result[3] += 0.0047572046;
              }
            }
          } else {
            if ( (data[12].missing != -1) && (data[12].fvalue < (float)1.0508075953)) {
              if ( (data[15].missing != -1) && (data[15].fvalue < (float)0.68589055538)) {
                result[3] += -0.0017932061;
              } else {
                result[3] += -0.039099175;
              }
            } else {
              result[3] += 0.020761907;
            }
          }
        }
      } else {
        if ( (data[16].missing != -1) && (data[16].fvalue < (float)0.051316402853)) {
          result[3] += -0.0028428151;
        } else {
          result[3] += 0.034948874;
        }
      }
    }
  }
  if ( (data[14].missing != -1) && (data[14].fvalue < (float)-0.42288470268)) {
    if ( (data[3].missing != -1) && (data[3].fvalue < (float)0.93932986259)) {
      if ( (data[0].missing != -1) && (data[0].fvalue < (float)-0.80280572176)) {
        result[0] += 0.013439578;
      } else {
        result[0] += -0.025451079;
      }
    } else {
      result[0] += -0.04384384;
    }
  } else {
    if ( (data[6].missing != -1) && (data[6].fvalue < (float)-0.28908264637)) {
      if ( (data[16].missing != -1) && (data[16].fvalue < (float)-0.029446952045)) {
        result[0] += -0.012809862;
      } else {
        if ( (data[13].missing != -1) && (data[13].fvalue < (float)-0.83080917597)) {
          result[0] += -0.0061698705;
        } else {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)-0.26975187659)) {
            result[0] += -0.00036991687;
          } else {
            if ( (data[6].missing != -1) && (data[6].fvalue < (float)-0.61820954084)) {
              result[0] += 0.0152194025;
            } else {
              result[0] += 0.038892146;
            }
          }
        }
      }
    } else {
      if ( (data[6].missing != -1) && (data[6].fvalue < (float)0.58737653494)) {
        if ( (data[6].missing != -1) && (data[6].fvalue < (float)0.07151145488)) {
          result[0] += -0.0073219375;
        } else {
          result[0] += -0.035377484;
        }
      } else {
        if ( (data[3].missing != -1) && (data[3].fvalue < (float)0.080768875778)) {
          if ( (data[13].missing != -1) && (data[13].fvalue < (float)-0.64628189802)) {
            result[0] += 0.015944256;
          } else {
            result[0] += -0.017047925;
          }
        } else {
          result[0] += 0.025733033;
        }
      }
    }
  }
  if ( (data[10].missing != -1) && (data[10].fvalue < (float)-0.010729790665)) {
    result[1] += -0.03084222;
  } else {
    if ( (data[10].missing != -1) && (data[10].fvalue < (float)1.6924813986)) {
      if ( (data[10].missing != -1) && (data[10].fvalue < (float)1.2422872782)) {
        if ( (data[10].missing != -1) && (data[10].fvalue < (float)0.77467292547)) {
          if ( (data[12].missing != -1) && (data[12].fvalue < (float)-1.0867477655)) {
            result[1] += 0.0015148026;
          } else {
            result[1] += 0.03078639;
          }
        } else {
          result[1] += -0.020664064;
        }
      } else {
        result[1] += 0.035397943;
      }
    } else {
      result[1] += -0.025416454;
    }
  }
  if ( (data[8].missing != -1) && (data[8].fvalue < (float)0.011566273868)) {
    if ( (data[11].missing != -1) && (data[11].fvalue < (float)-0.23548963666)) {
      if ( (data[8].missing != -1) && (data[8].fvalue < (float)-0.20639407635)) {
        if ( (data[3].missing != -1) && (data[3].fvalue < (float)-0.8327895999)) {
          result[2] += 0.029583583;
        } else {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)-0.73631227016)) {
            if ( (data[12].missing != -1) && (data[12].fvalue < (float)-0.68272763491)) {
              result[2] += 0.024493538;
            } else {
              result[2] += -0.006911403;
            }
          } else {
            result[2] += -0.026712913;
          }
        }
      } else {
        if ( (data[0].missing != -1) && (data[0].fvalue < (float)0.32410311699)) {
          result[2] += -0.037549738;
        } else {
          result[2] += 0.0054543777;
        }
      }
    } else {
      if ( (data[1].missing != -1) && (data[1].fvalue < (float)-1.1529643536)) {
        result[2] += -0.018291542;
      } else {
        if ( (data[3].missing != -1) && (data[3].fvalue < (float)-0.31944227219)) {
          if ( (data[7].missing != -1) && (data[7].fvalue < (float)-0.37206950784)) {
            if ( (data[8].missing != -1) && (data[8].fvalue < (float)-0.16056913137)) {
              result[2] += 0.020708902;
            } else {
              result[2] += -0.0017949388;
            }
          } else {
            result[2] += 0.05051629;
          }
        } else {
          if ( (data[5].missing != -1) && (data[5].fvalue < (float)-0.15271317959)) {
            result[2] += -0.012405143;
          } else {
            if ( (data[6].missing != -1) && (data[6].fvalue < (float)0.15546032786)) {
              result[2] += 0.03275035;
            } else {
              if ( (data[6].missing != -1) && (data[6].fvalue < (float)1.3642252684)) {
                result[2] += -0.011825763;
              } else {
                result[2] += 0.01534041;
              }
            }
          }
        }
      }
    }
  } else {
    result[2] += -0.020741796;
  }
  if ( (data[13].missing != -1) && (data[13].fvalue < (float)1.1907502413)) {
    if ( (data[5].missing != -1) && (data[5].fvalue < (float)0.092830754817)) {
      if ( (data[2].missing != -1) && (data[2].fvalue < (float)0.13540814817)) {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)0.04016796127)) {
          result[3] += 0.03381833;
        } else {
          result[3] += 0.0054565975;
        }
      } else {
        if ( (data[12].missing != -1) && (data[12].fvalue < (float)1.0508075953)) {
          if ( (data[15].missing != -1) && (data[15].fvalue < (float)-0.60108989477)) {
            result[3] += 0.0014218785;
          } else {
            if ( (data[8].missing != -1) && (data[8].fvalue < (float)-0.12956127524)) {
              if ( (data[10].missing != -1) && (data[10].fvalue < (float)0.13604107499)) {
                result[3] += -0.044491433;
              } else {
                result[3] += -0.023870157;
              }
            } else {
              result[3] += -0.012840132;
            }
          }
        } else {
          result[3] += 0.025655508;
        }
      }
    } else {
      if ( (data[16].missing != -1) && (data[16].fvalue < (float)0.026835277677)) {
        result[3] += -0.012235779;
      } else {
        if ( (data[11].missing != -1) && (data[11].fvalue < (float)-0.0027782414109)) {
          if ( (data[11].missing != -1) && (data[11].fvalue < (float)-0.22117689252)) {
            result[3] += 0.03288877;
          } else {
            result[3] += -0.01198094;
          }
        } else {
          result[3] += 0.04040509;
        }
      }
    }
  } else {
    result[3] += -0.033779994;
  }
  if ( (data[8].missing != -1) && (data[8].fvalue < (float)-0.21849969029)) {
    result[0] += -0.026105149;
  } else {
    if ( (data[11].missing != -1) && (data[11].fvalue < (float)-0.25357052684)) {
      if ( (data[8].missing != -1) && (data[8].fvalue < (float)-0.20639407635)) {
        result[0] += 0.0033616393;
      } else {
        result[0] += 0.028548911;
      }
    } else {
      if ( (data[6].missing != -1) && (data[6].fvalue < (float)-1.1161192656)) {
        result[0] += -0.021057708;
      } else {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)1.1348803043)) {
          if ( (data[6].missing != -1) && (data[6].fvalue < (float)0.041582621634)) {
            if ( (data[11].missing != -1) && (data[11].fvalue < (float)-0.20037463307)) {
              result[0] += 0.02874639;
            } else {
              if ( (data[13].missing != -1) && (data[13].fvalue < (float)-0.6913408637)) {
                result[0] += -0.02308241;
              } else {
                result[0] += 0.00938015;
              }
            }
          } else {
            if ( (data[6].missing != -1) && (data[6].fvalue < (float)0.49683484435)) {
              result[0] += -0.028146395;
            } else {
              if ( (data[16].missing != -1) && (data[16].fvalue < (float)0.028659338132)) {
                result[0] += 0.017681595;
              } else {
                result[0] += -0.008866124;
              }
            }
          }
        } else {
          if ( (data[11].missing != -1) && (data[11].fvalue < (float)0.20511458814)) {
            result[0] += 0.04804563;
          } else {
            result[0] += -0.009407524;
          }
        }
      }
    }
  }
  if ( (data[10].missing != -1) && (data[10].fvalue < (float)1.6924813986)) {
    if ( (data[0].missing != -1) && (data[0].fvalue < (float)-1.4317775965)) {
      result[1] += 0.03275475;
    } else {
      if ( (data[11].missing != -1) && (data[11].fvalue < (float)-0.20037463307)) {
        if ( (data[13].missing != -1) && (data[13].fvalue < (float)1.0023117065)) {
          result[1] += -0.031935815;
        } else {
          if ( (data[13].missing != -1) && (data[13].fvalue < (float)1.4886692762)) {
            result[1] += 0.014129439;
          } else {
            result[1] += -0.014875533;
          }
        }
      } else {
        result[1] += 0.016915923;
      }
    }
  } else {
    result[1] += -0.027834078;
  }
  if ( (data[15].missing != -1) && (data[15].fvalue < (float)-1.388064146)) {
    result[2] += 0.025553366;
  } else {
    if ( (data[9].missing != -1) && (data[9].fvalue < (float)-1.267203927)) {
      result[2] += -0.02602755;
    } else {
      if ( (data[1].missing != -1) && (data[1].fvalue < (float)-1.2382310629)) {
        result[2] += -0.021687753;
      } else {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)0.92333030701)) {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)0.63800871372)) {
            if ( (data[1].missing != -1) && (data[1].fvalue < (float)-0.42481967807)) {
              result[2] += 0.025470871;
            } else {
              if ( (data[7].missing != -1) && (data[7].fvalue < (float)0.24873484671)) {
                result[2] += -0.0077624223;
              } else {
                result[2] += 0.015345489;
              }
            }
          } else {
            result[2] += 0.027265145;
          }
        } else {
          result[2] += -0.018773219;
        }
      }
    }
  }
  if ( (data[6].missing != -1) && (data[6].fvalue < (float)1.009770751)) {
    if ( (data[16].missing != -1) && (data[16].fvalue < (float)0.00085049594054)) {
      if ( (data[12].missing != -1) && (data[12].fvalue < (float)0.99250650406)) {
        if ( (data[14].missing != -1) && (data[14].fvalue < (float)0.2538818419)) {
          result[3] += -0.009396816;
        } else {
          result[3] += -0.037889183;
        }
      } else {
        result[3] += 0.009157439;
      }
    } else {
      if ( (data[2].missing != -1) && (data[2].fvalue < (float)-0.3757673502)) {
        result[3] += 0.034716606;
      } else {
        if ( (data[6].missing != -1) && (data[6].fvalue < (float)0.64755177498)) {
          if ( (data[5].missing != -1) && (data[5].fvalue < (float)-0.22976702452)) {
            if ( (data[6].missing != -1) && (data[6].fvalue < (float)-0.71604603529)) {
              result[3] += -0.0054145185;
            } else {
              if ( (data[12].missing != -1) && (data[12].fvalue < (float)-0.31976079941)) {
                result[3] += 0.011194534;
              } else {
                result[3] += 0.03760394;
              }
            }
          } else {
            if ( (data[8].missing != -1) && (data[8].fvalue < (float)-0.062811166048)) {
              result[3] += -0.022695167;
            } else {
              result[3] += 0.0104137035;
            }
          }
        } else {
          result[3] += 0.027453948;
        }
      }
    }
  } else {
    result[3] += -0.022063138;
  }
  if ( (data[13].missing != -1) && (data[13].fvalue < (float)1.1396669149)) {
    if ( (data[13].missing != -1) && (data[13].fvalue < (float)0.77784532309)) {
      if ( (data[6].missing != -1) && (data[6].fvalue < (float)1.2508471012)) {
        if ( (data[11].missing != -1) && (data[11].fvalue < (float)-0.2367080003)) {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)0.17808239162)) {
            result[0] += -0.008499174;
          } else {
            result[0] += 0.02629492;
          }
        } else {
          if ( (data[10].missing != -1) && (data[10].fvalue < (float)0.29595884681)) {
            if ( (data[16].missing != -1) && (data[16].fvalue < (float)0.040853574872)) {
              if ( (data[12].missing != -1) && (data[12].fvalue < (float)0.37132626772)) {
                result[0] += -0.00978507;
              } else {
                result[0] += -0.038668174;
              }
            } else {
              if ( (data[3].missing != -1) && (data[3].fvalue < (float)-0.51284056902)) {
                result[0] += 0.012647792;
              } else {
                result[0] += -0.009640581;
              }
            }
          } else {
            if ( (data[5].missing != -1) && (data[5].fvalue < (float)-0.14828489721)) {
              result[0] += 0.020450193;
            } else {
              result[0] += -0.011629949;
            }
          }
        }
      } else {
        result[0] += 0.025633842;
      }
    } else {
      result[0] += -0.033719297;
    }
  } else {
    if ( (data[13].missing != -1) && (data[13].fvalue < (float)1.3775569201)) {
      result[0] += 0.029550198;
    } else {
      if ( (data[10].missing != -1) && (data[10].fvalue < (float)1.0438103676)) {
        result[0] += -0.015743665;
      } else {
        result[0] += 0.014647572;
      }
    }
  }
  if ( (data[5].missing != -1) && (data[5].fvalue < (float)-0.41068267822)) {
    result[1] += -0.021553306;
  } else {
    if ( (data[8].missing != -1) && (data[8].fvalue < (float)-0.21892316639)) {
      result[1] += 0.039123055;
    } else {
      if ( (data[5].missing != -1) && (data[5].fvalue < (float)-0.25318676233)) {
        result[1] += 0.022746697;
      } else {
        if ( (data[16].missing != -1) && (data[16].fvalue < (float)0.069090053439)) {
          if ( (data[13].missing != -1) && (data[13].fvalue < (float)1.1100145578)) {
            result[1] += -0.040439826;
          } else {
            result[1] += 0.008093951;
          }
        } else {
          result[1] += 0.02452409;
        }
      }
    }
  }
  if ( (data[3].missing != -1) && (data[3].fvalue < (float)-0.31944227219)) {
    if ( (data[1].missing != -1) && (data[1].fvalue < (float)-0.42481967807)) {
      result[2] += 0.027288547;
    } else {
      if ( (data[11].missing != -1) && (data[11].fvalue < (float)-0.25990229845)) {
        result[2] += -0.012571819;
      } else {
        if ( (data[14].missing != -1) && (data[14].fvalue < (float)0.40729808807)) {
          result[2] += 0.026526421;
        } else {
          if ( (data[15].missing != -1) && (data[15].fvalue < (float)0.62840425968)) {
            result[2] += -0.020662239;
          } else {
            result[2] += 0.011515479;
          }
        }
      }
    }
  } else {
    if ( (data[3].missing != -1) && (data[3].fvalue < (float)0.87656605244)) {
      if ( (data[5].missing != -1) && (data[5].fvalue < (float)-0.24164952338)) {
        result[2] += -0.03468689;
      } else {
        if ( (data[10].missing != -1) && (data[10].fvalue < (float)0.67018127441)) {
          if ( (data[7].missing != -1) && (data[7].fvalue < (float)0.22667650878)) {
            if ( (data[5].missing != -1) && (data[5].fvalue < (float)0.16112536192)) {
              result[2] += -0.0327689;
            } else {
              result[2] += 0.0084911985;
            }
          } else {
            result[2] += 0.020364366;
          }
        } else {
          result[2] += -0.033127513;
        }
      }
    } else {
      if ( (data[11].missing != -1) && (data[11].fvalue < (float)-0.22773696482)) {
        result[2] += 0.030012114;
      } else {
        result[2] += -0.0025605448;
      }
    }
  }
  if ( (data[3].missing != -1) && (data[3].fvalue < (float)1.276345253)) {
    if ( (data[15].missing != -1) && (data[15].fvalue < (float)-1.0328227282)) {
      result[3] += -0.03556663;
    } else {
      if ( (data[15].missing != -1) && (data[15].fvalue < (float)-0.60108989477)) {
        result[3] += 0.029092727;
      } else {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)-0.96758306026)) {
          result[3] += -0.026265023;
        } else {
          if ( (data[5].missing != -1) && (data[5].fvalue < (float)0.09874022752)) {
            if ( (data[5].missing != -1) && (data[5].fvalue < (float)-0.15271317959)) {
              if ( (data[3].missing != -1) && (data[3].fvalue < (float)-0.82810521126)) {
                result[3] += 0.02183913;
              } else {
                result[3] += -0.0043578944;
              }
            } else {
              result[3] += -0.029274082;
            }
          } else {
            if ( (data[11].missing != -1) && (data[11].fvalue < (float)-0.14382907748)) {
              result[3] += 0.026269397;
            } else {
              result[3] += -0.001752094;
            }
          }
        }
      }
    }
  } else {
    if ( (data[14].missing != -1) && (data[14].fvalue < (float)-1.221612215)) {
      result[3] += 0.030497491;
    } else {
      result[3] += -0.0022594268;
    }
  }
  if ( (data[11].missing != -1) && (data[11].fvalue < (float)-0.25357052684)) {
    if ( (data[8].missing != -1) && (data[8].fvalue < (float)-0.21625265479)) {
      result[0] += -0.0076554655;
    } else {
      if ( (data[1].missing != -1) && (data[1].fvalue < (float)0.46622100472)) {
        result[0] += 0.041833755;
      } else {
        result[0] += 0.012972555;
      }
    }
  } else {
    if ( (data[9].missing != -1) && (data[9].fvalue < (float)0.4173142314)) {
      if ( (data[5].missing != -1) && (data[5].fvalue < (float)-0.25001698732)) {
        if ( (data[3].missing != -1) && (data[3].fvalue < (float)-0.24711900949)) {
          result[0] += -0.009177021;
        } else {
          result[0] += 0.01870203;
        }
      } else {
        if ( (data[8].missing != -1) && (data[8].fvalue < (float)-0.20588018)) {
          result[0] += -0.00021552407;
        } else {
          if ( (data[6].missing != -1) && (data[6].fvalue < (float)0.58737653494)) {
            result[0] += -0.041463356;
          } else {
            result[0] += -0.011513344;
          }
        }
      }
    } else {
      if ( (data[12].missing != -1) && (data[12].fvalue < (float)0.68646353483)) {
        if ( (data[0].missing != -1) && (data[0].fvalue < (float)0.40298116207)) {
          result[0] += -0.0063369307;
        } else {
          if ( (data[7].missing != -1) && (data[7].fvalue < (float)-0.24678532779)) {
            if ( (data[5].missing != -1) && (data[5].fvalue < (float)0.07551728934)) {
              result[0] += 0.030450022;
            } else {
              result[0] += -0.015360065;
            }
          } else {
            result[0] += 0.036651794;
          }
        }
      } else {
        if ( (data[5].missing != -1) && (data[5].fvalue < (float)-0.13362890482)) {
          result[0] += -0.02227871;
        } else {
          result[0] += 0.012585825;
        }
      }
    }
  }
  if ( (data[5].missing != -1) && (data[5].fvalue < (float)-0.40100291371)) {
    result[1] += -0.0190098;
  } else {
    if ( (data[5].missing != -1) && (data[5].fvalue < (float)-0.2904368639)) {
      result[1] += 0.024275897;
    } else {
      if ( (data[11].missing != -1) && (data[11].fvalue < (float)-0.26135647297)) {
        result[1] += -0.02984391;
      } else {
        if ( (data[14].missing != -1) && (data[14].fvalue < (float)-0.53528237343)) {
          if ( (data[5].missing != -1) && (data[5].fvalue < (float)0.6877835989)) {
            result[1] += 0.032249086;
          } else {
            result[1] += 0.002163772;
          }
        } else {
          result[1] += -0.012444102;
        }
      }
    }
  }
  if ( (data[8].missing != -1) && (data[8].fvalue < (float)-0.088057100773)) {
    if ( (data[5].missing != -1) && (data[5].fvalue < (float)-0.47029465437)) {
      result[2] += 0.024501478;
    } else {
      if ( (data[13].missing != -1) && (data[13].fvalue < (float)-0.32829239964)) {
        if ( (data[5].missing != -1) && (data[5].fvalue < (float)-0.019165378064)) {
          if ( (data[15].missing != -1) && (data[15].fvalue < (float)0.6896930933)) {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)-0.79243505001)) {
              result[2] += -0.00035627442;
            } else {
              result[2] += 0.029684825;
            }
          } else {
            result[2] += -0.028318113;
          }
        } else {
          result[2] += 0.035187878;
        }
      } else {
        if ( (data[7].missing != -1) && (data[7].fvalue < (float)-0.18220323324)) {
          result[2] += -0.026685609;
        } else {
          if ( (data[0].missing != -1) && (data[0].fvalue < (float)-0.80280572176)) {
            if ( (data[8].missing != -1) && (data[8].fvalue < (float)-0.21338579059)) {
              result[2] += -0.025661414;
            } else {
              result[2] += 0.003641497;
            }
          } else {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)0.1855404079)) {
              if ( (data[16].missing != -1) && (data[16].fvalue < (float)0.013591933995)) {
                result[2] += 0.0022734813;
              } else {
                result[2] += 0.031437766;
              }
            } else {
              result[2] += -0.006265521;
            }
          }
        }
      }
    }
  } else {
    if ( (data[12].missing != -1) && (data[12].fvalue < (float)0.18131288886)) {
      result[2] += 0.0015785123;
    } else {
      result[2] += -0.029252304;
    }
  }
  if ( (data[0].missing != -1) && (data[0].fvalue < (float)-1.4190087318)) {
    result[3] += -0.023244673;
  } else {
    if ( (data[0].missing != -1) && (data[0].fvalue < (float)-1.146918416)) {
      result[3] += 0.039223406;
    } else {
      if ( (data[16].missing != -1) && (data[16].fvalue < (float)0.085194684565)) {
        if ( (data[5].missing != -1) && (data[5].fvalue < (float)1.4188649654)) {
          if ( (data[5].missing != -1) && (data[5].fvalue < (float)0.21651439369)) {
            if ( (data[5].missing != -1) && (data[5].fvalue < (float)0.07551728934)) {
              if ( (data[6].missing != -1) && (data[6].fvalue < (float)0.19576309621)) {
                result[3] += 0.0069059283;
              } else {
                result[3] += -0.026296958;
              }
            } else {
              result[3] += 0.03245354;
            }
          } else {
            result[3] += -0.028269166;
          }
        } else {
          result[3] += 0.026720086;
        }
      } else {
        result[3] += -0.020566216;
      }
    }
  }
  if ( (data[3].missing != -1) && (data[3].fvalue < (float)0.030459327623)) {
    if ( (data[0].missing != -1) && (data[0].fvalue < (float)-0.084950469434)) {
      result[0] += -0.037153687;
    } else {
      if ( (data[7].missing != -1) && (data[7].fvalue < (float)-0.034397810698)) {
        if ( (data[1].missing != -1) && (data[1].fvalue < (float)0.43742504716)) {
          result[0] += 0.012780434;
        } else {
          if ( (data[11].missing != -1) && (data[11].fvalue < (float)-0.23780336976)) {
            result[0] += 0.00447074;
          } else {
            if ( (data[11].missing != -1) && (data[11].fvalue < (float)-0.14974308014)) {
              result[0] += -0.03896196;
            } else {
              result[0] += -0.009688258;
            }
          }
        }
      } else {
        result[0] += 0.035201173;
      }
    }
  } else {
    if ( (data[3].missing != -1) && (data[3].fvalue < (float)0.84174287319)) {
      if ( (data[1].missing != -1) && (data[1].fvalue < (float)-0.52625721693)) {
        result[0] += -0.00758167;
      } else {
        if ( (data[5].missing != -1) && (data[5].fvalue < (float)-0.30345416069)) {
          result[0] += 0.037267145;
        } else {
          if ( (data[6].missing != -1) && (data[6].fvalue < (float)0.82943028212)) {
            result[0] += 0.001142654;
          } else {
            result[0] += 0.027576199;
          }
        }
      }
    } else {
      if ( (data[13].missing != -1) && (data[13].fvalue < (float)0.98732662201)) {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)1.7136435509)) {
          result[0] += -0.02722626;
        } else {
          result[0] += 0.0029243382;
        }
      } else {
        result[0] += 0.018008674;
      }
    }
  }
  if ( (data[12].missing != -1) && (data[12].fvalue < (float)0.25012519956)) {
    if ( (data[8].missing != -1) && (data[8].fvalue < (float)-0.21920143068)) {
      result[1] += 0.016958859;
    } else {
      if ( (data[11].missing != -1) && (data[11].fvalue < (float)-0.26087924838)) {
        result[1] += -0.03438962;
      } else {
        if ( (data[8].missing != -1) && (data[8].fvalue < (float)-0.20033873618)) {
          if ( (data[0].missing != -1) && (data[0].fvalue < (float)-1.0674057007)) {
            result[1] += 0.023425728;
          } else {
            result[1] += -0.0038891702;
          }
        } else {
          result[1] += -0.026573628;
        }
      }
    }
  } else {
    result[1] += 0.030170545;
  }
  if ( (data[8].missing != -1) && (data[8].fvalue < (float)0.011566273868)) {
    if ( (data[0].missing != -1) && (data[0].fvalue < (float)0.72153884172)) {
      if ( (data[16].missing != -1) && (data[16].fvalue < (float)-0.031885597855)) {
        result[2] += 0.025020236;
      } else {
        if ( (data[6].missing != -1) && (data[6].fvalue < (float)1.4937204123)) {
          if ( (data[6].missing != -1) && (data[6].fvalue < (float)-0.5930570364)) {
            result[2] += 0.008062781;
          } else {
            if ( (data[11].missing != -1) && (data[11].fvalue < (float)-0.1977134645)) {
              if ( (data[12].missing != -1) && (data[12].fvalue < (float)-0.86229199171)) {
                result[2] += 0.00016320821;
              } else {
                result[2] += -0.02568296;
              }
            } else {
              if ( (data[11].missing != -1) && (data[11].fvalue < (float)-0.14802908897)) {
                result[2] += 0.0139827;
              } else {
                result[2] += -0.014507;
              }
            }
          }
        } else {
          result[2] += 0.018665437;
        }
      }
    } else {
      if ( (data[12].missing != -1) && (data[12].fvalue < (float)0.92753559351)) {
        result[2] += 0.030178417;
      } else {
        result[2] += -0.0018443129;
      }
    }
  } else {
    result[2] += -0.024183668;
  }
  if ( (data[8].missing != -1) && (data[8].fvalue < (float)-0.16773824394)) {
    if ( (data[0].missing != -1) && (data[0].fvalue < (float)-1.4190087318)) {
      result[3] += -0.015326649;
    } else {
      if ( (data[3].missing != -1) && (data[3].fvalue < (float)-0.64039719105)) {
        result[3] += -0.009653497;
      } else {
        if ( (data[11].missing != -1) && (data[11].fvalue < (float)-0.23627480865)) {
          if ( (data[10].missing != -1) && (data[10].fvalue < (float)0.77467292547)) {
            result[3] += 0.017833484;
          } else {
            result[3] += 0.047291007;
          }
        } else {
          if ( (data[8].missing != -1) && (data[8].fvalue < (float)-0.18555359542)) {
            result[3] += -0.0078031197;
          } else {
            result[3] += 0.033068698;
          }
        }
      }
    }
  } else {
    if ( (data[16].missing != -1) && (data[16].fvalue < (float)-0.025852365419)) {
      result[3] += 0.021539686;
    } else {
      if ( (data[3].missing != -1) && (data[3].fvalue < (float)0.905631423)) {
        if ( (data[0].missing != -1) && (data[0].fvalue < (float)0.91132289171)) {
          if ( (data[13].missing != -1) && (data[13].fvalue < (float)-0.72119164467)) {
            result[3] += 0.022541521;
          } else {
            if ( (data[10].missing != -1) && (data[10].fvalue < (float)0.012081416324)) {
              result[3] += -0.032799613;
            } else {
              result[3] += -0.005327607;
            }
          }
        } else {
          result[3] += -0.037477184;
        }
      } else {
        if ( (data[5].missing != -1) && (data[5].fvalue < (float)0.47671183944)) {
          result[3] += 0.025707131;
        } else {
          result[3] += -0.009153866;
        }
      }
    }
  }
  if ( (data[5].missing != -1) && (data[5].fvalue < (float)-0.41925215721)) {
    if ( (data[10].missing != -1) && (data[10].fvalue < (float)-0.8080946207)) {
      result[0] += -0.014234065;
    } else {
      if ( (data[3].missing != -1) && (data[3].fvalue < (float)0.52587175369)) {
        if ( (data[1].missing != -1) && (data[1].fvalue < (float)0.46622100472)) {
          result[0] += 0.03937533;
        } else {
          result[0] += 0.009194103;
        }
      } else {
        result[0] += 0.00372293;
      }
    }
  } else {
    if ( (data[5].missing != -1) && (data[5].fvalue < (float)-0.36462178826)) {
      result[0] += -0.028086245;
    } else {
      if ( (data[6].missing != -1) && (data[6].fvalue < (float)-0.069692648947)) {
        if ( (data[11].missing != -1) && (data[11].fvalue < (float)0.43894127011)) {
          if ( (data[11].missing != -1) && (data[11].fvalue < (float)-0.22332780063)) {
            result[0] += -0.0006669936;
          } else {
            if ( (data[11].missing != -1) && (data[11].fvalue < (float)-0.010198748671)) {
              result[0] += -0.040250305;
            } else {
              result[0] += -0.015366395;
            }
          }
        } else {
          result[0] += 0.0169003;
        }
      } else {
        if ( (data[11].missing != -1) && (data[11].fvalue < (float)0.00019615572819)) {
          if ( (data[11].missing != -1) && (data[11].fvalue < (float)-0.14802908897)) {
            if ( (data[5].missing != -1) && (data[5].fvalue < (float)-0.096374280751)) {
              result[0] += 0.016793823;
            } else {
              if ( (data[6].missing != -1) && (data[6].fvalue < (float)1.1266809702)) {
                result[0] += -0.030595845;
              } else {
                result[0] += 0.0019019096;
              }
            }
          } else {
            result[0] += 0.025803218;
          }
        } else {
          result[0] += -0.019681938;
        }
      }
    }
  }
  if ( (data[6].missing != -1) && (data[6].fvalue < (float)0.010675780475)) {
    if ( (data[16].missing != -1) && (data[16].fvalue < (float)-0.010007405654)) {
      result[1] += 0.0122681325;
    } else {
      result[1] += -0.027182583;
    }
  } else {
    if ( (data[9].missing != -1) && (data[9].fvalue < (float)0.17808239162)) {
      if ( (data[11].missing != -1) && (data[11].fvalue < (float)-0.21514505148)) {
        if ( (data[8].missing != -1) && (data[8].fvalue < (float)-0.21442578733)) {
          if ( (data[11].missing != -1) && (data[11].fvalue < (float)-0.26474907994)) {
            result[1] += 0.015530797;
          } else {
            result[1] += 0.03522084;
          }
        } else {
          result[1] += -0.017633528;
        }
      } else {
        result[1] += 0.03990471;
      }
    } else {
      result[1] += -0.011052741;
    }
  }
  if ( (data[0].missing != -1) && (data[0].fvalue < (float)-1.1717795134)) {
    result[2] += -0.029415593;
  } else {
    if ( (data[12].missing != -1) && (data[12].fvalue < (float)-0.18233750761)) {
      if ( (data[11].missing != -1) && (data[11].fvalue < (float)-0.22485224903)) {
        if ( (data[7].missing != -1) && (data[7].fvalue < (float)0.60061269999)) {
          result[2] += 0.009222342;
        } else {
          result[2] += 0.036610488;
        }
      } else {
        if ( (data[0].missing != -1) && (data[0].fvalue < (float)-0.36977395415)) {
          result[2] += -0.021553628;
        } else {
          result[2] += 0.020785002;
        }
      }
    } else {
      if ( (data[10].missing != -1) && (data[10].fvalue < (float)-0.82406896353)) {
        if ( (data[10].missing != -1) && (data[10].fvalue < (float)-1.1007336378)) {
          if ( (data[16].missing != -1) && (data[16].fvalue < (float)-0.018523437902)) {
            result[2] += -0.02729488;
          } else {
            result[2] += 0.0012809102;
          }
        } else {
          result[2] += 0.022612046;
        }
      } else {
        if ( (data[11].missing != -1) && (data[11].fvalue < (float)-0.18233262002)) {
          if ( (data[7].missing != -1) && (data[7].fvalue < (float)-0.34532478452)) {
            result[2] += -0.050439786;
          } else {
            result[2] += -0.010204709;
          }
        } else {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)0.89602982998)) {
            if ( (data[5].missing != -1) && (data[5].fvalue < (float)-0.13078440726)) {
              result[2] += -0.009305529;
            } else {
              result[2] += 0.023992306;
            }
          } else {
            result[2] += -0.019736722;
          }
        }
      }
    }
  }
  if ( (data[13].missing != -1) && (data[13].fvalue < (float)1.2225931883)) {
    if ( (data[6].missing != -1) && (data[6].fvalue < (float)0.64755177498)) {
      if ( (data[13].missing != -1) && (data[13].fvalue < (float)-0.13281053305)) {
        if ( (data[5].missing != -1) && (data[5].fvalue < (float)-0.15271317959)) {
          if ( (data[8].missing != -1) && (data[8].fvalue < (float)0.023287266493)) {
            if ( (data[6].missing != -1) && (data[6].fvalue < (float)-0.50929665565)) {
              result[3] += 0.0076567954;
            } else {
              result[3] += 0.046389207;
            }
          } else {
            result[3] += -0.0028711823;
          }
        } else {
          result[3] += -0.008458413;
        }
      } else {
        if ( (data[15].missing != -1) && (data[15].fvalue < (float)-0.60108989477)) {
          result[3] += 0.00677407;
        } else {
          if ( (data[5].missing != -1) && (data[5].fvalue < (float)-0.31484144926)) {
            result[3] += -0.00023087124;
          } else {
            result[3] += -0.02905018;
          }
        }
      }
    } else {
      if ( (data[6].missing != -1) && (data[6].fvalue < (float)0.94073528051)) {
        result[3] += 0.039418753;
      } else {
        if ( (data[10].missing != -1) && (data[10].fvalue < (float)0.72595649958)) {
          result[3] += -0.013002242;
        } else {
          result[3] += 0.011817645;
        }
      }
    }
  } else {
    result[3] += -0.0145403175;
  }
  if ( (data[9].missing != -1) && (data[9].fvalue < (float)-0.54771786928)) {
    if ( (data[9].missing != -1) && (data[9].fvalue < (float)-1.0831178427)) {
      result[0] += -0.0031785343;
    } else {
      result[0] += -0.026522532;
    }
  } else {
    if ( (data[11].missing != -1) && (data[11].fvalue < (float)-0.26268348098)) {
      result[0] += 0.019557912;
    } else {
      if ( (data[13].missing != -1) && (data[13].fvalue < (float)0.98732662201)) {
        if ( (data[3].missing != -1) && (data[3].fvalue < (float)0.87656605244)) {
          if ( (data[8].missing != -1) && (data[8].fvalue < (float)0.073643051088)) {
            if ( (data[10].missing != -1) && (data[10].fvalue < (float)-0.39829662442)) {
              if ( (data[7].missing != -1) && (data[7].fvalue < (float)-0.19368056953)) {
                result[0] += -0.0044993213;
              } else {
                result[0] += 0.033784352;
              }
            } else {
              if ( (data[13].missing != -1) && (data[13].fvalue < (float)-0.45244047046)) {
                result[0] += -0.039986398;
              } else {
                result[0] += -0.0013376506;
              }
            }
          } else {
            result[0] += 0.01877821;
          }
        } else {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)1.7136435509)) {
            result[0] += -0.028720377;
          } else {
            result[0] += -0.0069351657;
          }
        }
      } else {
        result[0] += 0.018228149;
      }
    }
  }
  if ( (data[6].missing != -1) && (data[6].fvalue < (float)0.07151145488)) {
    if ( (data[0].missing != -1) && (data[0].fvalue < (float)-1.3415445089)) {
      result[1] += 0.00434623;
    } else {
      result[1] += -0.040848713;
    }
  } else {
    if ( (data[13].missing != -1) && (data[13].fvalue < (float)1.5052392483)) {
      if ( (data[13].missing != -1) && (data[13].fvalue < (float)1.2953075171)) {
        if ( (data[3].missing != -1) && (data[3].fvalue < (float)0.83222895861)) {
          result[1] += -0.014407932;
        } else {
          result[1] += 0.016326645;
        }
      } else {
        result[1] += 0.038755212;
      }
    } else {
      result[1] += -0.016680239;
    }
  }
  if ( (data[8].missing != -1) && (data[8].fvalue < (float)-0.14996892214)) {
    if ( (data[10].missing != -1) && (data[10].fvalue < (float)-0.8168155551)) {
      if ( (data[16].missing != -1) && (data[16].fvalue < (float)0.003278326476)) {
        result[2] += 0.029994858;
      } else {
        result[2] += 0.0075282673;
      }
    } else {
      if ( (data[7].missing != -1) && (data[7].fvalue < (float)-0.18220323324)) {
        result[2] += -0.026274433;
      } else {
        if ( (data[14].missing != -1) && (data[14].fvalue < (float)0.069462187588)) {
          if ( (data[7].missing != -1) && (data[7].fvalue < (float)0.24873484671)) {
            result[2] += -0.021633811;
          } else {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)0.9507433176)) {
              if ( (data[0].missing != -1) && (data[0].fvalue < (float)-0.61925303936)) {
                result[2] += -0.008817623;
              } else {
                result[2] += 0.025392687;
              }
            } else {
              result[2] += 0.025684377;
            }
          }
        } else {
          result[2] += 0.035064258;
        }
      }
    }
  } else {
    if ( (data[13].missing != -1) && (data[13].fvalue < (float)-0.11498435587)) {
      if ( (data[8].missing != -1) && (data[8].fvalue < (float)-0.075811803341)) {
        result[2] += 0.011068029;
      } else {
        result[2] += -0.017465018;
      }
    } else {
      result[2] += -0.035827365;
    }
  }
  if ( (data[7].missing != -1) && (data[7].fvalue < (float)0.61500769854)) {
    if ( (data[14].missing != -1) && (data[14].fvalue < (float)0.050203636289)) {
      if ( (data[11].missing != -1) && (data[11].fvalue < (float)-0.24379661679)) {
        result[3] += 0.037629884;
      } else {
        result[3] += 0.016777994;
      }
    } else {
      if ( (data[12].missing != -1) && (data[12].fvalue < (float)-0.14010675251)) {
        result[3] += -0.019314935;
      } else {
        if ( (data[13].missing != -1) && (data[13].fvalue < (float)-1.0194351673)) {
          if ( (data[12].missing != -1) && (data[12].fvalue < (float)1.6315126419)) {
            result[3] += -0.027495567;
          } else {
            result[3] += 0.0049279877;
          }
        } else {
          if ( (data[7].missing != -1) && (data[7].fvalue < (float)-0.48104423285)) {
            if ( (data[16].missing != -1) && (data[16].fvalue < (float)0.044379305094)) {
              if ( (data[14].missing != -1) && (data[14].fvalue < (float)0.79492980242)) {
                result[3] += 0.018791769;
              } else {
                result[3] += -0.015149251;
              }
            } else {
              result[3] += 0.038986664;
            }
          } else {
            result[3] += -0.0045455494;
          }
        }
      }
    }
  } else {
    if ( (data[5].missing != -1) && (data[5].fvalue < (float)0.0089093819261)) {
      if ( (data[5].missing != -1) && (data[5].fvalue < (float)-0.30542847514)) {
        result[3] += -0.01869743;
      } else {
        result[3] += 0.01370541;
      }
    } else {
      result[3] += -0.033846755;
    }
  }
  if ( (data[6].missing != -1) && (data[6].fvalue < (float)-1.4776579142)) {
    result[0] += 0.013297108;
  } else {
    if ( (data[6].missing != -1) && (data[6].fvalue < (float)-1.0598759651)) {
      result[0] += -0.02239014;
    } else {
      if ( (data[8].missing != -1) && (data[8].fvalue < (float)0.50055772066)) {
        if ( (data[8].missing != -1) && (data[8].fvalue < (float)0.13410300016)) {
          if ( (data[11].missing != -1) && (data[11].fvalue < (float)-0.24539716542)) {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)-0.5254278779)) {
              result[0] += -0.032821722;
            } else {
              if ( (data[3].missing != -1) && (data[3].fvalue < (float)0.22197172046)) {
                result[0] += 0.01847545;
              } else {
                result[0] += -0.016053239;
              }
            }
          } else {
            if ( (data[8].missing != -1) && (data[8].fvalue < (float)-0.20474259555)) {
              result[0] += 0.017234107;
            } else {
              if ( (data[10].missing != -1) && (data[10].fvalue < (float)0.29595884681)) {
                result[0] += -0.0093068695;
              } else {
                result[0] += 0.014411518;
              }
            }
          }
        } else {
          result[0] += 0.027226243;
        }
      } else {
        result[0] += -0.024666352;
      }
    }
  }
  if ( (data[6].missing != -1) && (data[6].fvalue < (float)0.088294439018)) {
    if ( (data[9].missing != -1) && (data[9].fvalue < (float)-1.1374278069)) {
      result[1] += 0.0015719951;
    } else {
      result[1] += -0.031902716;
    }
  } else {
    if ( (data[6].missing != -1) && (data[6].fvalue < (float)0.30593377352)) {
      result[1] += 0.038319044;
    } else {
      if ( (data[6].missing != -1) && (data[6].fvalue < (float)0.76439845562)) {
        result[1] += -0.022982521;
      } else {
        if ( (data[10].missing != -1) && (data[10].fvalue < (float)1.0567365885)) {
          result[1] += -0.01274706;
        } else {
          result[1] += 0.024973981;
        }
      }
    }
  }
  if ( (data[9].missing != -1) && (data[9].fvalue < (float)-1.4219499826)) {
    result[2] += 0.026553337;
  } else {
    if ( (data[3].missing != -1) && (data[3].fvalue < (float)1.1059601307)) {
      if ( (data[5].missing != -1) && (data[5].fvalue < (float)-0.2904368639)) {
        if ( (data[11].missing != -1) && (data[11].fvalue < (float)-0.25452056527)) {
          result[2] += -0.029196683;
        } else {
          if ( (data[7].missing != -1) && (data[7].fvalue < (float)-0.4675784409)) {
            result[2] += -0.021296656;
          } else {
            result[2] += 0.015251351;
          }
        }
      } else {
        if ( (data[16].missing != -1) && (data[16].fvalue < (float)0.0087882457301)) {
          if ( (data[6].missing != -1) && (data[6].fvalue < (float)-0.12928208709)) {
            result[2] += 0.007023291;
          } else {
            result[2] += 0.030942677;
          }
        } else {
          if ( (data[13].missing != -1) && (data[13].fvalue < (float)-0.6045524478)) {
            if ( (data[12].missing != -1) && (data[12].fvalue < (float)0.68646353483)) {
              result[2] += -0.042304963;
            } else {
              result[2] += 0.0044339853;
            }
          } else {
            if ( (data[8].missing != -1) && (data[8].fvalue < (float)-0.19956482947)) {
              if ( (data[3].missing != -1) && (data[3].fvalue < (float)0.070308201015)) {
                result[2] += 0.03731992;
              } else {
                result[2] += -0.005399618;
              }
            } else {
              if ( (data[16].missing != -1) && (data[16].fvalue < (float)0.031900454313)) {
                result[2] += -0.018506462;
              } else {
                result[2] += 0.0044126976;
              }
            }
          }
        }
      }
    } else {
      result[2] += -0.027318815;
    }
  }
  if ( (data[10].missing != -1) && (data[10].fvalue < (float)-0.72088116407)) {
    result[3] += -0.027307147;
  } else {
    if ( (data[5].missing != -1) && (data[5].fvalue < (float)-0.44998666644)) {
      result[3] += -0.015031864;
    } else {
      if ( (data[11].missing != -1) && (data[11].fvalue < (float)-0.26094642282)) {
        result[3] += 0.027049182;
      } else {
        if ( (data[8].missing != -1) && (data[8].fvalue < (float)-0.19620859623)) {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)-0.94920670986)) {
            result[3] += -9.4277886e-05;
          } else {
            result[3] += -0.031846758;
          }
        } else {
          if ( (data[13].missing != -1) && (data[13].fvalue < (float)0.97630155087)) {
            if ( (data[6].missing != -1) && (data[6].fvalue < (float)-0.28908264637)) {
              if ( (data[12].missing != -1) && (data[12].fvalue < (float)-0.17542167008)) {
                result[3] += 0.022919089;
              } else {
                result[3] += -0.014982978;
              }
            } else {
              if ( (data[3].missing != -1) && (data[3].fvalue < (float)0.15496069193)) {
                result[3] += 0.040457346;
              } else {
                result[3] += 0.007662456;
              }
            }
          } else {
            result[3] += -0.0088041015;
          }
        }
      }
    }
  }
  if ( (data[0].missing != -1) && (data[0].fvalue < (float)0.12998342514)) {
    if ( (data[10].missing != -1) && (data[10].fvalue < (float)-0.16315969825)) {
      result[0] += -0.032634553;
    } else {
      if ( (data[16].missing != -1) && (data[16].fvalue < (float)0.048564616591)) {
        if ( (data[6].missing != -1) && (data[6].fvalue < (float)0.041582621634)) {
          if ( (data[8].missing != -1) && (data[8].fvalue < (float)-0.19982936978)) {
            result[0] += 0.03537237;
          } else {
            result[0] += -0.0030434576;
          }
        } else {
          result[0] += -0.0071511813;
        }
      } else {
        result[0] += -0.02483514;
      }
    }
  } else {
    if ( (data[7].missing != -1) && (data[7].fvalue < (float)-0.0094966925681)) {
      if ( (data[7].missing != -1) && (data[7].fvalue < (float)-0.27611738443)) {
        if ( (data[10].missing != -1) && (data[10].fvalue < (float)-0.89206194878)) {
          if ( (data[7].missing != -1) && (data[7].fvalue < (float)-0.80078905821)) {
            result[0] += 0.010903217;
          } else {
            result[0] += -0.027097497;
          }
        } else {
          if ( (data[0].missing != -1) && (data[0].fvalue < (float)0.72153884172)) {
            if ( (data[6].missing != -1) && (data[6].fvalue < (float)-0.2457845062)) {
              result[0] += 0.043235987;
            } else {
              result[0] += 0.00861651;
            }
          } else {
            if ( (data[13].missing != -1) && (data[13].fvalue < (float)-0.5950601697)) {
              if ( (data[13].missing != -1) && (data[13].fvalue < (float)-1.3232319355)) {
                result[0] += -0.00981428;
              } else {
                result[0] += 0.022662323;
              }
            } else {
              result[0] += -0.017038023;
            }
          }
        }
      } else {
        result[0] += -0.024935715;
      }
    } else {
      result[0] += 0.04216888;
    }
  }
  if ( (data[16].missing != -1) && (data[16].fvalue < (float)0.067746691406)) {
    if ( (data[5].missing != -1) && (data[5].fvalue < (float)-0.24164952338)) {
      if ( (data[5].missing != -1) && (data[5].fvalue < (float)-0.40100291371)) {
        result[1] += -0.018439649;
      } else {
        if ( (data[16].missing != -1) && (data[16].fvalue < (float)0.0042847408913)) {
          result[1] += 0.033327114;
        } else {
          result[1] += 0.008632964;
        }
      }
    } else {
      if ( (data[11].missing != -1) && (data[11].fvalue < (float)-0.24906308949)) {
        result[1] += -0.036139783;
      } else {
        result[1] += -0.0035667594;
      }
    }
  } else {
    result[1] += 0.024245936;
  }
  if ( (data[8].missing != -1) && (data[8].fvalue < (float)-0.20639407635)) {
    if ( (data[0].missing != -1) && (data[0].fvalue < (float)-1.1717795134)) {
      result[2] += -0.016588278;
    } else {
      if ( (data[15].missing != -1) && (data[15].fvalue < (float)0.33075129986)) {
        if ( (data[13].missing != -1) && (data[13].fvalue < (float)1.0310770273)) {
          result[2] += 0.03244557;
        } else {
          result[2] += 0.0008468895;
        }
      } else {
        result[2] += -0.014431699;
      }
    }
  } else {
    if ( (data[11].missing != -1) && (data[11].fvalue < (float)-0.23627480865)) {
      if ( (data[10].missing != -1) && (data[10].fvalue < (float)-0.940084517)) {
        result[2] += -0.0036971064;
      } else {
        result[2] += -0.040404525;
      }
    } else {
      if ( (data[3].missing != -1) && (data[3].fvalue < (float)0.19738391042)) {
        if ( (data[7].missing != -1) && (data[7].fvalue < (float)-0.32512119412)) {
          if ( (data[16].missing != -1) && (data[16].fvalue < (float)0.040303114802)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)0.56120723486)) {
              result[2] += -0.0041901036;
            } else {
              result[2] += 0.020761026;
            }
          } else {
            result[2] += -0.02309626;
          }
        } else {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)-0.31944227219)) {
            result[2] += 0.031382814;
          } else {
            result[2] += -0.000718991;
          }
        }
      } else {
        if ( (data[11].missing != -1) && (data[11].fvalue < (float)-0.0027782414109)) {
          result[2] += -0.02786011;
        } else {
          result[2] += -0.00017077559;
        }
      }
    }
  }
  if ( (data[16].missing != -1) && (data[16].fvalue < (float)0.078827567399)) {
    if ( (data[12].missing != -1) && (data[12].fvalue < (float)1.6879006624)) {
      if ( (data[15].missing != -1) && (data[15].fvalue < (float)0.88598489761)) {
        if ( (data[10].missing != -1) && (data[10].fvalue < (float)-0.46583351493)) {
          result[3] += -0.011866336;
        } else {
          if ( (data[13].missing != -1) && (data[13].fvalue < (float)-0.47394669056)) {
            result[3] += 0.034703422;
          } else {
            if ( (data[11].missing != -1) && (data[11].fvalue < (float)-0.15212750435)) {
              if ( (data[5].missing != -1) && (data[5].fvalue < (float)-0.36462178826)) {
                result[3] += -0.016456304;
              } else {
                result[3] += 0.018834282;
              }
            } else {
              if ( (data[8].missing != -1) && (data[8].fvalue < (float)-0.069430708885)) {
                result[3] += -0.0318104;
              } else {
                result[3] += -0.003010783;
              }
            }
          }
        }
      } else {
        result[3] += -0.01994187;
      }
    } else {
      result[3] += 0.026501147;
    }
  } else {
    result[3] += -0.021882392;
  }
  if ( (data[13].missing != -1) && (data[13].fvalue < (float)0.079274237156)) {
    if ( (data[3].missing != -1) && (data[3].fvalue < (float)0.87656605244)) {
      if ( (data[0].missing != -1) && (data[0].fvalue < (float)1.2026747465)) {
        if ( (data[2].missing != -1) && (data[2].fvalue < (float)-0.0082809589803)) {
          result[0] += 0.014112428;
        } else {
          if ( (data[6].missing != -1) && (data[6].fvalue < (float)-0.35151079297)) {
            if ( (data[7].missing != -1) && (data[7].fvalue < (float)-0.61040997505)) {
              result[0] += 0.016782125;
            } else {
              result[0] += -0.008622783;
            }
          } else {
            if ( (data[16].missing != -1) && (data[16].fvalue < (float)0.011048237793)) {
              result[0] += -0.006659403;
            } else {
              if ( (data[3].missing != -1) && (data[3].fvalue < (float)-0.59935802221)) {
                result[0] += -0.010341191;
              } else {
                result[0] += -0.040788244;
              }
            }
          }
        }
      } else {
        result[0] += 0.030083472;
      }
    } else {
      result[0] += -0.028414404;
    }
  } else {
    if ( (data[0].missing != -1) && (data[0].fvalue < (float)-0.88791364431)) {
      if ( (data[12].missing != -1) && (data[12].fvalue < (float)-1.4625700712)) {
        result[0] += 0.012816568;
      } else {
        result[0] += -0.029434135;
      }
    } else {
      if ( (data[8].missing != -1) && (data[8].fvalue < (float)-0.13294763863)) {
        if ( (data[8].missing != -1) && (data[8].fvalue < (float)-0.18038375676)) {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)-0.21651561558)) {
            result[0] += 0.026616191;
          } else {
            result[0] += -0.012484234;
          }
        } else {
          result[0] += 0.04015652;
        }
      } else {
        result[0] += -0.004957222;
      }
    }
  }
  if ( (data[12].missing != -1) && (data[12].fvalue < (float)0.26557740569)) {
    if ( (data[8].missing != -1) && (data[8].fvalue < (float)-0.21968281269)) {
      result[1] += 0.01697794;
    } else {
      if ( (data[11].missing != -1) && (data[11].fvalue < (float)-0.26087924838)) {
        if ( (data[10].missing != -1) && (data[10].fvalue < (float)0.77467292547)) {
          result[1] += 8.9868336e-05;
        } else {
          result[1] += -0.046684198;
        }
      } else {
        if ( (data[13].missing != -1) && (data[13].fvalue < (float)1.1625643969)) {
          if ( (data[10].missing != -1) && (data[10].fvalue < (float)1.0367903709)) {
            result[1] += -0.040526543;
          } else {
            result[1] += 0.010468171;
          }
        } else {
          if ( (data[10].missing != -1) && (data[10].fvalue < (float)1.0083687305)) {
            result[1] += 0.026782071;
          } else {
            result[1] += -0.0021489132;
          }
        }
      }
    }
  } else {
    result[1] += 0.026544144;
  }
  if ( (data[12].missing != -1) && (data[12].fvalue < (float)1.0508075953)) {
    if ( (data[3].missing != -1) && (data[3].fvalue < (float)1.1059601307)) {
      if ( (data[13].missing != -1) && (data[13].fvalue < (float)0.79729151726)) {
        if ( (data[12].missing != -1) && (data[12].fvalue < (float)-0.11233115941)) {
          if ( (data[6].missing != -1) && (data[6].fvalue < (float)0.05763412267)) {
            result[2] += 0.0027482144;
          } else {
            result[2] += 0.035143893;
          }
        } else {
          if ( (data[15].missing != -1) && (data[15].fvalue < (float)0.75784748793)) {
            if ( (data[8].missing != -1) && (data[8].fvalue < (float)-0.19956482947)) {
              result[2] += 0.0068187388;
            } else {
              if ( (data[16].missing != -1) && (data[16].fvalue < (float)0.011048237793)) {
                result[2] += 0.0024596245;
              } else {
                result[2] += -0.027624467;
              }
            }
          } else {
            result[2] += 0.014315116;
          }
        }
      } else {
        if ( (data[10].missing != -1) && (data[10].fvalue < (float)0.77467292547)) {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)-0.51284056902)) {
            result[2] += -0.0020867907;
          } else {
            result[2] += -0.03891519;
          }
        } else {
          result[2] += 0.009470152;
        }
      }
    } else {
      result[2] += -0.022869846;
    }
  } else {
    result[2] += -0.025688648;
  }
  if ( (data[6].missing != -1) && (data[6].fvalue < (float)1.0815649033)) {
    if ( (data[2].missing != -1) && (data[2].fvalue < (float)-0.069487594068)) {
      result[3] += 0.019424407;
    } else {
      if ( (data[9].missing != -1) && (data[9].fvalue < (float)0.92333030701)) {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)0.4542081356)) {
          if ( (data[6].missing != -1) && (data[6].fvalue < (float)-0.85984605551)) {
            result[3] += -0.020266226;
          } else {
            if ( (data[8].missing != -1) && (data[8].fvalue < (float)-0.12956127524)) {
              if ( (data[11].missing != -1) && (data[11].fvalue < (float)-0.25058192015)) {
                result[3] += 0.018154113;
              } else {
                result[3] += -0.015844915;
              }
            } else {
              result[3] += 0.024774045;
            }
          }
        } else {
          result[3] += -0.026785001;
        }
      } else {
        if ( (data[8].missing != -1) && (data[8].fvalue < (float)0.12710408866)) {
          result[3] += 0.026851108;
        } else {
          result[3] += -0.0028113523;
        }
      }
    }
  } else {
    result[3] += -0.020637652;
  }
  if ( (data[3].missing != -1) && (data[3].fvalue < (float)0.84174287319)) {
    if ( (data[3].missing != -1) && (data[3].fvalue < (float)0.030459327623)) {
      if ( (data[11].missing != -1) && (data[11].fvalue < (float)-0.2367080003)) {
        if ( (data[8].missing != -1) && (data[8].fvalue < (float)-0.19982936978)) {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)-0.10114473104)) {
            result[0] += -0.012702416;
          } else {
            result[0] += 0.011484092;
          }
        } else {
          result[0] += 0.025813583;
        }
      } else {
        if ( (data[7].missing != -1) && (data[7].fvalue < (float)-0.91147071123)) {
          result[0] += -0.031933364;
        } else {
          if ( (data[0].missing != -1) && (data[0].fvalue < (float)0.59084939957)) {
            if ( (data[11].missing != -1) && (data[11].fvalue < (float)-0.18647551537)) {
              result[0] += -0.024484618;
            } else {
              result[0] += -0.0022998091;
            }
          } else {
            result[0] += 0.014028668;
          }
        }
      }
    } else {
      if ( (data[5].missing != -1) && (data[5].fvalue < (float)-0.30542847514)) {
        result[0] += 0.0361854;
      } else {
        if ( (data[13].missing != -1) && (data[13].fvalue < (float)0.19216702878)) {
          result[0] += 0.010057408;
        } else {
          result[0] += -0.009054904;
        }
      }
    }
  } else {
    if ( (data[5].missing != -1) && (data[5].fvalue < (float)-0.27472487092)) {
      result[0] += -0.04275969;
    } else {
      if ( (data[9].missing != -1) && (data[9].fvalue < (float)0.71858865023)) {
        result[0] += -0.013611292;
      } else {
        result[0] += 0.013269367;
      }
    }
  }
  if ( (data[10].missing != -1) && (data[10].fvalue < (float)1.6924813986)) {
    if ( (data[3].missing != -1) && (data[3].fvalue < (float)0.83222895861)) {
      if ( (data[3].missing != -1) && (data[3].fvalue < (float)0.31084772944)) {
        if ( (data[15].missing != -1) && (data[15].fvalue < (float)-0.42976659536)) {
          result[1] += 0.018243572;
        } else {
          result[1] += -0.014232717;
        }
      } else {
        result[1] += -0.033341616;
      }
    } else {
      if ( (data[10].missing != -1) && (data[10].fvalue < (float)1.1853919029)) {
        result[1] += -0.00609194;
      } else {
        result[1] += 0.038693395;
      }
    }
  } else {
    result[1] += -0.024133332;
  }
  if ( (data[15].missing != -1) && (data[15].fvalue < (float)-1.388064146)) {
    result[2] += 0.026222264;
  } else {
    if ( (data[9].missing != -1) && (data[9].fvalue < (float)0.94407975674)) {
      if ( (data[9].missing != -1) && (data[9].fvalue < (float)0.62931138277)) {
        if ( (data[1].missing != -1) && (data[1].fvalue < (float)-0.42481967807)) {
          if ( (data[1].missing != -1) && (data[1].fvalue < (float)-1.2382310629)) {
            result[2] += -0.0027482153;
          } else {
            result[2] += 0.030939002;
          }
        } else {
          if ( (data[12].missing != -1) && (data[12].fvalue < (float)-0.3120880723)) {
            if ( (data[5].missing != -1) && (data[5].fvalue < (float)0.43987843394)) {
              if ( (data[5].missing != -1) && (data[5].fvalue < (float)-0.15271317959)) {
                result[2] += -0.0032866064;
              } else {
                result[2] += 0.039192837;
              }
            } else {
              result[2] += -0.0123950755;
            }
          } else {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)-0.45234051347)) {
              result[2] += -0.031674456;
            } else {
              if ( (data[5].missing != -1) && (data[5].fvalue < (float)-0.019165378064)) {
                result[2] += -0.013828397;
              } else {
                result[2] += 0.018385032;
              }
            }
          }
        }
      } else {
        result[2] += 0.030414924;
      }
    } else {
      result[2] += -0.019251382;
    }
  }
  if ( (data[14].missing != -1) && (data[14].fvalue < (float)-1.3242353201)) {
    result[3] += -0.020677825;
  } else {
    if ( (data[14].missing != -1) && (data[14].fvalue < (float)-1.1276538372)) {
      result[3] += 0.027394926;
    } else {
      if ( (data[7].missing != -1) && (data[7].fvalue < (float)0.67131799459)) {
        if ( (data[12].missing != -1) && (data[12].fvalue < (float)-0.70902597904)) {
          result[3] += 0.03003273;
        } else {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)-0.01826726459)) {
            if ( (data[10].missing != -1) && (data[10].fvalue < (float)-0.40548467636)) {
              if ( (data[7].missing != -1) && (data[7].fvalue < (float)-0.76535511017)) {
                result[3] += 0.0128623685;
              } else {
                result[3] += -0.028203223;
              }
            } else {
              if ( (data[3].missing != -1) && (data[3].fvalue < (float)-0.28086575866)) {
                result[3] += 0.00736908;
              } else {
                result[3] += 0.038045175;
              }
            }
          } else {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)0.22197172046)) {
              result[3] += -0.03449462;
            } else {
              if ( (data[8].missing != -1) && (data[8].fvalue < (float)0.17657822371)) {
                result[3] += 0.01497521;
              } else {
                result[3] += -0.007971566;
              }
            }
          }
        }
      } else {
        result[3] += -0.02309725;
      }
    }
  }
  
  // Apply base_scores
  result[0] += 0.2826409637928009033;
  result[1] += 0.1869436204433441162;
  result[2] += 0.3864985108375549316;
  result[3] += 0.1439169198274612427;
  
  // Apply postprocessor
  if (!pred_margin) { postprocess(result); }
}

// Apply postprocessor for a single target
static void postprocess_impl(float* target_result, int num_class) {
  float max_margin = target_result[0];
  double norm_const = 0.0;
  float t;
  for (int k = 1; k < num_class; ++k) {
    if (target_result[k] > max_margin) {
      max_margin = target_result[k];
    }
  }
  for (int k = 0; k < num_class; ++k) {
    t = expf(target_result[k] - max_margin);
    norm_const += t;
    target_result[k] = t;
  }
  for (int k = 0; k < num_class; ++k) {
    target_result[k] /= (float)norm_const;
  }
}

void postprocess(float* result) {
  // softmax
  postprocess_impl(&result[0], 4);
}

